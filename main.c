#include <stdio.h>
#include "cliente.c" 
#include <stdlib.h>
#include <time.h>

int main(void){
    clock_t comeco = clock();
    int n;

    do{
    printf("Quantos clientes deseja cadastrar? ");
    scanf("%d", &n);
        if(n <= 0){
            printf("Por favor, insira um número válido maior que zero.\n");
        }
    }while (n <= 0);

    Cliente *clientes = (Cliente*) malloc(n * sizeof(Cliente)); 
    if(clientes == NULL){
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

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

    double tempo = (double) (clock() - comeco) / CLOCKS_PER_SEC;
    printf("Tempo de execução do programa em segundos: %f\n", tempo);

    return 0;
}
