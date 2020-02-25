#include "calc.h"

HWND ProCalc;
HWND Calc;
#define ID_MDI_FIRSTCHILD 50000
#define IDENT 3000

void LoadFileArgv(HWND Editor, LPSTR FileName){
	HANDLE create;
	create = CreateFile(FileName, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, 0);
	DWORD FileSize = GetFileSize(create, NULL);
	LPSTR FileText = (LPSTR) GlobalAlloc(GPTR, FileSize + 1);
	DWORD read;
	if(ReadFile(create, FileText, FileSize, &read, NULL)){
		FileText[FileSize] = 0;
		SetDlgItemTextA(Editor, text, FileText);
	}
	CloseHandle(create);
}
BOOL LoadFile(HWND Editor, LPSTR FileName){
	HANDLE create;
	
	create = CreateFile(FileName, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, 0);
	if(create != INVALID_HANDLE_VALUE){
		DWORD FileSize = GetFileSize(create, NULL);
		if(FileSize != 0xFFFFFFFF){
			LPSTR FileText = (LPSTR) GlobalAlloc(GPTR, FileSize + 1);
			DWORD read;
			if(ReadFile(create, FileText, FileSize, &read, NULL)){
				FileText[FileSize] = 0;
				SizeFile = FileSize;
				SetWindowText(Editor, FileText);
				if(itemSelect){
					GlobalFree(getFile);
					itemSelect = false;
				}
				if(editting){
					atualNameFile = (LPSTR) GlobalAlloc(GPTR, FileSize + 1);
					atualNameFile = FileText;
				}
				editting = true;
			}else{
				return FALSE;
			}
			
			GlobalFree(FileText);
		}else{
			return FALSE;
		}
	}else{
		return FALSE;
	}
	CloseHandle(create);
	return TRUE;
}

BOOL LoadPath(LPSTR FileName){
	HANDLE create;
	create = CreateFile(FileName, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, 0);
	if(create != INVALID_HANDLE_VALUE){
		DWORD FileSize = GetFileSize(create, NULL);
		if(FileSize != 0xFFFFFFFF){
			atualNameFile = (LPSTR) GlobalAlloc(GPTR, FileSize + 1);
			DWORD read;
			if(ReadFile(create, atualNameFile, FileSize, &read, NULL)){
				atualNameFile[FileSize] = 0;
			}else{
				return FALSE;
			}
			
		}else{
			return FALSE;
		}
	}else{
		return FALSE;
	}
	CloseHandle(create);
	return TRUE;
}

BOOL SaveFile(HWND Editor, LPSTR FileName)
{
   HANDLE Save;
   Save = CreateFile(FileName, GENERIC_WRITE, 0, 0,
      CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, 0);
   if(Save != INVALID_HANDLE_VALUE)
   {
      DWORD TextLength;
      TextLength = GetWindowTextLength(Editor);
      if(TextLength > 0)// No need to bother if there's no text.
      {
         LPSTR Text;
         Text = (LPSTR)GlobalAlloc(GPTR, TextLength + 1);
         if(Text != NULL)
         {
            if(GetWindowText(Editor, Text, TextLength + 1))
            {
               DWORD Writen;
               WriteFile(Save, Text, TextLength, &Writen, NULL);
			 
               editting = true;
            }else{
				return FALSE;
			}
           GlobalFree(Text);
         }else{
			 return FALSE;
		 }
      }else{
		  return FALSE;
	  }
      CloseHandle(Save);
   }else{
	   return FALSE;
   }
   return TRUE;
}

BOOL OpenFile(HWND Open, bool action, int i){
	OPENFILENAME openFile;
	char FileName[MAX_PATH];
	ZeroMemory(&openFile, sizeof(openFile));
	FileName[0] = 0;
	
	openFile.lStructSize = sizeof(openFile);
	openFile.hwndOwner = Open;
	openFile.lpstrFilter = "Arquivo de Formulas (*.math)\0*.math\0\0";
	openFile.lpstrFile = FileName;
	openFile.nMaxFile = MAX_PATH;
	openFile.lpstrDefExt = "math";
	atualNameFile = FileName;
	
	if(action){
		openFile.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
		if(!GetOpenFileName(&openFile))
			return FALSE;
		
			if(!LoadFile(GetDlgItem(Open, text), FileName))
				return FALSE;
			
				nameFile = FileName;
				atualNameFile = FileName;
				
				FILE *file = fopen("path.log", "w");
				fprintf(file, "%s", atualNameFile);
				fclose(file);
			
	}else{
		if(i != 0){
			openFile.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT;
			if(!GetSaveFileName(&openFile))
				return FALSE;
			
				if(!SaveFile(GetDlgItem(Open, text), FileName))
					return FALSE;
				
				FILE *file = fopen("path.log", "w");
				fprintf(file, "%s", atualNameFile);
				fclose(file);
				
			
		}else{
			if(!LoadPath("path.log"))
				return FALSE;
			
				if(!SaveFile(GetDlgItem(Open, text), atualNameFile))
					return FALSE;
				
				GlobalFree(atualNameFile);
			
		}
	}
	return TRUE;
}

LRESULT CALLBACK CalcProc(HWND calc, UINT msg, WPARAM act1, LPARAM act2){
	
	if(press){ msg = WM_COMMAND; }
	if(press == true){
		if(keys != WM_DESTROY)
			act1 = keys;
		else
			msg = keys;
	}
	keys = 0;
	press = false;
	switch(msg){
		case WM_CREATE:
			Calc = calc;
			CreateWindow(TEXT("edit"), TEXT(""), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 5, 249, 42, 
			calc, (HMENU) text, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("1"), WS_VISIBLE | WS_CHILD | WS_BORDER, 54, 50, 50, 50 ,
			calc, (HMENU) button1, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("2"), WS_VISIBLE | WS_CHILD | WS_BORDER, 104, 50, 50, 50 ,
			calc, (HMENU) button2, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("3"), WS_VISIBLE | WS_CHILD | WS_BORDER, 154, 50, 50, 50 ,
			calc, (HMENU) button3, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("4"), WS_VISIBLE | WS_CHILD | WS_BORDER, 54, 100, 50, 50 ,
			calc, (HMENU) button4, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("5"), WS_VISIBLE | WS_CHILD | WS_BORDER, 104, 100, 50, 50 ,
			calc, (HMENU) button5, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("6"), WS_VISIBLE | WS_CHILD | WS_BORDER, 154, 100, 50, 50 ,
			calc, (HMENU) button6, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("7"), WS_VISIBLE | WS_CHILD | WS_BORDER, 54, 150, 50, 50 ,
			calc, (HMENU) button7, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("8"), WS_VISIBLE | WS_CHILD | WS_BORDER, 104, 150, 50, 50 ,
			calc, (HMENU) button8, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("9"), WS_VISIBLE | WS_CHILD | WS_BORDER, 154, 150, 50, 50 ,
			calc, (HMENU) button9, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("+"), WS_VISIBLE | WS_CHILD | WS_BORDER, 54, 200, 50, 50 ,
			calc, (HMENU) add, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("0"), WS_VISIBLE | WS_CHILD | WS_BORDER, 104, 200, 50, 50 ,
			calc, (HMENU) button0, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("*"), WS_VISIBLE | WS_CHILD | WS_BORDER, 154, 200, 50, 50 ,
			calc, (HMENU) mul, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("/"), WS_VISIBLE | WS_CHILD | WS_BORDER, 204, 50, 50, 50 ,
			calc, (HMENU) div, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("-"), WS_VISIBLE | WS_CHILD | WS_BORDER, 204, 100, 50, 50 ,
			calc, (HMENU) sub, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("%"), WS_VISIBLE | WS_CHILD | WS_BORDER, 204, 150, 50, 50 ,
			calc, (HMENU) por, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("="), WS_VISIBLE | WS_CHILD | WS_BORDER, 204, 200, 50, 50 ,
			calc, (HMENU) equ, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("Bin"), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 50, 50, 50 ,
			calc, (HMENU) bin, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("Hex"), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 100, 50, 50 ,
			calc, (HMENU) hex, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("Dec"), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 150, 50, 50 ,
			calc, (HMENU) dec, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("A"), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 200, 50, 50 ,
			calc, (HMENU) la, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("B"), WS_VISIBLE | WS_CHILD | WS_BORDER, 5, 250, 50, 50 ,
			calc, (HMENU) lb, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("C"), WS_VISIBLE | WS_CHILD | WS_BORDER, 54, 250, 50, 50 ,
			calc, (HMENU) lc, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("D"), WS_VISIBLE | WS_CHILD | WS_BORDER, 104, 250, 50, 50 ,
			calc, (HMENU) ld, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("E"), WS_VISIBLE | WS_CHILD | WS_BORDER, 154, 250, 50, 50 ,
			calc, (HMENU) le, NULL, NULL);
			CreateWindow(TEXT("BUTTON"), TEXT("F"), WS_VISIBLE | WS_CHILD | WS_BORDER, 204, 250, 50, 50 ,
			calc, (HMENU) lf, NULL, NULL);
			
			UpdateWindow(calc);
		break;
		case WM_COMMAND:
			switch(act1){
				case button1: //1
				   if(operacao == '=' || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
				   bins = false;
				   GetDlgItemTextA(calc, text, gettext, 100);
				   strcat(gettext, "1");
                   SetDlgItemTextA(calc, text, gettext);
				   num *= 10;
				   num += 1;
				   switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }
					
				break;
				case button2: //2
				    if(operacao == '=' || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "2");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 2;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = num; break;
							case 'B': B = num; break;
							case 'C': C = num; break;
							case 'D': D = num; break;
							case 'E': E = num; break;
							case 'F': F = num; break;
						}
				   }				   
				break;
				case button3: //3
					if(operacao == '=' ||  bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}	
					bins = false;					
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "3");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 3;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button4: //4
					 if(operacao == '=' ||  bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "4");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 4;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button5: //5
					 if(operacao == '=' ||  bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "5");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 5;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button6: //6
					 if(operacao == '=' ||  bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "6");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 6;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button7: //7
					 if(operacao == '='  || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "7");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 7;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button8: //8
					 if(operacao == '='  || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "8");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 8;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button9: //9
					 if(operacao == '=' || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "9");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 9;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case button0: //0
					 if(operacao == '='  || bins == true) {SetDlgItemTextA(calc, text, ""); operacao = '_';}
					 bins = false;
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, "0");
                    SetDlgItemTextA(calc, text, gettext);
					num *= 10;
				    num += 0;
					switch(operacao){
					   case '+': memory += num; break;
					   case '-': memory -= num; break;
					   case '*': memory *= num; break;
					   case '/': memory /= num; break;
					   case '%': memory %= num; break;
					   default: memory = num; break;
				   }
				   if(letter == true){
					   	switch(chars){
							case 'A': A = memory; break;
							case 'B': B = memory; break;
							case 'C': C = memory; break;
							case 'D': D = memory; break;
							case 'E': E = memory; break;
							case 'F': F = memory; break;
						}
				   }				   
				break;
				case add: //+
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, " + ");
                    SetDlgItemTextA(calc, text, gettext);
					operacao = '+';
					num = 0;
					eq = false;
				break;				
				case sub: //-
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, " - ");
                    SetDlgItemTextA(calc, text, gettext);
					operacao = '-';
					num = 0;
					eq = false;
				break;
				case div: //:
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, " / ");
                    SetDlgItemTextA(calc, text, gettext);
					operacao = '/';
					num = 0;
					eq = false;
				break;
				case mul: //*
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, " * ");
                    SetDlgItemTextA(calc, text, gettext);
					operacao = '*';
					num = 0;
					eq = false;
				break;
				case por: //%
					GetDlgItemTextA(calc, text, gettext, 100);
				    strcat(gettext, " % ");
                    SetDlgItemTextA(calc, text, gettext);
					operacao = '%';
					num = 0;
					eq = false;
				break;
				case equ: //=

						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, " = ");
						if(letter == true){
							if(eq == false){
								if(operacao == '%'){
								if(lmemory == 1)
									sprintf(buffer, "%s", "false");
								else
									sprintf(buffer, "%s", "true");
								}else{
									sprintf(buffer, "%d", lmemory);
								}
								str = buffer;
								strcat(gettext, str);
								//lmemory = 0;
							}
							SetDlgItemTextA(calc, text, gettext);
							operacao = '_';
						
						}else{			
							if(operacao == '%'){
								if(memory == 1)
									sprintf(buffer, "%s", "false");
								else
									sprintf(buffer, "%s", "true");
							}else{
								sprintf(buffer, "%d", memory);
							}
							str = buffer;
							strcat(gettext, str);
							SetDlgItemTextA(calc, text, gettext);
							operacao = '=';
						
						}
					
					eq = true;
					memory = 0;
					num = 0;
				break;
				case bin: //bin
					b = -1;
					if(number == 0)
						number = num;
					SetDlgItemTextA(calc, text, "");
					while(number != 0){
						b++;
						getbin[b] = number % 2;
						number = number / 2;
					}
					while(b >= 0){
						GetDlgItemTextA(calc, text, gettext, 100);
						sprintf(gettext, "%s%d", gettext, getbin[b]);
						SetDlgItemTextA(calc, text, gettext);
						b--;
					}
					
					
					sprintf(gettext, "%s", "");
					bins = true;
					number = num;
					num = 0;
				break;
				case hex: //hex
					if(number == 0)
						number = num;
					
					sprintf(gettext, "%x", number);
					SetDlgItemTextA(calc, text, gettext);
					
					num = 0;
				break;
				case dec: 
				break;
				case la: //a
				   if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "A");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'A';
						//if(formule == false){
							switch(operacao){
							   case '+': lmemory += A; break;
							   case '-': lmemory -= A; break;
							   case '*': lmemory *= A; break;
							   case '/': lmemory /= A; break;
							   case '%': lmemory %= A; break;
							   default: lmemory = A; break;
						   }
						//}
				
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "A");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case lb: //b
					if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "B");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'B';
						//if(formule == false){
							switch(operacao){
							   case '+': lmemory += B; break;
							   case '-': lmemory -= B; break;
							   case '*': lmemory *= B; break;
							   case '/': lmemory /= B; break;
							   case '%': lmemory %= B; break;
							   default: lmemory = B; break;
						   }
						//}
				
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "B");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case lc: //c
					if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "C");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'C';
						//if(formule == false){
							switch(operacao){
							   case '+': lmemory += C; break;
							   case '-': lmemory -= C; break;
							   case '*': lmemory *= C; break;
							   case '/': lmemory /= C; break;
							   case '%': lmemory %= C; break;
							   default: lmemory = C; break;
						   }
						//}
					
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "C");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case ld: //d
					if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "D");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'D';
			
							switch(operacao){
							   case '+': lmemory += D; break;
							   case '-': lmemory -= D; break;
							   case '*': lmemory *= D; break;
							   case '/': lmemory /= D; break;
							   case '%': lmemory %= D; break;
							   default: lmemory = D; break;
						   }
				
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "D");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case le: //e
					if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "E");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'E';
				
							switch(operacao){
							   case '+': lmemory += E; break;
							   case '-': lmemory -= E; break;
							   case '*': lmemory *= E; break;
							   case '/': lmemory /= E; break;
							   case '%': lmemory %= E; break;
							   default: lmemory = E; break;
						   }
				
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "E");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case lf: //f
					if(base == false){
						letter = true;
						if(eq == true) {SetDlgItemTextA(calc, text, "");}
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "F");
						SetDlgItemTextA(calc, text, gettext);
						chars = 'F';
					
							switch(operacao){
							   case '+': lmemory += F; break;
							   case '-': lmemory -= F; break;
							   case '*': lmemory *= F; break;
							   case '/': lmemory /= F; break;
							   case '%': lmemory %= F; break;
							   default: lmemory = F; break;
						   }
					
					}else{
						GetDlgItemTextA(calc, text, gettext, 100);
						strcat(gettext, "F");
						SetDlgItemTextA(calc, text, gettext);
					}
				break;
				case clear: //clear
					SetDlgItemTextA(calc, text, "");
					letter = false;
					//eq = true;
					memory = 0;
					num = 0;
				break;
				case conversor: //conv
					if(base)
						base = false;
					else	
						base = true;
				break;
				case New: //New
					SetDlgItemTextA(calc, text, "");
					editting = false;
					
				break;
				case open: //Open
					if(OpenFile(calc, true, 1)){
						GlobalFree(atualNameFile);
						itemmenu = GetMenu(ProCalc);
						filemenu = GetSubMenu(itemmenu, 3);
						EnableMenuItem(itemmenu, 3, MF_BYPOSITION | MF_ENABLED);
						InsertMenu(filemenu, 1, MF_BYPOSITION | MF_ENABLED | MF_STRING | MF_CHECKED, ident, atualNameFile);
						CheckMenuItem(filemenu, item, MF_BYCOMMAND | MF_UNCHECKED);
						
						item = ident;
						ident = ident + 1;
						
						DrawMenuBar(ProCalc);
					}
				break;
				case save: //Save
					if(editting)
						OpenFile(calc, false, 0);
					else{
						if(OpenFile(calc, false, 1)){
							GlobalFree(atualNameFile);
							itemmenu = GetMenu(ProCalc);
							filemenu = GetSubMenu(itemmenu, 3);
							EnableMenuItem(itemmenu, 3, MF_BYPOSITION | MF_ENABLED);
							InsertMenu(filemenu, 1, MF_BYPOSITION | MF_ENABLED | MF_STRING | MF_CHECKED, ident, atualNameFile);
							CheckMenuItem(filemenu, item, MF_BYCOMMAND | MF_UNCHECKED);
						
							item = ident;
							ident = ident + 1;
						
							DrawMenuBar(ProCalc);
						}
					}
				break;
				case saveas: //Save as
					if(OpenFile(calc, false, 1)){
						GlobalFree(atualNameFile);
						itemmenu = GetMenu(ProCalc);
						filemenu = GetSubMenu(itemmenu, 3);
						EnableMenuItem(itemmenu, 3, MF_BYPOSITION | MF_ENABLED);
						InsertMenu(filemenu, 1, MF_BYPOSITION | MF_ENABLED | MF_STRING | MF_CHECKED, ident, atualNameFile);
						CheckMenuItem(filemenu, item, MF_BYCOMMAND | MF_UNCHECKED);
						
						item = ident;
						ident = ident + 1;
						
						DrawMenuBar(ProCalc);
					}
				break;
				case load: //load
					base = false;
					quantInput = 0;
					GetDlgItemTextA(calc, text, gettext, 100);
					if(gettext == "")
						nameFile = NULL;
					else
						nameFile = "Formule";
					
					if(nameFile != NULL){
						GetDlgItemTextA(calc, text, gettext, 100);
						if((gettext != NULL) && ((gettext[0] == '[') && (gettext[1] == 'M') && (gettext[2] == 'a') &&
						 (gettext[3] == 't') && (gettext[4] == 'h') && (gettext[5] == ']'))){
							 bool sintax = true;
							 DWORD textLength = GetWindowTextLength(GetDlgItem(calc, text));
							 size = 0;
							 j = 0;
							 char error[50];
							for(int i = 0; i < textLength; i++){
								if(gettext[i] != 'A' && gettext[i] != 'B' && gettext[i] != 'C' && gettext[i] != 'D' &&
								   gettext[i] != 'E' && gettext[i] != 'F' && gettext[i] != ' ' && gettext[i] != '(' && 
								   gettext[i] != ')' && gettext[i] != '+' && gettext[i] != '-' && gettext[i] != '*' && 
								   gettext[i] != '/' && gettext[i] != '%' && gettext[i] != '=' && gettext[i] != '!' &&
								   gettext[i] != '<' && gettext[i] != '>' && gettext[i] != ';' && gettext[i] != '[' &&
								   gettext[i] != 'M' && gettext[i] != 'a' && gettext[i] != 't' && gettext[i] != 'h' &&
								   gettext[i] != ']' && gettext[i] != ':' && gettext[i] != 'I' && gettext[i] != 'n' && 
								   gettext[i] != 'p' && gettext[i] != 'u' && gettext[i] != 't' && gettext[i] != '0' && 
								   gettext[i] != '1' && gettext[i] != '2' && gettext[i] != '3' && gettext[i] != '4' && 
								   gettext[i] != '5' && gettext[i] != '6' && gettext[i] != '7' && gettext[i] != '8' && 
								   gettext[i] != '9')
								    {	 
										sintax = false;
										break;
								    }
									
								if(gettext[i] == 'I'){
									if(gettext[i+1] == 'n' && gettext[i+2] == 'p' && gettext[i+3] == 'u' && 
									gettext[i+4] == 't'){
										sintax = true;
										input = true;
										term = false;
										j = i+6;
										while(gettext[j] != ']'){
											switch(gettext[j]){
												case '0': quantInput *= 10; quantInput += 0; break;
												case '1': quantInput *= 10; quantInput += 1; break;
												case '2': quantInput *= 10; quantInput += 2; break;
												case '3': quantInput *= 10; quantInput += 3; break;
												case '4': quantInput *= 10; quantInput += 4; break;
												case '5': quantInput *= 10; quantInput += 5; break;
												case '6': quantInput *= 10; quantInput += 6; break;
												case '7': quantInput *= 10; quantInput += 7; break;
												case '8': quantInput *= 10; quantInput += 8; break;
												case '9': quantInput *= 10; quantInput += 9; break;
											}
											j++;
										}
										
										
									}
								}
									size++;
								
							}
							sintax = true;
							
							
							sprintf(error, "char[%d] - ", size);
							strcat(error, "Incorrect Sintax Error : Unknowns characters!");
							
							
							if(sintax){

								formule = true;
								form = gettext;
								size = textLength;
								MessageBox(calc, "Formula carregada com sucesso!", "Success", MB_OK | MB_ICONINFORMATION);
								SetDlgItemTextA(calc, text, "");
								
								if(input){
									j = j + 1;
									if(gettext[j+1] == '='){
										if(gettext[j+2] == ' '){
											j = j + 3;
										}else{
											j = j + 2;
										}
									}
									if(gettext[j+2] == '='){
										if(gettext[j+3] == ' '){
											j = j + 4;
										}else{
											j = j + 3;
										}
									}
									at = j-1;
									
								}
							}else{
								MessageBox(calc, error, "Error", MB_OK | MB_ICONERROR);
							}
							
						}else{
							MessageBox(calc, "Empty field or incorrect sintax!", "Error", MB_OK | MB_ICONERROR);
						}
					}else{
						MessageBox(calc, "No Opened Files!", "Error", MB_OK | MB_ICONERROR);
					}
				break;
				case run: //run
					if(input == false){
						chars = '0';
						letter = true;
						base = false;
						formule = true;
						attChar = '0';
						var = false;
						lmemory = 0;
						memory = 0;
						num = 0;
						operacao = '_';
									
									
						for(int i = 0; i < size-1; i++){
							

								
							if(form[i] != '[' && form[i] != 'M' && form[i] != 'a' && form[i] != 't' && form[i] != 'h' && form[i] != ']'
							&& form[i] != ' ' && form[i] != ';' && form[i] != 'I' && form[i] != 'n' && form[i] != 'p' && form[i] != 'u'
							&& form[i] != 't')
							{
								switch(form[i]){
									case 'A': chars = 'A'; var = true; break;
									case 'B': chars = 'B'; var = true; break;
									case 'C': chars = 'C'; var = true; break;
									case 'D': chars = 'D'; var = true; break;
									case 'E': chars = 'E'; var = true; break;
									case 'F': chars = 'F'; var = true; break;
									case '+': operacao = '+'; var = false; break;
									case '-': operacao = '-'; var = false; break;
									case '*': operacao = '*'; var = false; break;
									case '/': operacao = '/'; var = false; break;
									case '%': operacao = '%'; var = true; break;
									case '<': operacao = '<'; var = false; break;
									case '>': operacao = '>'; var = false; break;
									case ':': operacao = ':'; var = true; break;
									case '!': operacao = '!'; var = true; break;
									case '=': attChar = (form[i-1] == ' ') ? form[i-2] : form[i-1];
									break;
									default: chars = '0'; operacao = '0'; break;
								}
								
								if(var){
									switch(chars){
										case 'A':
											switch(operacao){
												case '+': lmemory += A; break;
												case '-': lmemory -= A; break;
												case '*': lmemory *= A; break;
												case '/': lmemory /= A; break;
												case '%': lmemory %= A; break;
												case '<': lmemory = (lmemory < A) ? 1 : 0; break;
												case '>': lmemory = (lmemory > A) ? 1 : 0; break;
												case ':': lmemory = (lmemory ==  A) ? 1 : 0; break;
												case '!': lmemory = (lmemory !=  A) ? 1 : 0; break;
												default: lmemory = A; break;
											}
										break;
										case 'B':
											switch(operacao){
												case '+': lmemory += B; break;
												case '-': lmemory -= B; break;
												case '*': lmemory *= B; break;
												case '/': lmemory /= B; break;
												case '%': lmemory %= B; break;
												case '<': lmemory = (lmemory < B) ? 1 : 0; break;
												case '>': lmemory = (lmemory > B) ? 1 : 0; break;
												case ':': lmemory = (lmemory == B) ? 1 : 0; break;
												case '!': lmemory = (lmemory != B) ? 1 : 0; break;
												default: lmemory = B; break;
											}
										break;
										case 'C':
											switch(operacao){
												case '+': lmemory += C; break;
												case '-': lmemory -= C; break;
												case '*': lmemory *= C; break;
												case '/': lmemory /= C; break;
												case '%': lmemory %= C; break;
												case '<': lmemory = (lmemory < C) ? 1 : 0; break;
												case '>': lmemory = (lmemory > C) ? 1 : 0; break;
												case ':': lmemory = (lmemory == C) ? 1 : 0; break;
												case '!': lmemory = (lmemory != C) ? 1 : 0; break;
												default: lmemory = C; break;
											}								
										break;
										case 'D':
											switch(operacao){
												case '+': lmemory += D; break;
												case '-': lmemory -= D; break;
												case '*': lmemory *= D; break;
												case '/': lmemory /= D; break;
												case '%': lmemory %= D; break;
												case '<': lmemory = (lmemory < D) ? 1 : 0; break;
												case '>': lmemory = (lmemory > D) ? 1 : 0; break;
												case ':': lmemory = (lmemory == D) ? 1 : 0; break;
												case '!': lmemory = (lmemory != D) ? 1 : 0; break;
												default: lmemory = D; break;
											}								
										break;
										case 'E':
											switch(operacao){
												case '+': lmemory += E; break;
												case '-': lmemory -= E; break;
												case '*': lmemory *= E; break;
												case '/': lmemory /= E; break;
												case '%': lmemory %= E; break;
												case '<': lmemory = (lmemory < E) ? 1 : 0; break;
												case '>': lmemory = (lmemory > E) ? 1 : 0; break;
												case ':': lmemory = (lmemory == E) ? 1 : 0; break;
												case '!': lmemory = (lmemory != E) ? 1 : 0; break;
												default: lmemory = E; break;
											}								
										break;
										case 'F':
											switch(operacao){
												case '+': lmemory += F; break;
												case '-': lmemory -= F; break;
												case '*': lmemory *= F; break;
												case '/': lmemory /= F; break;
												case '%': lmemory %= F; break;
												case '<': lmemory = (lmemory < F) ? 1 : 0; break;
												case '>': lmemory = (lmemory > F) ? 1 : 0; break;
												case ':': lmemory = (lmemory == F) ? 1 : 0; break;
												case '!': lmemory = (lmemory != F) ? 1 : 0; break;
												default: lmemory = F; break;
											}								
										break;
									}
								}
								
							}
						}
						
						if(attChar != '0'){
							switch(attChar){
								case 'A': A = lmemory;  break;
								case 'B': B = lmemory;  break;
								case 'C': C = lmemory;  break;
								case 'D': D = lmemory;  break;
								case 'E': E = lmemory;  break;
								case 'F': F = lmemory;  break;
								default: attChar = '0';   break;
							}
						}
						
						if(operacao == '%'){
							if(lmemory == 1)
								sprintf(buffer, "output : %s", "false");
							else
								sprintf(buffer, "output : %s", "true");
						}else{
							if(operacao == '<' || operacao == '>' || operacao == ':' || operacao == '!'){
								if(lmemory == 0)
									sprintf(buffer, "output : %s", "false");
								else
									sprintf(buffer, "output : %s", "true");
							}else{
								if(attChar != '0')
									sprintf(buffer, "output : %c = %d", attChar, lmemory);
								else
									sprintf(buffer, "output : %d", lmemory);
								
								attChar = '0';
							}
						}
						str = buffer;
			
						SetDlgItemTextA(calc, text, str);
						if(term){operacao = '=';}
						
						if(term == false){
							if(endInput == true){
								if(n < quantInput){
									n = n + 1; 
									j = at;
									input = true;
									endInput = false;
								}
								if(n == quantInput){
									term = true;
									n = 0;
								}
							}
						}
					
					}else{
						SetDlgItemTextA(calc, text, "Input : "); ////3
						
					}
					
					
				break;
				case quit: //quit
					PostQuitMessage(0);
				break;
				case copy:
					SendDlgItemMessage(calc, text, WM_COPY, 0, 0);
				break;
				case cut:
					SendDlgItemMessage(calc, text, WM_CUT, 0, 0);
				break;
				case paste:
					SendDlgItemMessage(calc, text, WM_PASTE, 0, 0);
				break;
				case undo:
					SendDlgItemMessage(calc, text, EM_UNDO, 0, 0);
				break;
				case imp:
						if(input){
										
								if(gettext[j] == ' ' || gettext[j] == '+' || gettext[j] == '-' || gettext[j] == '*'
								|| gettext[j] == '/' || gettext[j] == ':' || gettext[j] == '!' || gettext[j] == '<'
								|| gettext[j] == '>' || gettext[j] == '=')
								{
									if(gettext[j-1] == ']'){
										j = j + 1;
									}else{
										while(gettext[j] != 'A' && gettext[j] != 'B' && gettext[j] != 'C'
										   && gettext[j] != 'D' && gettext[j] != 'E' && gettext[j] != 'F'
										   && gettext[j] != ';')
										{
											j = j + 1;
										}
									}
								}
								if(gettext[j] != ' ' && gettext[j] != '+' && gettext[j] != '-' && gettext[j] != '*'
								&& gettext[j] != '/' && gettext[j] != ':' && gettext[j] != '!' && gettext[j] != '<'
								&& gettext[j] != '>' && gettext[j] != '=')
								{
									GetDlgItemTextA(calc, text, getnum, 100);
									DWORD textLength = GetWindowTextLength(GetDlgItem(calc, text));
									int i = 8;
									while(i < textLength){
										switch(getnum[i]){
											case '0': numbers *= 10; numbers += 0; break;
											case '1': numbers *= 10; numbers += 1; break;
											case '2': numbers *= 10; numbers += 2; break;
											case '3': numbers *= 10; numbers += 3; break;
											case '4': numbers *= 10; numbers += 4; break;
											case '5': numbers *= 10; numbers += 5; break;
											case '6': numbers *= 10; numbers += 6; break;
											case '7': numbers *= 10; numbers += 7; break;
											case '8': numbers *= 10; numbers += 8; break;
											case '9': numbers *= 10; numbers += 9; break;
										}
										i++;
									}
									switch(gettext[j]){
										case 'A': A = numbers; break;
										case 'B': B = numbers; break;
										case 'C': C = numbers; break;
										case 'D': D = numbers; break;
										case 'E': E = numbers; break;
										case 'F': F = numbers; break;
									}
									numbers = 0;
									j = j + 1;
									
								}
						
								if(gettext[j] == ';'){ ////2 
									endInput = true;
								}else{
									SetDlgItemTextA(calc, text, "");
									SetDlgItemTextA(calc, text, "Input : ");
								}
									
							
						}
				break;
				case reset:
							HMENU itemmenu, filemenu;
							int i;
							itemmenu = GetMenu(ProCalc);
							filemenu = GetSubMenu(itemmenu, 3);
							i = 3000;
							while(i <= ident){
								RemoveMenu(filemenu, i, MF_BYCOMMAND);
								i = i + 1;
							}
							EnableMenuItem(itemmenu, 3, MF_BYPOSITION | MF_GRAYED);
							DrawMenuBar(ProCalc);
				break;
				case about:
					MessageBox(NULL, "ProCalc v1.0.0 (32-bit)\nName: ProCalc\nDeveloped By: Francis\nBusiness: BFTCorporations\nBuild: Feb 25 2019 - 21:47\nCurrent Version: 1.0.0\nOS: Windows 7 (32-bit)", "About the ProCalc", MB_OK | MB_ICONINFORMATION);
				break;
				default: //def
					if(editting){
						if(act1 > 2999 && act1 < 3020){
							HMENU itemmenu, filemenu;
							itemmenu = GetMenu(ProCalc);
							filemenu = GetSubMenu(itemmenu, 3);
							int i = 2999;
							while(i <= ident){
								CheckMenuItem(filemenu, i, MF_BYCOMMAND | MF_UNCHECKED);
								i = i + 1;
							}
	
							CheckMenuItem(filemenu, act1, MF_BYCOMMAND | MF_CHECKED);
							
							getFile = (LPSTR) GlobalAlloc(GPTR, MAX_PATH);
							GetMenuString(filemenu, act1, getFile, MAX_PATH, MF_BYCOMMAND);
							itemSelect = true;
							atualNameFile = getFile;
							FILE *file = fopen("path.log", "w");
							fprintf(file, "%s", atualNameFile);
							fclose(file);
				
							LoadFile(GetDlgItem(calc, text), getFile);
							DrawMenuBar(ProCalc);
						}
					}
					break;
			}
		break;
		case WM_DESTROY: //quit
			PostQuitMessage(0);
		default:
			DefWindowProc(calc, msg, act1, act2);
	}
	
}

void LoadClass(char *ClassName, char *MenuName, HINSTANCE inst, int ord){
	calcex.lpszClassName = ClassName;
	calcex.lpszMenuName = MenuName;
	calcex.hInstance = inst;
	switch(ord){
		case 0: calcex.lpfnWndProc = CalcProc; break;
		case 1: break;
	}
	calcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	calcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	calcex.cbSize = sizeof(WNDCLASSEX);
	calcex.cbClsExtra = 0;
	calcex.cbWndExtra = 0;
	calcex.style = CS_DBLCLKS;
	calcex.hbrBackground = (HBRUSH) (COLOR_WINDOW+1);
	RegisterClassEx(&calcex);
}

int WINAPI WinMain(HINSTANCE inst1, HINSTANCE inst2, LPSTR argv, int ncmd){
	MSG msg;
	ginst1 = inst1;
	
	LoadClass(class1, menu1, ginst1, 0);
	
	CLIENTCREATESTRUCT ccs;
	ccs.hWindowMenu  = GetSubMenu(GetMenu(Calc), 3);
	ccs.idFirstChild = ID_MDI_FIRSTCHILD;
	
	ProCalc = CreateWindowEx(WS_EX_CLIENTEDGE, class1, title1, WS_OVERLAPPEDWINDOW, 500, 200, 275, 362, HWND_DESKTOP, NULL, inst1, (LPVOID)&ccs);
	ShowWindow(ProCalc, ncmd);
	
	
	
	while(GetMessage(&msg, NULL, 0, 0)){
		
		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_N) & isPress){
				keys = New;
				press = true;
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}
		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_O) & isPress){
				keys = open;
				press = true;
				TranslateMessage(&msg);
				DispatchMessage(&msg);
			}
		}

		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_S) & isPress){
					keys = save;
					press = true;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
			}
		}
		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_SHIFT) & isPress){
				if(GetKeyState(VK_S) & isPress){
					keys = saveas;
					press = true;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
			}
		}
		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_G) & isPress){
					keys = conversor;
					press = true;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
			}
		}
		if(GetKeyState(VK_CONTROL) & isPress){
			if(GetKeyState(VK_L) & isPress){
					keys = clear;
					press = true;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
			}
		}
		if(GetKeyState(VK_F7) & isPress){
			keys = load;
			press = true;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		if(GetKeyState(VK_F8) & isPress){
			keys = run;
			press = true;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		if(GetKeyState(VK_F9) & isPress){
			keys = about;
			press = true;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		
		if(GetKeyState(VK_Q) & isPress){
			keys = WM_DESTROY;
			press = false;
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		
		if(term == false){
			if(GetKeyState(VK_ENTER) & isPress){
				if(endInput == false){
					if(n < quantInput){
						keys = imp;
						press = true;
						TranslateMessage(&msg);
						DispatchMessage(&msg);
						
					}
				}
				
			}
			
			if(input == true){ ////1
				if(endInput == true){
					input = false;
					keys = run;
					press = true;
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
			}
		}
		
		if(!setOneTime){
			LoadFileArgv(Calc, argv);
			setOneTime = true;
		}
		
		
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}


