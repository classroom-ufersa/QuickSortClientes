#include <stdio.h>
#include "cliente.c" 
#include <stdlib.h>

int main(void){
    int n; 
    printf("Quantos clientes deseja cadastrar? ");
    scanf("%d", &n);
    Cliente *clientes = (Cliente*) malloc(n * sizeof(Cliente)); 
    for(int i = 0; i < n; i++){
        printf("Informe o nome do cliente: ");
        scanf(" %[^\n]", clientes[i].nome); 
        getchar(); 
        printf("Informe o endereço do cliente: ");
        scanf(" %[^\n]", clientes[i].endereco); 
        getchar();
        printf("Digite o código do cliente: ");
        scanf("%d", &clientes[i].codigo_cliente); 
        getchar();
    }

    quicksort(clientes, n); 
    atribuirDados(clientes, n);

    free(clientes); 

    return 0;
}
