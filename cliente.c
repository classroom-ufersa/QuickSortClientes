#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

struct client{
    char nome[50];
    char endereco[100];
    int codigo_cliente;
};

void trocar_posicao(Cliente *a, Cliente *b){
    Cliente c = *a;
    *a = *b;
    *b = c;
}

void particao(Cliente *clientes, int inicio, int fim){
    int pivo = inicio;
    int i = inicio + 1;
    int j = fim;
    while(i <= j){
        if(clientes[i].codigo_cliente <= clientes[pivo].codigo_cliente){
            i++;
        }
        else if(clientes[j].codigo_cliente > clientes[pivo].codigo_cliente){
            j--;
        }
        else{
            trocar_posicao(&clientes[i], &clientes[j]);
            i++;
            j--;
        }
    }
    trocar_posicao(&clientes[pivo], &clientes[j]);
    pivo = j;
    if(inicio < pivo){
        particao(clientes, inicio, pivo - 1);
    }
    if(pivo < fim){
        particao(clientes, pivo + 1, fim);
    }
}

int contem_apenas_letras(char *str) {
    for (int index = 0; str[index] != '\0'; index++) {
        if (!isalpha(str[index]) && str[index] != ' ') {
            printf("A string deve conter apenas letras.\n");
            return 0; 
        }
    }
    return 1; 
}

int contem_apenas_numeros(char *str) {

    for (int index = 0; str[index] != '\0'; index++) {
        if (isalpha(str[index]) && str[index]) {
            printf("só aceita numero!!!!!!!!\n");
            return 0;
        }
    }
    return 1;
}

void quicksort(Cliente *clientes, int n){
    particao(clientes, 0, n - 1);
}

Cliente *lerArquivo(Cliente *clientes, int *n){
    FILE *ler = fopen("clientes.txt","r");
    char linha[100];
    int qnt = 0;
    while (fgets(linha,100,ler) != NULL)
    {
        qnt++;
    }
    clientes = (Cliente*) malloc((qnt + 1) * sizeof(Cliente));
    rewind(ler);
    while (fgets(linha,100,ler) != NULL)
    {
        sscanf(linha,"%d\t%[^\t]%[^\n]", &clientes[(*n)].codigo_cliente, clientes[(*n)].nome,clientes[(*n)].endereco);   
        (*n)++;
    }
    fclose(ler);
    return clientes;
}

void inserirNovosClientes(Cliente *clientes, int n){

    FILE *client = fopen("clientes.txt", "w"); 
    for(int i = 0; i < n; i++){
        fprintf(client, "%d\t%s\t%s\n", clientes[i].codigo_cliente,clientes[i].nome, clientes[i].endereco); 
    }
    fclose(client); 
}
