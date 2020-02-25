#ifndef _CALC_H_
#define _CALC_H_
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <commctrl.h>

#pragma once

LRESULT CALLBACK CalcProc(HWND, UINT, WPARAM, LPARAM);
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int);
char class1[ ] = "CalcApp";
char menu1[ ] = "CalcMenu";
char title1[ ] = "ProCalc";
WNDCLASSEX calcex;
HINSTANCE ginst1, ginst2;
LPSTR atualNameFile;
LPSTR atualFile;
HMENU itemmenu, filemenu;
LPSTR getFile;

bool letter   = false;
bool eq       = true;
bool base     = false;
bool formule  = false;
bool bins     = false;
bool var      = false;
bool editting = false;
bool press    = false;
bool input 	  = false;
bool checked  = false;
bool endInput = false;
bool term     = false;
bool itemSelect = false;
bool setOneTime = false;
int num, memory, lmemory, number, b, size, keys, quantInput, j;
int numbers;
int n = 0;
int at = 0;
int v, cont, k;
int SizeFile = 0;
int item = 2999;
int ident = 3000;
int A, B, C, D, E, F;
char *form, *nameFile, *str;
char chars, operacao, attChar;
char gettext[100], gettext1[100], buffer[100];
int getbin[100];
char getnum[20];


#define isPress 0x8000
#define VK_Q 0x51
#define VK_S 0x53
#define VK_O 0x4F
#define VK_N 0x4E
#define VK_G 0x47
#define VK_L 0x4C
#define VK_A 0x41
#define VK_B 0x42
#define VK_C 0x43
#define VK_D 0x44
#define VK_E 0x45
#define VK_F 0x46
#define VK_EQ 0x3D
#define VK_POR 0x25
#define VK_ENTER 0x0D

#define button1 1
#define button2 2
#define button3 3
#define button4 4
#define button5 5
#define button6 6
#define button7 7
#define button8 8
#define button9 9
#define button0 0
	
#define add 10
#define sub 11
#define mul 12
#define por 13
#define div 14
#define equ 15
	
#define bin 16
#define hex 17
#define dec 18
#define la 19
#define lb 20
#define lc 21
#define ld 22
#define le 23
#define lf 24

#define text 25
	
#define New 30
#define open 31
#define save 32
#define saveas 33
#define copy 34
#define cut 35
#define paste 36
#define clear 37
#define about 38
#define conversor 39
#define load 40
#define run 41
#define quit 42
#define undo 43
#define imp 44
#define reset 45
	
#endif


