#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>

struct client{
    char nome[50];
    char endereco[50];
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

void quicksort(Cliente *clientes, int n){
    particao(clientes, 0, n - 1);
}

void atribuirDados(Cliente *clientes, int n){

    FILE *client = fopen("clientes.txt", "a"); 
    for(int i = 0; i < n; i++){
        fprintf(client, "código do cliente: %d\t Nome: %s\t Endereço: %s\n", clientes[i].codigo_cliente,
        clientes[i].nome, clientes[i].endereco); 
    }
    fclose(client); 
}
