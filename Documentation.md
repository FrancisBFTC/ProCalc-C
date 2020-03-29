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
  _C:\...\visto1.math_<br>
  _C:\...\visto2.math_<br>
  <br>
  **Observações:** _A opção **view** só é disponível quando um arquivo já foi aberto, o item **reset** limpa todos os diretórios listados, deixando indisponível novamente a opção **view**_  
  
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

-- texto --

### Titulo 1

### Titulo 2

 
 **Observações:** _Estes códigos, documentação e software estão protegidos por direitos autorais. Portanto é proibido a cópia/plágio, a distribuição ou venda do software/código descrito pelo Art. 184 do Código Penal - Decreto Lei 2848/40._
 
 <a href="#menuprincipal">Voltar ao menu principal</a>
 
 ### Agradecimentos
 
 Se chegou até aqui, muito obrigado por ler esta documentação! É uma honra poder desenvolver softwares open-sources e comerciais para todos os usuários e programadores. Agradecimentos BFTC!
 
 Ass.: Wender Francis da BFTCorporations.
 
 Site Oficial : [bftcorporations.mywebcommunity.org](http://bftcorporations.mywebcommunity.org/Courses)
 
 [Voltar ao repositório](https://github.com/FrancisBFTC/ProCalc-C/)
