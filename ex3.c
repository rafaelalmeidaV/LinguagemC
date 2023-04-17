#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct Conta{
    float valorConta;
    int numeroConta;
};

struct Cliente{
    char nomeCliente[100];
    int codigoCliente;
    struct Conta conta;    
};

int main(){

    struct Cliente *cliente=NULL; //tamanho indefinido de 
                                  //clientes
    
    struct Cliente *clienteAux=NULL;

    int i, tamanho, tamanhoaux;
    char enter, continua ='s';

    do{

        printf("digite a quantidade de clientes: ");
        scanf("%d", &tamanhoaux);
    }

    

}