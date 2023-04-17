#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_fUNCIONARIOS 100

    int tamanho=0;

struct Funcionarios{
    char codigo[10];
    char nome[100];
    char cargo[20];
};


// A função irar ler todas as informações dos funcionarios
void lerFuncionarios(){

    int i =0, x;

    struct Funcionarios funcionario; 
    //            (struct Funcionario) declarar o tipo do malloc
    funcionario = (struct Funcionario) malloc(tamanho * sizeof(struct Funcionarios));// tamanho indefinido de funcionarios

    struct Funcionarios funcionarioAux; // variavel auxiliar
    funcionarioAux = (struct Funcionario) malloc(tamanho * sizeof(struct Funcionarios));



    printf("Quantos funcionarios deseja adicionar?");
    scanf("%d", &tamanho);


    fflush(stdin);
    for(i =0; i<tamanho; i++){
        struct Funcionarios temp;

        printf("Nome: ");
        gets(temp.nome);

        printf("codigo: ");
        gets(temp.codigo);

        printf("cargo: ");
        gets(temp.cargo);

        funcionario[i] = temp;
    }

    for(i =0; i<tamanho; i++){
    strcpy(funcionarioAux[i].nome, funcionario[i].nome);
    strcpy(funcionarioAux[i].codigo, funcionario[i].codigo);
    strcpy(funcionarioAux[i].cargo, funcionario[i].cargo);
    }

    for( x =0; x<tamanho; x++){ // apagar for, usado somente para testes
    printf("\n%s", funcionario[x].nome);
    }
    fflush(stdin);


     //fazer função recursiva
}

int main(){



    lerFuncionarios();


 


}