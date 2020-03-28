**********************************************************************************
<h1 align="center"><a name="top">Documentação do GhostScan</a></h1>

Bem vindo a documentação do GhostScan! aqui é demonstrado todas as funcionalidades atuais do software, descrições gerais e técnicas. Se optar por ler um assunto em específico abaixo contém um menu de atalho, se não, continue rolando para ler toda a documentação:
  
  <a name="menuprincipal"></a>
  * <a href="#desc1"> Descrições Gerais </a>
  * <a href="#desc2"> Descrições Técnicas </a>
  * <a href="#util"> Utilização do software </a>
 
<a name="desc1"><h1 align="center"> ---------- Descrições Gerais ---------- </h1></a>

O GhostScan é um software/spyware cuja finalidade é gerar arquivos que monitoram as informações de pessoas. O software funciona tal como um programador - ele cria programas chamado **Keylogger** que monitora indivíduos baseando em configurações do usuário. As configurações do usuário são: 

<a name="menu1"></a>
### Seleção de Scanners:
  * <a href="#scan1"> Scanner de mouse </a> 
  * <a href="#scan2"> Scanner de monitor </a> 
  * <a href="#scan3"> Scanner de IP público </a>
  * <a href="#scan4"> Scanner de rede interna completa </a>
  
### Seleção de sistemas de camuflagem:
  * <a href="#init"> Inicialização automática </a>
  * <a href="#ocult"> Ocultação de arquivo </a>
  * <a href="#prog"> Programação de tempo de execução </a>
  
### Seleção de Gerador do Keylogger:
  * <a href="#mailpass"> Inserção de email </a>
  * <a href="#mailpass"> Inserção de senha </a>
  * <a href="#keyname"> Criação de nome do KeyLogger </a>
  
### Informações relevantes
 * <a href="#inf"> Informações do software </a>
 * <a href="#lim"> Limitações do software </a>

_**Observações:** Por padrão, o software gera o keylogger com <a href="#scan5"> scanner de teclado </a>, mesmo se o usuário não configurar nada._

<a name="util"><h1 align="center"> ---------- Utilização do Software ---------- </h1></a>

## 1. Interface Inicial

  Na interface Inicial, o usuário está no menu **Início**, aqui ele insere um Email qualquer e a senha do email para envio dos
  dados monitorados, digita o nome do arquivo do keylogger para ser gerado. Por padrão o software mantém selecionado o 
  **Gerador de Keylogger**. O gerador de vírus é uma outra opção extra para brincar com seus amigos, são apenas vírus troll e
  não tem a capacidade de danificar um computador, dependendo do vírus que foi gerado, Exemplo: _Scorpion_, para ser possível  danificar um sistema em sua plena natureza, o computador alvo deveria ter uma segurança extremamente falha, como: Permissões para excluir arquivos; O que não é o caso de muitos computadores hoje em dia. 
  
  **Recomendações:** _Sempre utilize um email & senha inutilizável pré-criado para inserir no software, assim para testar os vírus ou keyloggers, tenha no seu computador uma máquina virtual instalado um sistema operacional para testes._
  
  ![](/Imagens/GhostScan1.png)
  
  <a href="#menuprincipal">Voltar ao menu principal</a>
  
## 2. Seleção de Scanners

   ### <a name="scan1"> 2.1 Scanner de mouse </a>
   
   Com a opção de mouse selecionado, o keylogger gerado vai apenas monitorar as posições de mouse e as teclas pressionadas
   pelo alvo. Já que o Scanner de monitor não consegue scanear o ponteiro do mouse, O Scanner do mouse vai enviar todas as 
   informações em modo texto de posições clicadas pelo alvo. Cada região da tela que o usuário clicar, o keylogger irá enviar
   informações com termos ao referentes aos cliques, Exemplo: Topo-esquerdo, Topo-direito, centro da tela, rodapé-esquerdo,etc...
   
   ![](/Imagens/GhostScan2.jpg)
   
   <a href="#menu1">Voltar ao menu</a>
   
   ### <a name="scan2"> 2.2 Scanner de monitor </a>
   
   Com a opção de monitor selecionado, o keylogger vai enviar anexos do tamanho completo da tela do alvo para o email configurado. A cada intervalo de tempo ou cliques do mouse, o usuário receberá um novo email com a imagem Screenshot do monitor,
   assim o usuário poderá saber com mais detalhes o que seu alvo está fazendo visualmente.
   
   ![](/Imagens/GhostScan3.jpg)
   
   <a href="#menu1">Voltar ao menu</a>
   
   ### <a name="scan3"> 2.3 Scanner de IP público </a>
   
   Muito se sabe que IPs públicos ou **IPs Externos** revelam muita coisa sobre uma pessoa, **Exemplo:** _A localização do computador do alvo quando rastreado._ Com a opção de IP público selecionado, o keylogger enviará os números de IP público do alvo.
   
   ![](/Imagens/GhostScan4.jpg)
   
   <a href="#menu1">Voltar ao menu</a>
   
   ### <a name="scan4"> 2.4 Scanner de rede interna </a>
   
   As informações de rede interna é de grande valia pra quem conhece/trabalha na área. Com a opção de rede interna selecionada, o email configurado no keylogger recebe informações completas, como: Interfaces de redes, nomes das placas de rede instaladas, Números IPV4 e IPV6 (IPs internos), gateway, máscaras de sub-rede, broadcast, nome do computador completo e todas as redes conectadas ao computador do alvo.

  ![](/Imagens/GhostScan5.jpg)
  
  <a href="#menu1">Voltar ao menu</a>
  
  ### <a name="scan5"> 2.5 Scanner de teclado </a>
  
  Por padrão, este funcionamento não precisa ser selecionado pois o próprio keylogger encarrega de enviar informações de teclas,
  mesmo sem nada configurado, já que o nome _Keylogger_ deriva do significado **_Registro de teclas_**. As teclas pressionadas
  enviadas para o email são concatenadas e a cada email recebido uma parte de uma frase digitada pelo alvo é mostrada, porém sempre exibindo e completando todo o restante da frase por cada email. Sabendo que as informações escaneadas são enviadas em um intervalo de tempo de 10 segundos, Então é recomendável que o usuário baixe as informações de emails relevantes e sempre procure 
  fazer uma "limpeza" da sua caixa de entrada, pois a quantidade de informações recebidas em 1 dia é absurdamente grande. Este é um outro exemplo para usar um **Email de teste inutilizável** na configuração do keylogger.
  
  Neste exemplo da imagem é selecionado todas as opções, o keylogger escaneará e enviará pro email informações de: Posições clicadas do mouse, ScreenShot do monitor, IP público, configurações completas de rede interna e principalmente - As teclas pressionadas.
  
   ![](/Imagens/GhostScan6.jpg)
   
   <a href="#menu1">Voltar ao menu</a>
  
## 3. Seleção de sistemas de camuflagem

### <a name="init"> 3.1 Inicialização automática </a>

Nesta opção, o sistema do keylogger se responsabiliza em se auto-copiar para a pasta descrito na variável de ambiente **%AppData%** cujo conteúdo é "C:\Users\xxxx\AppData\Roaming\", onde "xxxx" seria a pasta de usuário do computador, o sistema faz uma concatenação com os próximos diretórios, ficando: "C:\Users\xxxx\AppData\Roaming\Microsoft\Windows\Start Menu\Programs". Neste diretório é aonde fica todos os programas que executa automaticamente quando o computador é ligado, então se o keylogger é
copiado para este diretório significa que o keylogger vai executar automaticamente toda vez que o computador ligar. 

**Observações:** _Percebemos que este diretório é pertencente a plataforma **Windows**. Isso significa que se for monitorar uma pessoa que está utilizando uma plataforma linux, a opção de **Inicialização Automática** não irá funcionar. Porém o processo de copiar para a pasta de inicialização pode ser feita manualmente._

**Detalhes:** _O software foi desenvolvido para ambientes Windows, mesmo que o GhostScan tenha funcionalidades que também executa no Linux. Futuramente o código fonte será adaptado para executar todas as funcionalidades em quaisquer plataformas._

 ![](/Imagens/GhostScan7.jpg)
 
 <a href="#menu1">Voltar ao menu</a>
 
### <a name="ocult"> 3.2 Ocultação de arquivo </a>

Este é um processo que oculta o keylogger após executado, quando esta opção é selecionada, o modo invisível é ativado o que significa que no local que for executado o keylogger, o sistema executa comandos para fazer sumir o arquivo. Nem mesmo ativando
a opção de "Mostrar arquivos ocultos" do painel de controle irá achar o keylogger, pois o keylogger utiliza um comando específico do sistema para ocultar arquivos, mesmo que eles ainda continuam executando na máquina do alvo.

![](/Imagens/GhostScan8.jpg)

<a href="#menu1">Voltar ao menu</a>

### <a name="prog"> 3.3 Programação de tempo de execução </a>

Na parte de "Tempo de execução" existe uma informação que mostra a data atual e um campo de texto para inserir uma data. A data que é inserida é referente ao dia e mês que o keylogger irá ser finalizado, ou seja, parar de executar. O sistema identifica a data atual e faz uma comparação com a data inserida a cada dia que o keylogger é iniciado, quando a data atual é igual a data inserida, o sistema finaliza a tarefa relacionada ao keylogger.Isto é quando o usuário decide monitorar seu alvo durante um tempo específico.

![](/Imagens/GhostScan9.jpg)

<a href="#menu1">Voltar ao menu</a>

## 4. Seleção de Gerador do Keylogger
  
  <a name="mailpass"></a>
  Na Interface inicial é inserido um email e uma senha pré-criada para testes. Logo após clicar em "Testar Conexão", o sistema faz uma autenticação de login do email e envia uma mensagem confirmando que o keylogger irá funcionar com sucesso. Isto é para testar se há uma conexão com a internet e se realmente o email irá receber informações do keylogger. 
  
![](/Imagens/GhostScan10.jpg)

<a name="keyname"></a>
Após testar a conexão, é inserido o nome do arquivo Keylogger que será gerado. É recomendável que utilize um nome menos chamativo, discreto e comum, algo que o alvo não irá suspeitar. Neste caso, como o arquivo gerado é um .jar(Arquivo Executável Java), é colocado o nome "Java Update" - já que o **Atualizador do Java**(Java Update) é bastante comum estar instalado em computadores que contém a JRE(Java Runtime Environment). Após definir o nome, o botão "Criar Keylogger" é clicado e uma mensagem de confirmação pergunta se realmente quer gerar o keylogger.

![](/Imagens/GhostScan11.jpg)

Após clicado em sim, o arquivo nomeado **Java Update.jar** é criado na pasta de instalação do GhostScan, este arquivo pode ser transportado, enviado e executado em qualquer computador que contém a JRE.

![](/Imagens/GhostScan12.jpg)

_Para mais informações, consulte a pasta **Imagens** no repositório do GitHub que contém imagens que demonstra o funcionamento completo de um keylogger e o funcionamento do **Gerador de vírus**._

<a href="#menu1">Voltar ao menu</a>

## <a name="inf"> 5. Informações do software </a>
  
No menu de **Informações** contém o nome do software, o tipo, a função/objetivo e outras informações. Na **atualização disponível** é nenhuma por que o software não utiliza um sistema de auto-atualização ainda. A versão atualmente é 1.0, futuramente na versão 2.0 o software executará em ambientes linux, windows & mac, como também funcionalidades de: envio de informações de geo-localização, conversão de .jar para .exe (executável windows) do keylogger, definição de ícone do executável & scanner de históricos de navegadores. Na parte de **Tutorial do programa**, existe um link **Clique aqui** que redireciona para a página oficial de Download do GhostScan no Site da BFTCorporations. Lembrando que apenas a versão Trial é disponibilizada para download.

![](/Imagens/GhostScan13.jpg)

<a href="#menu1">Voltar ao menu</a>

## <a name="lim"> 6. Limitações do software </a>

Apesar de tantas funcionalidades do GhostScan, o software contém algumas limitações e são elas:

  * A opção de **Inicialização automática** só funciona em ambientes Windows. Em outras plataformas este processo deve ser feito
  manualmente. Exemplo: Copiar o arquivo keylogger para a pasta de inicialização automática de programas.
  * O GhostScan só gera o arquivo keylogger se existir a JDK(Java Development Kit) instalada. A JRE não é suficiente para fazer
  funcionar o software, já que o sistema funciona como um "Programador" que gera programas.
  * A versão 1.0 do GhostScan não contém uma **Atualização Disponível**, isto significa que se o computador, que esta executando  
  o GhostScan, atualizar a JRE/JDK automaticamente, existem riscos de algumas funcionalidades do software não funcionar ou ter
  possíveis bugs. Obs.: Isto será corrigido na versão 2.0.
  * O GhostScan deve ser instalado em um diretório que tem permissão de escrita, já que o keylogger por padrão é gerado neste diretório. Se um determinado usuário instalar o software numa pasta que não tem permissão, simplesmente os arquivos keyloggers não serão gerados. Obs.: Isto também será corrigido na versão 2.0.
  * Se o computador do alvo, que estiver executando o keylogger, não estiver conexão com a internet ou por algum motivo a
  conexão falhar inesperadamente, o email configurado no keylogger para de receber informações até que a conexão do alvo volte
  ao normal. Por isso existe a opção "Testar conexão".
  
  <a href="#menu1">Voltar ao menu</a>
  
<a name="desc2"><h1 align="center"> ---------- Descrições Técnicas ---------- </h1></a>

O GhostScan utiliza determinados procedimentos para realizar suas principais tarefas, contando com - dependências de bibliotecas, estrutura de pastas, kit de desenvolvimento java, configurações no sistema operacional e arquivos em lotes do windows, as principais tarefas selecionadas com níveis prioritários são:

<a name="menu2"></a>
 ### Dependência do software
  * <a href="#kit"> Kit de desenvolvimento Java(JDK) </a>
  * <a href="#conf"> Configurações do sistema operacional </a>
  * <a href="#imp"> Importação de bibliotecas </a>
  
 ### Algoritmos & Organização
  * <a href="#env"> Envios de email & scanners nativos </a>
  * <a href="#est"> Estrutura de pastas organizadas </a>
  * <a href="#arq"> Arquivos em lote do Windows (Batch File) </a>
  * <a href="#out"> Outros algoritmos </a>
  * <a href="#info"> Informação de versões & atualização </a>
  
  <a href="#menuprincipal">Voltar ao menu principal</a>
  
 ## 1. Dependência do software
  
 ### <a name="kit"> 1.1. Kit de desenvolvimento Java(JDK) </a>
 
 Após lermos as <a href="#desc1">Descrições Gerais</a> sabemos que o GhostScan funciona como um **programador** criando programas.
 Isto significa que ele precisa criar arquivos fontes que contém classes do Java, compilar esses arquivos e depois gerar o
 executável. Para todos esses procedimentos é preciso ter a JDK instalada na máquina, pois é ela que possibilita as ferramentas
 e classes necessárias para desenvolver em linguagem java e gerar o keylogger, as principais ferramentas utilizadas são: jar.exe e javac.exe. Isto inclui arquivos JARs responsáveis por guardar classes e métodos para a programação em Java. Caso o usuário não tenha a JDK em sua máquina, deveria fazer o [Download da JDK](https://www.oracle.com/java/technologies/javase-jdk8-downloads.html) do site oficial da oracle. A ferramenta deve ser instalada no diretório **C:\\Program Files\\Java\\**(Por padrão o JDK já instala automaticamente a JRE que também é necessária para execução de aplicações em Java).

<a href="#menu2">Voltar ao menu</a>

 ### <a name="conf"> 1.2. Configurações do sistema operacional </a>
 
 Na instalação do software GhostScan, o instalador já executa um arquivo executável extra para as configurações do sistema
 operacional. Este arquivo contém todos os comandos cmd necessários para definir variáveis de ambiente, criando as variáveis
 **JAVA_HOME**, **CLASSPATH** e **PATH** para setar os conteúdos delas com diretórios do JDK e JRE. Isto é necessário pois pra
 compilar as classes do keylogger para .class e criar o executáveis JARs, o sistema utiliza as ferramentas jar e javac o que
 exigem obrigatoriamente as definições das variáveis de ambiente. As variáveis são setadas com os seguintes valores:
 
  * JAVA_HOME = "C:\Program Files\Java\jdkxxxx\"
  * CLASSPATH = ";%JAVA_HOME%\lib;%JAVA_HOME%\lib\tools.jar;%JAVA_HOME%\lib\dt.jar;"
  * PATH = "%PATH%;%JAVA_HOME%\bin;"
  
  **Observações:** _O **xxxx** em **JAVA_HOME** seria a versão do JDK, consulte o nome da pasta dentro do diretório **Java**_
  
  <a href="#menu2">Voltar ao menu</a>
  
  ### <a name="imp"> 1.3. Importação de bibliotecas </a>
 
  Após todas as configurações serem feitas, algumas bibliotecas são importadas no projeto antes mesmo do desenvolvimento, e são elas: **JNativeHook**, **Commons-email** & **javamail**. O **JNativeHook** é o responsável por disponibilizar métodos para leitura de mouse e teclado de forma nativa. Diferentemente dos **_KeyEvents_** que são padrões do JDK que ler o teclado apenas
na Interface do software, os **_NativeKeyEvents_** ler o teclado fora da interface, ou seja, em qualquer lugar do computador.
Isto é o que permite o Keylogger escanear informações de teclas. O **Commons-email** e **javamail** contém classes que possibilitam o envio de **emails**. Estas classes contém métodos para autenticação de login, definição de mensagens, envio de mensagens,etc... A biblioteca também contém a classe para envio de emails formatados em Html, como o: **HtmlMail** e a classe 
para envio de mensagens sem nenhuma formatação, como o: **SimpleMail**. Atualmente estas bibliotecas sofreram algumas atualizações com novas versões, o que explicam os possíveis bugs que poderiam gerar no software caso o computador do usuário esteja programado para atualizar o java automaticamente, porém na versão 2.0 do GhostScan a atualização automática também será disponível, o que eliminará as possíveis falhas por conta das atualizações do Java.
  
  <a href="#menu2">Voltar ao menu</a>
  
  ## 2. Algoritmos & Organização
  
  ### <a name="env"> 2.1. Envios de emails & scanners nativos </a>
  
  Como descrito em **Importação de bibliotecas**, o software trabalha com classes e métodos responsáveis por enviar emails e 
  escanear mouse/teclado de forma nativa. A classe de cada Keylogger implementa as interfaces **NativeMouseInputListener** e **NativeKeyListener** na qual cada interface contém métodos que são gerados para detectar movimento do mouse, cliques do mouse, pressionamento de teclas,etc... As posições do mouse são capturadas e são guardados textos em variáveis que são resultados de valores intermediários das regiões da tela. Já as teclas são concatenadas em variáveis a cada pressionamento, comparações são feitas para detectar cada tecla escaneada armazenando o resultado em variável global. Após todas as informações serem armazenadas, a cada intervalo de tempo (ou se cliques for detectados), As classes de email realizam autenticação dos dados de email inseridos no keylogger, a porta e o servidor do Gmail são setados e a classe envia um texto para o email, formatado em Html concatenado com as variáveis que guardam informações escaneadas.
  
  **Observaçoes:** _Neste caso, o GhostScan só criam keyloggers que utilizam o servidor do **Gmail**. Na versão 2.0 será acrescentado opções para escolher outros servidores, por exemplo: Hotmail, Outlook,etc..._
  
  <a href="#menu2">Voltar ao menu</a>
  
  ### <a name="est"> 2.2. Estrutura de pastas organizadas </a>
  
  O keylogger para ser gerado precisa de uma **Estrutura de pastas** pré-criadas. Estas pastas são instaladas no ato da Instalação do software e o diretório origem do GhostScan fica exatamente junto com estas pastas. Neste diretório estruturado contém pastas de bibliotecas como o JNativeHook e o Commons-email, pastas que contém bibliotecas do Java, Pasta de imagens do GhostScan, arquivos de manifestos, arquivos em lotes do windows para compilação e a pasta que é gerada os arquivos compilados do keylogger. Esta estrutura de pastas são nada mais nada menos os que ficam compactados com o JAR do arquivo keylogger, portanto esta estrutura é necessária para a geração do arquivo executável.
  
  <a href="#menu2">Voltar ao menu</a>
  
  ### <a name="arq"> 2.3. Arquivos em lotes do Windows (Batch Files) </a>
  
**_Batch Files_** ou **_Arquivos .bat_** são arquivos em lotes do Windows para armazenar e executar comandos do CMD, conhecido como **Prompt de comando**. Alguns softwares necessitam de operações utilizando estes comandos, como é o caso do GhostScan. Um exemplo é quando o software executa outro software que precisa de parâmetros e argumentos.. o GhostScan executa as ferramentas JAR e JAVAC para compilação do código do Keylogger.. como também executa as mesmas ferramentas para compilação e geração do executável do vírus **Ghost**. Estas ferramentas utilizam parâmetros via linha de comando utilizando CMD, o que o GhostScan faz é usar as mesmas linhas de comando alterando e armazenando variáveis em arquivos BAT, pois para cada arquivo gerado há um nome diferente, esses nomes são passados em variáveis BAT. Outra questão é a inicialização automática, onde o keylogger se auto-copia para um certo diretório do computador, Esta cópia é possibilitada através de um comando CMD, porém não utiliza os arquivos BATs desta vez, isto é feito no próprio código. Para setar as variáveis de ambiente no ato da instalação é a mesma coisa - um arquivo BAT é gerado e executado. O que será alterado na versão 2.0 será isto, o software não mais utilizará os Batch Files mas sim: utilizará os comandos no próprio código do keylogger.

<a href="#menu2">Voltar ao menu</a>

 ### <a name="out"> 2.4. Outros algoritmos </a>

Além de algoritmos de Scanners e emails, o GhostScan trabalha com algoritmos de detectar informações de rede, IP e ScreenShot da tela. Porém é importante ressaltar que não é o GhostScan que utiliza esses algoritmos - É o keylogger que foi gerado pelo GhostScan. Então como prioridade o que software faz: Ele verifica as opções selecionadas e inseridas do usuário, guarda em variáveis e faz comparações, dependendo do resultado da comparação o software armazena inúmeros algoritmos em formato de texto (String) em variáveis, após isso, estas variáveis são concatenadas com outras que seriam padrões para todos os keyloggers, o que nos dar **23 possibilidades** de algoritmos diferentes (Claro que em outras versões do GhostScan as possibilidades irão muito além disso), então é escrito um arquivo com o conteúdo das possíveis variáveis concatenadas, este arquivo é compilado e gerado o JAR que se transforma no keylogger.

Agora falando dos algoritmos específicos para outras operações: O ScreenShot da tela utiliza classes que verifica o tamanho da tela com a classe **Dimension**, tira o screenshot através da classe **Robot**, armazena o Screenshot em um buffer de imagem pela classe **BufferedImage** e escreve a imagem no sistema através da classe **ImageIO** com o tipo JPEG e um nome pré-definido. Este nome da imagem é usado para enviar como anexo para o email. Já nas informações de rede, o algoritmo utiliza a classe **InetAddress** para detectar informações de IPs internos, nome do computador e servidores locais, utiliza também a classe **Inet4Address** para pegar o nome do servidor local. No caso das placas e interfaces de redes instaladas, as informações são obtidas da classe **NetworkInterface** e percorre informações completas através de _Enumerações_ também utilizando a classe **InterfaceAddress**. Para cada classe desta existem métodos responsáveis por tais operações. O IP público é obtido fazendo uma requisição via URL do site [checkip amazonaws](http://checkip.amazonaws.com), a informação é capturada por um _leitor bufferizado_ com _Streams de Entrada_. Cada algoritmo desse armazena informações em variáveis, onde tais variáveis são concatenadas e enviadas para o email.

<a href="#menu2">Voltar ao menu</a>

  ### <a name="info"> 2.5. Informações de versões & Atualização </a>
  
  Após ler toda a documentação do GhostScan, aqui são destacadas todas as funcionalidades acrescentadas e correções futuras do GhostScan 2.0:

**Correções na versão 2.0 --->**

 * O sistema da versão 1.0 foi feito para ambientes Windows, mesmo que "algumas" funcionalidades executam no linux. No GhostScan 2.0 o software vai identificar o sistema operacional e terá algumas operações diferentes em cada plataforma, o que possibilitará executar todas as funcionalidades em qualquer plataforma: Windows, Mac & Linux.
 
 * O GhostScan para gerar o keylogger precisa da JDK instalada. Na versão 2.0, o software irá identificar se existe uma JDK instalada e se as variáveis de ambiente estão setadas, caso não estiver ele executa o JDK da própria pasta raiz do software, sem mesmo ter que precisar configurar variáveis de ambiente. Porém se existir a JDK mas as variáveis de ambiente não estão setadas, o software vai apenas setar as variáveis.
 
 * Como descrito na documentação, o software executa os arquivos .bat pré-gerados para efetuar alguma operação. Na outra versão isso não será necessário, pois esta parte será corrigida. Os comandos serão efetuados pelo próprio algoritmo do software, o que diminui a quantidade de arquivos da pasta raiz.

**Novas funcionalidades na versão 2.0 --->**

 * No sistema poderá ser selecionado a opção para enviar **Geo-localização aproximada** para o email baseado no IP público. Isto significa que: se o alvo tem um pendrive configurado para auto-execução e contém o keylogger lá dentro, o monitorador poderá saber a região que o alvo está se ele estiver utilizando um computador em outro local (com o respectivo pendrive), por exemplo: Numa lan house. O sistema enviará informações completas de latitude e longitude, região, cidade,etc...
 
 * Tornar pendrives auto-executáveis: O GhostScan poderá também além de gerar um keylogger, tornar um pendrive auto-executável e copiar o keylogger para ele, isto significa que na inserção do pendrive em qualquer computador, o keylogger será copiado para o computador e executado automaticamente.
 
 * Outro sistema de camuflagem implementado no GhostScan é o de **Conversão de tipos**. Após o keylogger ser gerado no formato **.jar**(Arquivo executável java), o usuário poderá escolher o conversor de tipos para converter do formato .jar para .exe (Arquivo executável do windows), dando uma maior camuflagem e possibilitando também a próxima funcionalidade.
 
 * Com um executável do tipo **.exe** o usuário poderá escolher no sistema de camuflagem um **ícone** para o keylogger, o GhostScan por padrão terá no seu sistema vários ícones prontos de outros softwares para ser escolhido, porém o usuário também poderá escolher seu próprio ícone em diretórios do seu computador.
 
 * Além do GhostScan ter opções de escanear teclado, mouse, ip, rede & screenshot, o software terá mais uma opção: Escanear históricos de navegadores. Todos os sites que o alvo pesquisar, o keylogger capturará todo o histórico dos browsers e enviará para o email do monitorador.
 
 * Na versão 1.0 o usuário só consegue gerar o keylogger na pasta raiz do programa, o que significa que dependendo da pasta, o usuário precisa ter permissão de escrita naquele diretório e sabemos que nem todos os diretórios tem esta permissão, Exemplo: Arquivos de programas. O sistema operacional automaticamente bloqueia a opção de escrita, a não ser que o usuário faça manualmente configurações de liberar permissão de administrador, porém na versão 2.0 não será necessário - Existirá um novo campo para o usuário escolher onde gostaria de criar o seu keylogger, ele poderá criar até na área de trabalho se quiser, o que elimina o fato de possíveis conflitos de permissão.
 
 * Atualmente o GhostScan trabalha com o servidor [smtp.gmail.com](https://gmail.com) na porta 447, o que significa que o keylogger só envia informações para contas de **Gmail**. Na versão 2.0, em vez do usuário ter que precisar criar uma nova conta do gmail apenas para monitoramento, ele pode criar contas em qualquer servidor, pois o GhostScan 2.0 terá a opção de escolher em qualquer servidor desejaria que o keylogger estivesse configurado, se seria o servidor do **hotmail** ou do **outlook** ou outros... Então isto vai depender da conta que o usuário inserir nas configurações do keylogger.
 
 * Por último mas não menos importante: O sistema de atualização automática estará disponível na versão 2.0. O software terá um executável de atualização junto na pasta de instalação que irá identificar se há uma nova versão do GhostScan no site da BFTC, se houver, o sistema alertará o usuário pedindo a confirmação para fazer a atualização do sistema. O software irá fazer download do site oficial, excluir os diretórios antigos e reinstalar a outra versão do GhostScan. Então o sistema de atualização sempre executará quando o computador do usuário ligar.
 
 **Detalhes importantes:** O Software GhostScan tem a versão **free Trial** neste mesmo repositório e a versão **comercial**. A versão Free Trial funciona apenas em 3 dias e bloqueia alguns recursos, sendo utilizado apenas para teste do programa. A versão comercial funciona por tempo ilimitado e contém todos os recursos descritos até aqui. A versão Free Trial também está disponível no site da [BFTCorporations](http://bftcorporations.mywebcommunity.com/Courses/) para [Download](http://bftcorporations.mywebcommunity.org/Downloads/GhostScan1.0/), já para ter acesso a versão paga o usuário precisaria ter um ID e senha criado pelo administrador após a compra do software. Após a compra, o usuário poderia acessar este mesmo ID para baixar a versão 2.0 do software, porém nesta próxima versão não será necessário efetuar esta mesma operação já que o software terá o sistema de **Atualização automática**, sendo assim, o usuário terá direito a todas as atualizações após a compra, incluindo as versões **Mobile App** do GhostScan.
 
 **Observações:** _Estes códigos, documentação e software estão protegidos por direitos autorais. Portanto é proibido a cópia/plágio, a distribuição ou venda do software/código descrito pelo Art. 184 do Código Penal - Decreto Lei 2848/40._
 
 <a href="#menuprincipal">Voltar ao menu principal</a>
 
 ### Agradecimentos
 
 Se chegou até aqui, muito obrigado por ler esta documentação que levou 2 dias para ser concluída! É uma honra poder desenvolver softwares open-sources e comerciais para todos os usuários e programadores. Agradecimentos BFTC!
 
 Ass.: Wender Francis da BFTCorporations.
 
 Site Oficial : [bftcorporations.mywebcommunity.org](http://bftcorporations.mywebcommunity.org/Courses)
 
 [Voltar ao repositório](https://github.com/FrancisBFTC/GhostScan-Trial-Version/)
