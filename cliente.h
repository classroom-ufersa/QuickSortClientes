/* Renomeei o tipo estruturado cliente que contêm todos os dados dos clientes cadastrados: nome, endereço e o código
de verificação do cliente */
typedef struct client Cliente;
/* Função do tipo void que realiza o cadatramento dos dados armazenado no ponteiro do tipo Cliente e transfere para o arquivo
clientes.txt */
void atribuirDados(Cliente *clientes, int n);
/*Função onde eu implemento o QuickSort que vai separar os dados em duas pilhas e reorganizar de acordo com a ordem do id cadastrado
para cada um cliente*/
void quicksort(Cliente *clientes, int n);
/* Função para verificar se possui um inteiro onde deveria ser informado uma string*/
int contem_apenas_letras(char *str);
/*Função que vai ler os clientes antigos do arquivo .txt juntamente com os novos clientes que estão sendo cadastrados*/
void inserirNovosClientes(Cliente *clientes, int n);
/*Função que vai apenas ler os clientes do arquivo .txt*/
Cliente *lerArquivo(Cliente *clientes, int *n);
/*Função que verifica se possui letras onde deveria ser informado um número*/
int contem_apenas_numeros(char *str);
