/*Renomeei o tipo estruturado cliente que contêm todos os dados dos clientes cadastrados: nome, endereço e o código
de verificação do cliente*/
typedef struct cliente Cliente;
/*Função do tipo void que realiza o cadatramento dos dados armazenado no ponteiro do tipo Cliente e transfere para o arquivo
clientes.txt*/
void atribuirDados(Cliente *clientes, int n);