
# QuickSortClientes
Olá! 
Somos discentes da disciplina Algoritmos e Estrutura de Dados I ministrada pela docente Dra. Rosana Cibely, nesse projeto da segunda unidade da disciplina o objetivo é utilizar o algoritmo de ordenação QuickSort para realizar uma ordenação de clientes.
## Componentes 
* Allan Gabriel Silva de Freitas;
* Evelyn Cristina de Oliveira Gomes;
* Maria Clara Saraiva Leal;
* Shamyra de Fátima Saraiva Carvalho;

# Explicação Geral do Projeto

## Índice
    
  * O que é QuickSort?
    
  * Finalidade de criação
    
  * Habilidades e Estudos
    
  * Como executar
    
  * Explicação do Código
    
  * Resultado do Código
    
## O que é QuickSort?
O QuickSort é um algoritmo de ordenação eficiente e um dos mais conhecidos, ele opera utilizando a estratégia de “dividir para conquistar”. Sendo utilizado amplamente para ordenar grandes conjuntos de dados, ele escolhe um número da lista chamado de “pivô", coloca os números menores à esquerda e os maiores à direita, sendo esse processo repetido em cada metade até que toda lista toda esteja ordenada.

## Finalidade de Criação
Tem como finalidade armazenar os clientes ordenados em um arquivo .txt que mantenha os dados salvos a partir de um ID individual distribuido para cada cliente utilizando o algoritmo de ordenação QuickSort programado na linguagem C.

 ## Estudos e Conhecimentos
 Há alguns estudos e conhecimentos que se torna necessário ter uma base antes de se estudar o código do QuickSort em C, algumas delas são:
 - O conhecimento da Programação em C;
 - Manipulação de Vetores e Ponteiros;
 - Compreensão de Algoritmos de Ordenação;
 - Análise de Complexidade de Algoritmos;
 - Pivôs e Partições.
   
 ## Como executar   
 Para executar o programa, deve ser feito os seguintes passos:
- Abra o terminal na pasta do projeto.
- Compile os arquivos main.c e cliente.c com o comando gcc main.c cliente.c -o main.
- Execute o programa com o comando ./main.
- Siga as instruções exibidas no console para cadastrar os clientes. Você será solicitado a inserir o nome, endereço e código do cliente.
- Após o cadastro, os dados dos clientes serão ordenados e armazenados no arquivo "clientes.txt".

 ## Explicação do Código
   O projeto consiste na implementação do algoritmo Quicksort para ordenar clientes com base em um ID atribuído a cada um. Após a ordenação, os dados dos clientes são armazenados em um arquivo .txt para manter os registros constantemente atualizados. Três bibliotecas são essenciais para o funcionamento do código:

      1. Stdlib.h: Contém funções básicas para manipulação de memória dinâmica. 
      2. Stdio.h: Oferece funções para entrada e saída de dados.
      3. Cliente.h: Uma biblioteca criada especificamente para o projeto, com funções que implementam o Quicksort e gerenciam os dados em arquivos de texto.
      4. Time.h: Biblioteca padrão do C que inclui funções para manipulação de datas e horas.

   \\ clientes.c \\ 

  -> Struct cliente.c: Temos as variáveis que constituem os dados do cliente, os quais são: nome, endereço e código, que seria seu ID de identificação.
  -> Trocar_posicao: Essa função troca a posição de dois clientes na memória. Ela recebe dois ponteiros como parâmetros, apontando para os endereços de memória dos clientes. Os conteúdos desses ponteiros são trocados entre si.
  -> Particao: Essa função é crucial para a implementação do algoritmo Quicksort. Ela divide uma array em duas pilhas: uma com valores menores que o pivô e outra com valores maiores que o pivô.
      * PIVO        : Escolhe o primerio cliente como pivô;
      * i           : Inicializa i para apontar para o segundo cliente no array;
      * j           : Inicializa j para apontar para o último cliente do array;  
      * O loop principal (while(i <= fim)) realiza os movimentos dentro do array , trocando a posição dos clientes quando necessário;
      * Primeiro if : Se o código do cliente em i for menor ou igual ao do pivô, incrementa o valor de i;
      * if else     : Se o código do cliente em j for maior que o código do cliente em j, decrementa o valor de j;
      * else        : Se nenhuma das condições anteriores for verdadeira, os clientes em i e j são trocados de posição usando a função;
      * Após o loop, o cliente na posição do pivô troca de posição com o cliente em j, determinando que o pivô agora é ele.  

  -> QuickSort:
      * É a função principal do algoritmo;
      * Recebe um array de clientes e o número total de clientes como argumentos;
      * Chama a função particao para dividir os arrays;
      * Realiza A ordenalção recursiva das duas partes separadas.

  -> atribuirDados:
      * Responável por escrever os dados ods clientes, agora ordenados, no arquivo clientes.txt;
      * Recebe um array do tipo estruturado Cliente e o número de clientes cadastrados como argumentos;
      * Abre o arquivo clientes.txt em modo de adição ("a"), para adiconar os dados sem apagar os que ja estavam cadastrados;
      * Percorre cada arrays usando o loop for;
      * Usa o fprintf para escrever os dados de cada cliente no arquivo;
      * Finalmente fecha o arquivo com fclose(client).

      \\ cliente.h \\

      -> Esse é nosso arquivo cabeçalhp, é uma forma de organizar e modularizar nosso código, separando as declarações e definições do restante da implementação. Isso torna o código mais legível e facilita a manutenção.

      \\ main.c \\

      -> Esse é nosso arquivo main onde contém o nosso código fonte, onde o programa é executado.
          * Registro do tempo de início: a linha clock_t comeco = clock();
          * Loop com do while: o bloco do while cria um loop que continua até que o usuário insira um número mválido maior que zero, pnde esse número representa a quantidade de clientes a serem cadastrados;
          * Alocação dinâmica: na linha Cliente clientes = (cliente *) malloc(n *sizeof(Cliente)); realiza a alocação de memória para a qauntidade de n clientes , permitindo que o programa trabalhe somente com a quantidade de memória necessária;
          * Verificação de alocação de memória: o if identifica se a alocaçaõ foi feita com sucesso;
          * Loop para coletar os dados  dos clientes: um loop for solicita que sejam fornecidos os dados dos clientes n outrora especificados;
          * Chamada da função quicksort: a linha quicksort(clientes, n) chama a função quicksort criada no arquivo clientes.c e encapsulada no arquivo clientes.h;
          * Chamada da função atribuirDados: A linha atribuirDados(clientes, n); chama a função que faz o registro dos dados no arquivo .txt;
          * Liberação da memória: O comando free(clientes); libera a memória inicialmente alocada;
          * Cálculo do tempo de execução: A variável double tempo calcula o tempo de execução e exibe-o para o usuário.

 ## Resultado do Código
