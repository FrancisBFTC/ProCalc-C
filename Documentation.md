**********************************************************************************
<h1 align="center"><a name="top">Documentação do ProCalc</a></h1>

Bem vindo a documentação do ProCalc! aqui é demonstrado todas as funcionalidades atuais do software, descrições gerais e técnicas. Se optar por ler um assunto em específico abaixo contém um menu de atalho, se não, continue rolando para ler toda a documentação:
  
  <a name="menuprincipal"></a>
  * <a href="#desc1"> Descrições Gerais </a>
  * <a href="#desc2"> Descrições Técnicas </a>
  * <a href="#util"> Utilização do software </a>
 
<a name="desc1"><h1 align="center"> ---------- Descrições Gerais ---------- </h1></a>

O ProCalc é uma espécie de "Calculadora Programável", onde você pode desenvolver fórmulas pelo editor do ProCalc, salvar um arquivo com uma extensão e abrir este arquivo para carregar & executar as fórmulas. O software contém variáveis e operadores aritméticos para calcular operações matemáticas, tanto programadas quando no tempo atual, veja abaixo o menu de navegação:

<a name="menu1"></a>
### Cálculo de números:
  * <a href="#num1"> Operador de adição </a> 
  * <a href="#num2"> Operador de subtração </a> 
  * <a href="#num3"> Operador de multiplicação </a>
  * <a href="#num4"> Operador de divisão </a>
  
### Cálculo de variáveis:
  * <a href="#var1"> Inserção de valores </a>
  * <a href="#var2"> Operação em variáveis </a>
  
### Representação de sistemas numéricos:
  * <a href="#rep1"> representação decimal </a>
  * <a href="#rep2"> representação hexadecimal </a>
  * <a href="#rep3"> representação binária </a>
  
### Programando em linguagem MATH
 * <a href="#math1"> A linguagem DSL </a>
 * <a href="#math2"> Criando fórmulas no ProCalc (Salvando arquivos) </a>
 * <a href="#math3"> Carregando fórmulas no ProCalc (Abrindo arquivos) </a>
 * <a href="#math4"> Saída de dados (OUTPUT) </a>
 * <a href="#math5"> Entrada de dados (INPUT) </a>
 
 ### Menu de navegação do ProCalc
 * <a href="#men1"> Item arquivo (file) </a>
 * <a href="#men2"> Item edição (edit) </a>
 * <a href="#men3"> Item executar (run) </a>
 * <a href="#men4"> Item visto (view) </a>
 * <a href="#men5"> Item ajuda (help) </a>
 
 ###  <a href="#lim"> Limitações do software </a>
 

<a name="util"><h1 align="center"> ---------- Utilização do Software ---------- </h1></a>

## 1. Cálculo de números

  ### <a name="num1"> 1.1 Operador de adição </a>
  
  No ProCalc, assim como uma calculadora básica, pode-se fazer calculos numéricos utilizando operadores aritméticos, como: adição. Poderá somar simples números como vários números ao mesmo tempo, gerando um resultado de saída. **Exemplo:** _5 + 4 + 2 = 11._
  
  ![](/Imagens/procalc1.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="num2"> 1.2 Operador de subtração </a>
  
  Com o operador de subtração é possível subtrair uma sequência de números simples ou vários números, **Exemplo:** _10 - 2 - 5 = 3._
  
  ![](/Imagens/procalc2.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="num3"> 1.3 Operador de multiplicação </a>
  
  Com o operador de multiplicação, funciona da mesma forma como os anteriores porém multiplicando valores, **Exemplo:** _5 x 3 x 2 = 30._
  
  ![](/Imagens/procalc3.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="num4"> 1.4 Operador de divisão </a>
  
  Já na parte de divisão, os números são divididos com um simples problema: Apenas são gerados números inteiros. No ProCalc os valores reais não são utilizados, no entanto isto será corrigido em outras versões. Vamos ver um exemplo de divisão de uma sequência de números - **Exemplo:** _20 / 2 / 2 = 5._
  
  ![](/Imagens/procalc4.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
## 2. Cálculo de variáveis

   ### <a name="var1"> 2.1 Inserção de valores </a>
  
  Nos cálculos de variáveis funciona tal como os cálculos de números, a única diferença é que primeiro os valores de cada variável a serem calculados devem ser definidos, então neste exemplo utilizamos as variáveis **A** , **B** e **C**. Inserimos valores para cada uma delas, sendo **A** = 5, **B** = 3 e **C** = 2.
  
  ![](/Imagens/procalc5.png)
  ![](/Imagens/procalc6.png)
  ![](/Imagens/procalc7.png)
  
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="var2"> 2.2 Operação em variáveis </a>
  
  Logo após inserimos valores no exemplo anterior, criamos uma fórmula aritmética das variáveis pelo editor: Fazemos uma multiplicação de A com B e subtraímos o resultado por C, o valor de saída será **13** (5 x 3 - 2 = 13).
  
  ![](/Imagens/procalc8.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
## 3. Representação de sistemas numéricos

  ### <a name="rep1"> 3.1 Representação decimal </a>
  
   As representações de sistemas numéricos são constantemente usadas na matemática para computação. Cada sistema numérico existe uma **base** de cálculo, como na _base de 10_ que representa um valor decimal, **Exemplo:** _O número **13**._ Para converter para valor decimal deverá ser clicado no botão **Dec** do ProCalc.
  
  ![](/Imagens/procalc9.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="rep2"> 3.2 Representação hexadecimal </a>
  
   Pegando como exemplo anterior, o número **13**, iremos clicar no botão **Hex** para converter o número 13 para um valor hexadecimal, na qual este tipo de valor utiliza a _base de 16_, cujo valor será **d** ou **0d**.
  
  ![](/Imagens/procalc10.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="rep3"> 3.3 Representação binária </a>
  
   Na computação, **códigos binários** são utilizados segundo a tabela ASCII, porém neste tipo de representação de sistemas numéricos, utilizamos os **códigos BCD** para converter valores decimais para binários de 4 bits, enquanto que nos códigos binários temos valores de 8 bits. Nesta representação, utilizamos a _base de 2_ para calcular o número **13** em decimal que é o mesmo de **0d** em hexadecimal, o valor binário deste número será: **1101**.
  
  ![](/Imagens/procalc11.png)
  
  <a href="#menu1">Voltar ao menu </a>

## 4. Programando em linguagem MATH

### <a name="math1"> 4.1 A linguagem DSL </a>
  
   A linguagem **Math** (Matemática) é uma linguagem para criar fórmulas no ProCalc, é também chamada de _Linguagem DSL_, que significa **Domain Specific Language** ou **Linguagem de domínio específico**. Cada software do mercado pode ter sua própria linguagem DSL para operações específicas daquele software, como exemplo: A linguagem VBA do pacote office e microsoft excel. O Math não é diferente, ele é programado direto no editor do ProCalc e pode ser criado arquivos com a extensão .math na qual é aberto com o software ProCalc. As fórmulas básicas desta linguagem são carregadas e executadas pelo software, tendo possibilidades de executar operações aritméticas, entrada de dados com loop de repetição e saída de dados.
  
  ![](/Imagens/procalc12.png)
  ![](/Imagens/procalc13.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
### <a name="math2"> 4.2 Criando fórmulas no ProCalc (Salvando arquivos) </a>
  
   Primeiramente, a fórmula em Math deve ser criada pelo editor do ProCalc, após isso, poderá clicar em **CTRL + S** ou no menu de navegação **file** onde contém a opção **save as** (salvar como). É aberta uma janela para definir um nome do arquivo, escolher localização e salvar o arquivo com a extensão .math, cujo tipo do arquivo é: Arquivo de fórmulas do ProCalc.
  
  ![](/Imagens/procalc14.png)
  ![](/Imagens/procalc15.png)
  ![](/Imagens/procalc16.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
 ### <a name="math3"> 4.3 Carregando fórmulas no ProCalc (Abrindo arquivos) </a>
  
   Para carregar fórmulas no ProCalc, existem 2 maneiras: 1ª - Poderá criar suas fórmulas pelo editor, clicar em **load** para carregar a fórmula e clicar em **run** para executá-la (isso se tiver definido os valores das variáveis antes). 2ª - Abrir um arquivo .math pré-criado pela opção **open** no menu **file**, uma janela é aberta para escolher o arquivo .math, e logo após abrir, as fórmulas do arquivo são exibidas no editor do ProCalc, agora basta carregar pelo **load** e executar pelo **run** no menu **run**, do mesmo jeito que a 1ª forma, a 2ª forma também deve ser definido, antes de "Executar", os valores de cada variável da fórmula. Neste exemplo abrimos uma fórmula salva no exemplo anterior e carregamos. O resultado do cálculo é mostrado em OUTPUT (Saída de dados).
  
  ![](/Imagens/procalc17.png)
  ![](/Imagens/procalc18.png)
  ![](/Imagens/procalc19.png)
  ![](/Imagens/procalc20.png)
  ![](/Imagens/procalc21.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="math4"> 4.4 Saída de dados (OUTPUT) </a>
  
   Após carregar a fórmula no exemplo anterior, definimos o valor das variáveis **E** e **F**, como **E** sendo 5 e **F** sendo 2, a fórmula irá multiplicar E com F (5 x 2) e gerar o resultado em **B**. Após executar pelo ProCalc, clicando em **run**, na saída de dados irá exibir o valor 10 que está em **B**. Uma fórmula em Math executa sua saída de dados através da atribuição de valor '=' a alguma variável ou simplesmente executando uma fórmula apenas com cálculos aritméticos, de toda forma, a saída de dados irá exibir o resultado de uma operação.
  
  ![](/Imagens/procalc22.png)
  ![](/Imagens/procalc23.png)
  ![](/Imagens/procalc24.png)
  ![](/Imagens/procalc25.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="math5"> 4.5 Entrada de dados (INPUT) </a>
  
   Na entrada de dados, o processo ocorre ao inverso da saída de dados, na fórmula é definido a função **input** depois do parâmetro inicial **Math**. O input é uma entrada de dados seguido por um loop de repetição, isto significa que um valor é atribuído a input indicando a quantidade de vezes que a mesma fórmula será executada. O usuário após executar, irá inserir um número para cada variável, no editor do ProCalc, na mesma ordem que foi definido na fórmula. Neste exemplo, criamos em um editor comum de texto, a fórmula **[Math][Input 2]A + B / C;**. Então, logo quando executado, **A** pede um valor para inserção, depois **B** pede um valor para inserção e **C** pede outro valor para inserção, cada inserção é digitado _Enter_ prosseguindo para a próxima inserção, após o último valor, **output** exibe o resultado da operação e depois da tecla Enter ser digitada, a mesma operação é feito do ínicio inserindo novos valores e novos resultados, ou seja, a mesma operação foi executada 2 vezes (Input 2).
  ![](/Imagens/procalc26.png)
  ![](/Imagens/procalc27.png)
  
  #### 1ª Execução do Input:
  
  ![](/Imagens/procalc28.png)
  ![](/Imagens/procalc29.png)
  ![](/Imagens/procalc30.png)
  ![](/Imagens/procalc31.png)
  
  #### 2ª Execução do Input:
  
  ![](/Imagens/procalc32.png)
  ![](/Imagens/procalc33.png)
  ![](/Imagens/procalc34.png)
  ![](/Imagens/procalc35.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
## 5. Menu de navegação do ProCalc

Neste menu, cada opção contém uma lista de itens que podem ser clicados ou digitados através de teclas de atalho. Abaixo contém as seguintes operações de menu:

* **arquivo (file) -** Neste menu contém operações de arquivo e fechamento do software.
* **edição (edit) -** Neste menu contém operações de edição de textos no ProCalc.
* **executar (run) -** Neste menu contém operações de carregar fórmula e execução da fórmula.
* **visto (view) -** Neste menu é exibido todos os arquivos que foram abertos.
* **ajuda (help) -** Neste menu contém a opção **sobre** com informações do software.

![](/Imagens/procalc36.png)

### <a name="men1"> 5.1 Item arquivo (file) </a>
  
 * **novo (new) -** Para limpar o editor do ProCalc e criar nova fórmula.
 * **abrir (open) -** Para abrir um arquivo de fórmulas e exibir no editor.
 * **salvar (save) -** Para salvar um arquivo durante a edição.
 * **salvar como (save as) -** Para salvar um novo arquivo com um nome específico.
 * **sair (quit) -** Para fechar o software.
  
  ![](/Imagens/procalc37.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="men2"> 5.2 Item edição (edit) </a>
  
 * **selecionar (undo) -** Seleciona um texto no editor do ProCalc.
 * **copiar (copy) -** Copia um texto selecionado no editor do ProCalc.
 * **recortar (cut) -** recorta um texto selecionado no editor do ProCalc (copiar & excluir).
 * **colar (paste) -** Cola um texto qualquer previamente copiado.
 * **converter (conversor) -** Usa o conversor de representações numéricas.
 * **limpar (clear) -** Limpa o campo de texto do editor no ProCalc.
  
  ![](/Imagens/procalc38.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="men3"> 5.3 Item executar (run) </a>
  
 * **carregar (load) -** Carrega fórmulas previamente abertas no sistema.
 * **executar (run) -** Executa uma fórmula que já foi carregada.

  ![](/Imagens/procalc39.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="men4"> 5.4 Item visto (view) </a>
  
  Neste item, todos os arquivos de fórmulas abertos recentemente são listados e colocados no topo, o termo correto a se dizer seria: Empilhados. Pois cada novo arquivo aberto, o diretório completo deste arquivo é exibido no topo.
  <br></br>
  **Exemplos:**<br>
  _C:\...\visto2.math_<br>
  _C:\...\visto1.math_<br>
  <br>
  **Observações:** _A opção **view** só é disponível quando um arquivo já foi aberto, o item **reset views** limpa todos os diretórios listados, deixando indisponível novamente a opção **view**_  
  
  ![](/Imagens/procalc40.png)
  ![](/Imagens/procalc41.png)
  
  <a href="#menu1">Voltar ao menu </a>
  
  ### <a name="men5"> 5.5 Item ajuda (help) </a>
  
   No item de ajuda, o software contém apenas o item **about** (sobre) que exibe informações sobre o software ProCalc, como: O nome, versão, data de desenvolvimento, desenvolvedor e sistema operacional que foi desenvolvido. 
  
  ![](/Imagens/procalc42.png)
  ![](/Imagens/procalc43.png)
  
  <a href="#menu1">Voltar ao menu </a>

## <a name="lim"> 6. Limitações do software </a>

* As fórmulas do ProCalc contém apenas operações de: adição, subtração, multiplicação e divisão. Não obedecendo a **Ordem de precedência** nos cálculos, portanto, o software utiliza ainda fórmulas básicas. Na versão 2.0 poderá ser acrescentado mais opções de operações aritméticas.
* O número de variáveis do sistema é limitado, contendo apenas 6 variáveis. Na versão 2.0 novas variáveis serão acrescentadas.
* Na divisão de cálculos, apenas números inteiros saem como resultado. Valores reais ainda não foram implementadas no sistema. Na versão 2.0 poderá ser implementado o sistema de valores reais.
* No item ajuda (help) contém apenas a opção **about** que exibe informações do software porém não há uma forma do usuário ter ajuda/instruções do software, o que será acrescentado também na versão 2.0.
  <br></br>
  <a href="#menu1">Voltar ao menu</a>
  
<a name="desc2"><h1 align="center"> ---------- Descrições Técnicas ---------- </h1></a>

Na parte de **Descrições técnicas** será comentado sobre configurações & organização do software e a parte de desenvolvimento do software incluido algoritmos e lógica matemática, logo abaixo é exibido alguns tópicos:

<a name="menu2"></a>
### Configuração & Organização do software
 * <a href="#ass1"> Associação de arquivos do programa </a>
 * <a href="#dir1"> Diretório de instalação </a>
 
### Desenvolvimento do software
 * <a href="#des1"> Algoritmos </a>
 * <a href="#des2"> Lógica matemática </a>
 * <a href="#des3"> Interface gráfica </a>
 * <a href="#des4"> Interpretação de linguagem </a>
 * <a href="#des5"> Argumentos do software/linha de comando</a>

## 1. Configuração & Organização do software
 
 ### <a name="ass1"> 1.1 Associação de arquivos do programa </a>
 
 Os arquivos de extensão .math podem ser abertos por qualquer editor de texto porém precisa ser aberto pelo ProCalc para carregar e executar suas fórmulas (Isto será explicado no Item 2.5). No entanto, os arquivos abrem com o software e o ícone do software é setado nos arquivos, para haver esta associação executamos scripts de registro para inserir no registro do windows configurações para que esta operação seja possível. No repositório do ProCalc, existe uma pasta de instalação do software, onde contém a pasta registry com arquivos .reg para executar e inserir registros. O script insere valores e pastas na entrada **HKEY_CLASSES_ROOT** para criar pastas de comandos (execução & edição) e na entrada **HKEY_CURRENT_USER** para operações de usuário. Logo após as configurações ser setadas os arquivos .math assumem o ícone do ProCalc, podendo ser clicados e abertos com o software, o tipo de arquivo "Arquivos de fórmulas do ProCalc" também é setado reconhecendo a extensão.
 
 <a href="#menu2">Voltar ao menu</a>
 
 ### <a name="dir1"> 1.2 Diretório de instalação </a>
 
 Como na descrição anterior do Item 1.1, sabemos que para um arquivo com uma extensão específica abrir com um determinado programa, nos scripts de registro é preciso setar um valor padrão para um diretório onde há o software instalado. Então para estas configurações funcionarem, é preciso escrever na entrada "**[HKEY_CLASSES_ROOT\ProCalc.calc\shell\Open\command]**" do arquivo **ProCalcRoot.reg** o valor padrão com o mesmo diretório de instalação, após o software ser instalado num determinado diretório, basta editar este arquivo .reg e executá-lo. Já que no próprio software não contém funções específicas para efetuar registros durante a instalação. Dentro do diretório instalado do ProCalc existe as seguintes pastas e arquivos:
 
 * **ConfigLang -** Contém o arquivo **ConfNotepad.xml** para importar em configurações de linguagem no editor Notepad++. Esta configuração permite que as fórmulas da extensão .math seja coloridas durante a edição.
 * **Examples -** Contém os arquivos Math: **Calculo.math**, **Input.math** e **Multiply.math** que são arquivos de fórmulas do ProCalc.
 * **Registry -** Contém os arquivos de registro **ProCalcRoot**, **ProCalcUser** e **ExcludeRegistry** que são arquivos para inserir no registro do windows configurações de associação de arquivos Math com o software ProCalc.
 * **ProCalc -** O arquivo executável do software.
 
 <a href="#menu2">Voltar ao menu</a>
 
## 2. Desenvolvimento do software

 ### <a name="des1"> 2.1 Algoritmos </a>
 
 Dentro da pasta de códigos que está em outro repositório do ProCalc, existe o arquivo **calc.h** que é um arquivo de cabeçalho em C para criar variáveis, definir macros e importar bibliotecas de _String_, _Funções em C_ e _Operações nativas do Windows_. No arquivo "calc.h" é definido macros de teclas, macros de menu, macros de botões da calculadora, variáveis que guardam textos e fórmulas MATH, variáveis lógicas de controle do software, entre outros... 
 
 O arquivo **calc.rc** é um arquivo de recursos onde são definidos scripts de **_ícone do software_** e **_menu do software_** - É criado um MENU **CalcMenu**, onde dentro dele existem alguns POPUPs, como: **file**, **edit**, **run**, **view** e **help**. E em cada POPUP existem os MENUITEMs como itens comuns de um menu, cada MENUITEM é composto por uma string que define o nome daquele item, Exemplo: **new**, **save as**, **open**, etc... cada MENUITEM existe uma _identificação_ de uma macro (As macros de menu definidas em calc.h). 
 
 O CalcMenu é setada na variável **menu1** em calc.h e carregada na função **LoadClass** que é executada dentro da função **WinMain** no arquivo **ProCalc.cpp**. O WinMain é a função principal da estrutura **WINAPI** da biblioteca do Windows, nesta função é retornado um inteiro que é o parâmetro da variável **MSG**, onde dentro desta variável contém mensagens de execução que são obtidas, traduzidas e dispachadas em um loop de repetição que irá identificar interação com o software, Exemplo: _A identificação de clique de teclas_. Na função principal também é setada a variável **ProCalc** do tipo **HWND** onde a partir desta variável é criada a primeira janela do ProCalc e é exibida em **ShowWindow**.
 
 Na função **LoadClass** é carregada a função **CalcProc**, do tipo LRESULT CALLBACK, caso o parâmetro _ord_ for 0. No CalcProc é criada os botões da calculadora caso o parâmetro de mensagem (msg) for WM_CREATE, agora caso o parâmetro for WM_COMMAND, é verificado no switch o parâmetro **act1** que irá identificar a interação de cada botão e item de menu no software, para cada interação contém uma funcionalidade específica, como: Armazenamento em variáveis, Cálculo de variáveis, Cálculo de números, Operações de menu, Interpretação da linguagem MATH, etc... para operações de menu, existem as chamadas das seguintes funções:
 
 * **LoadFileArgv -** Para carregar e armazenar os argumentos no carregamento do arquivo, **Exemplo:** _ProCalc arquivo.math_.
 * **LoadFile -** Para carregar e armazenar os textos de um determinado arquivo Math aberto.
 * **LoadPath -** Para carregar e armazenar o diretório de um arquivo aberto.
 * **SaveFile -** Para salvar arquivo em um diretório carregado e identificar se é um arquivo em edição ou um novo, **Exemplo:** _save as_ & _save_.
 * **OpenFile -** Para abrir janela de abrir arquivo e identificar se o arquivo será apenas carregado no software ou o processo oposto: salvar um arquivo com **SaveFile** em um diretório carregado em **LoadPath**. O texto é carregado em variáveis que estão em **calc.h**.
 
 **Observações:** A função principal, como também a função de carregamento de classe Windows e operações de arquivo, são programadas no arquivo **ProCalc.cpp** enquanto que variáveis/macros e interface de menu são definidas em **calc.h** e **calc.rc**, o projeto foi desenvolvido na IDE **Dev-Cpp**. Para mais informações, veja os códigos no repositório [ProCalc-C](https://github.com/FrancisBFTC/ProCalc-C/).
 
 <a href="#menu2">Voltar ao menu</a>
 
 ### <a name="des2"> 2.2 Lógica matemática </a>
 
 Nas operações de botões da calculadora, criada em **CalcProc**, uma lógica matemática é executada para calculos de números e variáveis. Dependendo da operação aritmética identificada, o número de um determinado botão é atribuido a uma variável inteira temporária **memory**, a questão é que além da atribuição, o valor é calculado. Por exemplo: se a operação for _multplicação_, o valor é atribuído e multiplicado ao mesmo tempo; Se for _subtração_, o valor é atribuído e subtraído ao mesmo tempo, etc...
 
 Se uma letra é identificada na operação, o valor em **memory** é depositado numa variável referente a letra identificada. Exemplo: **A** = **memory**; Assim, se uma variável fornece atribuição na fórmula em Math, aquela variável guardará o resultado e após a atribuição em Math, memory é zerada. Em cada botão, um número específico é armazenado na variável **num**, se estamos lidando com valores decimais, então 10 é atribuído e multiplicado em num, e o número específico é atribuído e somado em num. A variável memory recebe e se opera com num de acordo com a operação e o resultado é mostrada no editor o que está em memory quando o símbolo de _=_ é clicado.
 
 Cada variável de **A** a **F** é identificada nos cliques de botões pra armazenar valores, porém estes valores são "concatenados" aritméticamente na variável **lmemory**, onde a partir desta é exibido no editor o resultado de operações em variáveis.
 
 Na lógica de sistemas numéricos, apenas o formato binário contém um algoritmo de conversão, se é que no formato hexadecimal a própria linguagem C fornece no **sprintf** o parâmetro "%x" para exibir valores hexadecimais, já que no ProCalc operações aritméticas com sistemas numéricos não são efetuados. Na operação binária um número é identificado e guardado em **number**, enquanto number é diferente de 0, um inteiro é incrementado para servir de índice no array **getbin[]**, em cada posição crescente de getbin, armazena-se o valor de number % 2, onde o valor será 0 ou 1, number recebe number dividido por 2 alterando em cada iteração o seu valor, novamente este valor alterado é verificado se é divisível por 2, guardando na próxima posição de getbin um valor 0 ou 1, a partir do momento que number chega a 0, o loop para sua execução e getbin recebe uma sequência binária. Então, um outro loop é executado para exibir no editor a sequência binária inversamente, assim, um binário de um número decimal é exibido.
 
 <a href="#menu2">Voltar ao menu</a>
 
 ### <a name="des3"> 2.3 Interface gráfica </a>
 
 O ProCalc utiliza a API Windows.h para gerar a interface gráfica. Em CalcProc, a função **CreateWindow** é usada para criar um editor de texto e botões, onde nesta função é utilizada parâmetros que define o tipo de elemento (Editor ou Botão), valores neste elemento, como: números, texto, etc... visibilidade, borda, tamanho do elemento, a interface na qual este elemento será exibido e identificação numérica daquele elemento (macros definido em calc.h), tal identificação numérica será usada para controle do determinado elemento em WM_COMMAND utilizando switch e cases dentro da função CalcProc.
 
 Duas variáveis globais são setadas no arquivo **ProCalc.cpp**: **ProCalc** & **Calc**. Calc do tipo HWND é usada para os elementos da interface principal na função CalcProc, na qual Calc armazena o parâmetro **calc** desta função. Enquanto que a variável ProCalc, também do tipo HWND recebe, na função principal WinMain, a função **CreateWindowEx**, onde os parâmetros do CreateWindowEx recebe a classe de uma estrutura, o título, valores de tamanho e posição da interface, uma instância e o menu. Portanto, a variável ProCalc é definida em ShowWindow para executar a janela principal e tal variável também é usada para carregar a barra de menu e identificar cliques em itens de menu e sub-menu no WM_COMMAND da função CalcProc.
 
 
 <a href="#menu2">Voltar ao menu</a>
 
 ### <a name="des4"> 2.4 Interpretação de linguagem </a>
 
 Primeiramente, o software faz uma análise sintática da linguagem Math, para isso, é preciso ter uma variável que, durante o carregamento do arquivo, guardará os textos referente as fórmulas, esta variável se chama **gettext** e está definida em "calc.h". Após o clique no item de menu **load** (carregar) ser identificado, o programa define a quantidade de inputs que será 0 inicialmente (quantInput = 0) e verifica se gettext contém algum texto, caso houver, ele recebe o valor "Formule" mostrando que há uma fórmula sendo editada. Se a variável que recebe este valor for diferente de nulo, então as seguintes operação são efetuadas:
 
 * Uma análise de cada caractere é feita em **gettext** para verificar se há o parâmetro "[Math]" no ínicio, se houver, a variável lógica **sintax** é setada para **verdadeiro**, se não, sintax "continuará" seu valor padrão: **falso**.
 * O tamanho do texto da fórmula é capturada e usada para verificar cada caractere, se há um caractere diferente dos utilizados na fórmula do ProCalc, a variável sintax é setada para **falso**.
 * É analisado se **gettext** contém as string "[Input]", se houver, o número após a string é capturada setando na variável **quantInput** na qual definirá a quantidade de entradas do comando **[Input]**. A variável **input** é setada para **verdadeiro** e a variável **term** recebe o valor padrão **falso** (Variável esta que define o estado de parada do Input).
 * Durante o loop de análise sintática, uma variável chamada **size** faz uma contagem atual de caracteres, definindo a posição de tal caractere, se um erro é identificado, o loop de análise finaliza sua execução, size armazena a posição atual do caractere com o devido erro, uma string de sintaxe incorreta é concatenada com a posição atual do caractere e armazenada na variável **error**.
 * Se a variável sintax for verdadeiro, a variável **formule** recebe verdadeiro, outra variável **form** recebe o texto da fórmula e size recebe o tamanho da fórmula, uma mensagem é exibida dizendo que a "fórmula foi carregada com sucesso" utilizando **MessageBox** e o texto do editor é apagado.
 
 Em caso de execução clicando no item de menu **run** algumas variáveis lógicas são setadas para dizer que "variáveis em Math" estão sendo utilizadas enquanto que **form** com o texto da fórmula é usado para ler operação por operação, então um loop de repetição verifica se o caractere no respectivo índice de form é uma operação aritmética ou uma variável, se for operação, uma variável **var** recebe falso, se não for, **var** recebe verdadeiro. Se var for verdadeiro, uma verificação é feita na variável **chars** onde chars seria o caractere da variável Math atual. Para cada variável Math identificada em chars, uma operação aritmética é identificada após ela e para cada operação, a respectiva variável Math é atribuída e calculada para a variável **lmemory**. No final da verificação da fórmula, o **output** exibe o resultado final de lmemory e uma análise é feita verificando a variável **term** (descrito anteriormente para Inputs), se term for falso, outras análises são feitas para saber se quantInput é 0 (não existe entrada de dados) ou se é maior, caso for maior, significa que há uma quantidade de entradas e a mesma fórmula será executada em um loop em "quantInput vezes" fornecendo entrada de dados.
 
 **Observações:** _na exibição do resultado, output poderá também mostrar true ou false caso uma operação for lógica, Exemplo: números divisíveis, maior que, menor que, diferente que, etc..._.
 
 <a href="#menu2">Voltar ao menu</a>
 
 ### <a name="des5"> 2.5 Argumentos do software/linha de comando</a>
 
 No ProCalc também é possível executar uma linha de comando para abrir uma fórmula com o ProCalc, isto não significa que via linha de comando poderá se "executar" fórmulas. O motivo disso é que, o software contém uma função chamada **LoadFileArgv** permitindo que a calculadora seja aberta exatamente com o arquivo que foi clicado, na qual este arquivo será um "argumento". O nome do arquivo é passado para o parâmetro **argv** do tipo LPSTR da função principal **WinMain**, onde tal parâmetro é utilizado como argumento da função LoadFileArgv, então esta função captura o texto da fórmula do arquivo e exibe no editor do ProCalc abrindo ao mesmo tempo o software. Por linha de comando, a execução funciona da mesma maneira, No exemplo a seguir:
 
 _**ProCalc** Formula.math_
 
 **ProCalc** seria o argv[0] e _Formula.math_ o argv[1] (o mesmo que clicar no arquivo .math 2 vezes e abrir com o programa).
 
 A função LoadFileArgv na instanciação do software é executada apenas 1 vez, isto é possível utilizando a variável lógica **setOneTime** que é setada para verdadeiro quando o arquivo é aberto pelo argumento, pois se esta variável não for utilizada, o mesmo arquivo será reaberto várias vezes, já que sua chamada fica numa função que é executada várias vezes: WinMain.
 
 <a href="#menu2">Voltar ao menu</a>
 
 **Observações:** _Estes códigos, documentação e software estão protegidos por direitos autorais. Portanto é proibido a cópia/plágio, a distribuição ou venda do software/código descrito pelo Art. 184 do Código Penal - Decreto Lei 2848/40._
 
 <a href="#menuprincipal">Voltar ao menu principal</a>
 
 ### Agradecimentos
 
 Se chegou até aqui, muito obrigado por ler esta documentação! É uma honra poder desenvolver softwares open-sources e comerciais para todos os usuários e programadores. Agradecimentos BFTC!
 
 Ass.: Wender Francis da BFTCorporations.
 
 Site Oficial : [bftcorporations.mywebcommunity.org](http://bftcorporations.mywebcommunity.org/Courses)
 
 [Voltar ao repositório](https://github.com/FrancisBFTC/ProCalc-C/)
