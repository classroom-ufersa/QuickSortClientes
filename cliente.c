#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>

struct client{
    int numero_cliente;
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

void quicksort(Cliente *clientes, int n){
    particao(clientes, 0, n - 1);
}

void atribuirDados(Cliente *clientes, int n){
    FILE *client = fopen("clientes.txt", "r"); 
    if(client == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    int tamanho = n;
    Cliente *clientes_existentes = (Cliente*) malloc(tamanho * sizeof(Cliente));
    int clientesCadastrados = 0;
    while(fscanf(client, "código do cliente: %d\t Nome: %s\t Endereço: %s\n", &clientes_existentes[clientesCadastrados].codigo_cliente,
        clientes_existentes[clientesCadastrados].nome, clientes_existentes[clientesCadastrados].endereco) >= 1) {
        clientesCadastrados++;
        if(clientesCadastrados >= tamanho){
            tamanho *= 2;
            clientes_existentes = (Cliente*) realloc(clientes_existentes, tamanho * sizeof(Cliente));
        }
    }
    fclose(client);

    clientes_existentes = (Cliente*) realloc(clientes_existentes, (n + clientesCadastrados) * sizeof(Cliente));
    for(int i = 0; i < n; i++){
     
    free(clientes_existentes);   clientes_existentes[clientesCadastrados + i] = clientes[i];
    }

    quicksort(clientes_existentes, n + clientesCadastrados);

    client = fopen("clientes.txt", "w");
    for(int i = 0; i < n + clientesCadastrados; i++){
        fprintf(client, "código do cliente: %d\t Nome: %s\t Endereço: %s\t\n", clientes_existentes[i].codigo_cliente,
        clientes_existentes[i].nome, clientes_existentes[i].endereco); 
    }
    fclose(client); 
}


