#include <stdio.h>
#include "cliente.c"
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(void)
{
    clock_t comeco = clock();
    int n;
    int qnt = 0;

    Cliente *clientes = NULL;
    clientes = lerArquivo(clientes, &qnt);
    do
    {
        printf("Quantos clientes deseja cadastrar? ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Por favor, insira um número válido maior que zero.\n");
        }
    } while (n <= 0);
    n += qnt;
    clientes = (Cliente *)realloc(clientes, (n + 1) * sizeof(Cliente));
    if (clientes == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    char aux[100];
    for (int i = qnt; i < n; i++)
    {

        do
        {
            printf("Informe o nome do cliente: ");
            scanf(" %[^\n]", clientes[i].nome);
            getchar();
        } while (!contem_apenas_letras(clientes[i].nome));

        printf("Informe o endereço do cliente: ");
        scanf(" %[^\n]", clientes[i].endereco);
        getchar();
        do
        {
            printf("Digite o código do cliente: ");
            scanf(" %[^\n]", aux);
            getchar();
        } while (!contem_apenas_numeros(aux));
        sscanf(aux,"%d", &clientes[i].codigo_cliente);
    }

    quicksort(clientes, n);
    inserirNovosClientes(clientes, n);
    free(clientes);

    double tempo = (double)(clock() - comeco) / CLOCKS_PER_SEC;
    printf("Tempo de execução do programa em segundos: %f\n", tempo);

    return 0;
}