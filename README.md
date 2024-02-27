<h1 align="left">QuickSort 💻</h1>

###

<p align="left">Olá! <br>Somos discentes da disciplina Algoritmos e Estrutura de Dados I ministrada pela docente Dra. Rosana Cibely, nesse projeto da segunda unidade da disciplina o objetivo é utilizar o algoritmo de ordenação QuickSort para realizar uma ordenação de clientes.</p>

###

<h1 align="left">Índice</h1>

###

<p align="left">* O que é QuickSort?<br>    <br>  * Finalidade de criação<br>    <br>  * Estudos e Conhecimentos<br>    <br>  * Como executar<br>    <br>  * Explicação do Código<br>    <br>  * Análise de Complexidade de Tempo<br><br>* Análise de Complexidade de Espaço<br>    <br>  * Resultado do Código<br><br>* Exemplificação do QuickSort</p>

###

<h1 align="left">O que é QuickSort?</h1>

###

<p align="left">O QuickSort é um algoritmo de ordenação eficiente e um dos mais conhecidos, ele opera utilizando a estratégia de “dividir para conquistar”. Sendo utilizado amplamente para ordenar grandes conjuntos de dados, ele escolhe um número da lista chamado de “pivô", coloca os números menores à esquerda e os maiores à direita, sendo esse processo repetido em cada metade até que toda lista toda esteja ordenada.</p>

###

<h1 align="left">Finalidade de criação</h1>

###

<p align="left">Foi criado a fim de armazenar os clientes ordenados em um arquivo .txt que mantenha os dados salvos a partir de um ID individual distribuido para cada cliente utilizando o algoritmo de ordenação QuickSort programado na linguagem C.</p>

###

<h1 align="left">Estudos e conhecimento</h1>

###

<p align="left">Há alguns estudos e conhecimentos que se torna necessário ter uma base antes de se estudar o código do QuickSort em C, algumas delas são:<br> - O conhecimento da Programação em C;<br> - Manipulação de Vetores e Ponteiros;<br> - Compreensão de Algoritmos de Ordenação;<br> - Análise de Complexidade de Algoritmos;<br> - Pivôs e Partições.</p>

###

<h1 align="left">Como executar</h1>

###

<p align="left">Para executar o programa, deve ser feito os seguintes passos:<br>- Abra o terminal na pasta do projeto.<br>- Compile os arquivos main.c e cliente.c com o comando gcc main.c cliente.c -o main.<br>- Execute o programa com o comando ./main.<br>- Siga as instruções exibidas no console para cadastrar os clientes. Você será solicitado a inserir o nome, endereço e código do cliente.<br>- Após o cadastro, os dados dos clientes serão ordenados e armazenados no arquivo "clientes.txt".</p>

###

<h1 align="left">Explicação do código</h1>

###

<p align="left">O projeto consiste na implementação do algoritmo Quicksort para ordenar clientes com base em um ID atribuído a cada um. Após a ordenação, os dados dos clientes são armazenados em um arquivo .txt para manter os registros constantemente atualizados. Três bibliotecas são essenciais para o funcionamento do código:<br><br>      1. Stdlib.h: Contém funções básicas para manipulação de memória dinâmica. <br>      2. Stdio.h: Oferece funções para entrada e saída de dados.<br>      3. Cliente.h: Uma biblioteca criada especificamente para o projeto, com funções que implementam o Quicksort e gerenciam os dados em arquivos de texto.<br>      4. Time.h: Biblioteca padrão do C que inclui funções para manipulação de datas e horas.<br>      5. ctype.h: Biblioteca que contém funções e macros para manipulação de caracteres.</p>

###

<h1 align="left">Cliente.c</h1>

###

<p align="left">-> Struct cliente.c: Temos as variáveis que constituem os dados do cliente, os quais são: nome, endereço e código, que seria seu ID de identificação.<br><br>      -> Trocar_posicao: Essa função troca a posição de dois clientes na memória. Ela recebe dois ponteiros como parâmetros, apontando para os endereços de memória dos clientes. Os conteúdos desses ponteiros são trocados entre si.<br><br>      -> Particao: Essa função é crucial para a implementação do algoritmo Quicksort. Ela divide uma array em duas pilhas: uma com valores menores que o pivô e outra com valores maiores que o pivô.<br><br>    -> Struct cliente.c: Temos as variáveis que constituem os dados do cliente, os quais são: nome, endereço e código, que seria seu ID de identificação.<br><br>    -> Trocar_posicao: Essa função troca a posição de dois clientes na memória. Ela recebe dois ponteiros como parâmetros, apontando para os endereços de memória dos clientes. Os conteúdos desses ponteiros são trocados entre si.<br>    <br>    -> Particao: Essa função é crucial para a implementação do algoritmo Quicksort. Ela divide uma array em duas pilhas: uma com valores menores que o pivô e outra com valores maiores que o pivô.<br>      * PIVO        : Escolhe o primerio cliente como pivô;<br>      * i           : Inicializa i para apontar para o segundo cliente no array;<br>      * j           : Inicializa j para apontar para o último cliente do array;  <br>      * O loop principal (while(i <= fim)) realiza os movimentos dentro do array , trocando a posição dos clientes quando necessário;<br>      * Primeiro if : Se o código do cliente em i for menor ou igual ao do pivô, incrementa o valor de i;<br>      * if else     : Se o código do cliente em j for maior que o código do cliente em j, decrementa o valor de j;<br>      * else        : Se nenhuma das condições anteriores for verdadeira, os clientes em i e j são trocados de posição usando a função;<br>      * Após o loop, o cliente na posição do pivô troca de posição com o cliente em j, determinando que o pivô agora é ele.  <br>     <br>     -> int contem_apenas_letras: Essa função verifica que quando o cliente inserir seu nome so será aceito e  cadastrado quando for digitado uma string, recussando e pedindo para digitar novamente se for inserido um inteiro no campo nome.<br><br>-> int contem_apenas_numeros: Essa função verifica se a mensagem inserida foram apenas números, quando digitada uma letra é recusado e pedido para digitar a mensagem novamente.<br><br>-> QuickSort:<br>      *  É a função principal do algoritmo;<br>      *  Recebe um array de clientes e o número total de clientes como argumentos;<br>      *  Chama a função particao para dividir os arrays;<br>      *  Realiza A ordenalção recursiva das duas partes separadas.<br><br>-> *lerarquivo:<br>         * Responsável por ler os dados dos clientes, agora ordenados corretamente, no arquivo ‘clientes.txt’;<br>         * Ela recebe um array do tipo estruturado Cliente e o número de clientes cadastrados como argumentos;<br>         * No comando ‘FILE *ler = fopen(“Clientes.txt”, “r”);’, os dados dos clientes serão lidos no arquivo;<br>         * No ‘while’ o programa lê cada linha do arquivo usando fgets, onde cada vez que uma linha é lida, a variável qnt é incrementada;<br>         * Na alocação dinâmica a memória é alocada dinamicamente para armazenar os dados de clientes, onde o tamanho alocado é (qnt + 1)* sizeof(Cliente), isso <br>           permite que a estrutura de dados clientes armazene todas as informações lidas no arquivo;<br>         * No rewind(ler), o ponteiro de arquivo é movido para o início para que seja lido novamente todas as informações do arquivo;<br>         * No segundo loop while, o programa lê cada linha do arquivo novamente, onde a função sscanf é usada para analisar a linha e preencher os campos da <br>         estrutura cliente. No índice n* é rastreado a posição atual  na  estrutura de dados clientes, onde seu valor é incrementado a cada leitura;<br>         * No ‘fclose(ler)’ fechamos o arquivo de texto;<br>         * Em return clientes o ponteiro é retornado para clientes.<br><br>-> inserirNovosClientes:<br>        * Essa função possui a responsabilidade de subscrever os novos clientes inseridos juntamente com os antigos no arquivo cliente. txt;<br>        * Em FILE *client = fopen("clientes.txt", "w") foi criado um ponteiro cliente associado ao arquivo clientes.txt no modo escrita, tornando possível o <br>          programa escrever ou criar um novo arquivo caso ele não exista;<br>        * No for é percorrido todos os clientes representados pelo array de estrutura Cliente;<br>        * Em fclose(client) o arquivo é fechado após a escrita.<br><br>-> atribuirDados:<br>      * Responável por escrever os dados ods clientes, agora ordenados, no arquivo clientes.txt;<br>      * Recebe um array do tipo estruturado Cliente e o número de clientes cadastrados como argumentos;<br>      * Abre o arquivo clientes.txt em modo de adição ("a"), para adiconar os dados sem apagar os que ja estavam cadastrados;<br>      * Percorre cada arrays usando o loop for;<br>      * Usa o fprintf para escrever os dados de cada cliente no arquivo;<br>      * Finalmente fecha o arquivo com fclose(client).</p>

###

<h1 align="left">Cliente.h</h1>

###

<p align="left">-> Esse é nosso arquivo cabeçalho, é uma forma de organizar e modularizar nosso código, separando as declarações e definições do restante da implementação. Isso torna o código mais legível e facilita a manutenção.</p>

###

<h1 align="left">Main.c</h1>

###

<p align="left">-> Esse é nosso arquivo main onde contém o nosso código fonte, onde o programa é executado.<br><br>          * Registro do tempo de início: a linha clock_t comeco = clock();<br><br>          * Loop com do while: o bloco do while cria um loop que continua até que o usuário insira um número válido maior que zero, pnde esse número representa a quantidade de clientes a serem cadastrados;<br><br>* Realocação dinâmica: realoca a memória dinamicamente para acomodar os clientes adicionados, e verifica se a realocação foi bem sucedida; <br><br>          * Verificação de alocação de memória: o if identifica se a alocaçaõ foi feita com sucesso;<br><br>          * Loop para coletar os dados  dos clientes: um loop for solicita que sejam fornecidos os dados dos clientes n outrora especificados;<br><br>          * Chamada da função quicksort: a linha quicksort(clientes, n) chama a função quicksort criada no arquivo clientes.c e encapsulada no arquivo clientes.h;<br><br>          * Chamada da função ler arquivo: essa função é responsável por ler os dados dos clientes ordenados corretamente no arquivo "cliente.txt";<br><br>          * Chamada da função inserir novos clientes: possui a responsabilidade de subscrever os clientes inseridos juntamente com os que foram inseridos anteriormente no arquivo; <br><br>          * Liberação da memória: O comando free(clientes); libera a memória inicialmente alocada;<br><br>          * Cálculo do tempo de execução: A variável double tempo calcula o tempo de execução e exibe-o para o usuário.</p>



## Análise de complexidade de tempo 
  -> O algoritmo baseia a ordenação em sucessivas execuções de particionamento, uma rotina que escolhe um pivot e o posiciona no array de uma maneira em que os elementos menores ou iguais ao pivot estão à sua esquerda e os maiores estão à sua direita.

      O algoritmo de particionamente é O(n)
      Há dois algoritmos populares de particionamento: o de Lomuto e o de Hoare.
      O particionamento Hoare, embora mais complexo, é na prática mais eficiente que o de Lomuto.
    -> No caso médio e no melhor caso, o Quick Sort é O(n∗logn)
      
    ->No pior caso, o Quick Sort é O(n2)
      O pior caso do Quick Sort é raro e é causado por sucessivas péssimas escolhas de pivot quando o array já está ordenado. 
      
      Para remediar este problema, há estratégias para escolher melhor o elemento que será o pivot do particionamento, entre elas estão:
      *Escolher o pivot aleatoriamente.
      *Escolher o pivot como sendo a mediana entre o primeiro, o elemento central e o último elemento do array.
   
    O caso médio é muito mais provável do que o pior e o melhor caso. Apesar de estar na mesma classe de complexidade do Merge Sort e do Heap Sort, há experimentos que demonstram que o Quick Sort em seu melhor caso e caso médio é por volta de 3x mais eficiente que o Merge Sort, porque ele contém constantes menores. 
    

 ## Resultado do Código
    -> Teremos como resultado do código a ordenação dos clientes por seu ID fornecido.
