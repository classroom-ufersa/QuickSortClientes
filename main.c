#include <stdio.h>
#include "cliente.c"
#include <stdlib.h>

int main(void){
    int n; //Variável que determina o número de clientes a serem cadastrados
    printf("Quantos clientes deseja cadastrar? ");
    scanf("%d", &n);
    Cliente *clientes = (Cliente*) malloc(n * sizeof(Cliente)); //Alocação dinâmica do ponteiro clientes do tipo Cliente

    for(int i = 0; i < n; i++){
        printf("Informe o nome do cliente: ");
        scanf(" %[^\n]", clientes[i].nome); //Cadastro do nome do cliente
        getchar(); //Função para absorver o \n
        printf("Informe o endereço do cliente: ");
        scanf(" %[^\n]", clientes[i].endereço); //Cadastro do enedereço do cliente
        getchar();
        printf("informe o código do cliente: ");
        scanf("%d", &clientes[i].codigo_cliente); //Cadatro do código do cliente
        getchar();
    }

    atribuirDados(clientes, n);

    //CRIAR FUNÇÃO QUE APAGA O ARQUIVO TXT
    free(clientes); //Esvaziamento da memória alocada pelo ponteiro clientes

    return 0;
}