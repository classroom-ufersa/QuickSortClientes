#include "cliente.h"
#include <stdlib.h>
#include <stdio.h>
struct cliente{ //Criação do meu tipo estruturado clientes
    char nome[20];
    char endereço[30];
    int codigo_cliente;
};

void atribuirDados(Cliente *clientes, int n){
    FILE *client = fopen("clientes.txt", "wrt"); //Criação do arquivo clientes.txt
    for(int i = 0; i < n; i++){
        fprintf(client, "código do cliente: %d\t Nome: %s\t Endereço: %s\n", clientes[i].codigo_cliente,
        clientes[i].nome, clientes[i].endereço); //Cadastro no arquivo txt do código, nome e endereço
    }
}