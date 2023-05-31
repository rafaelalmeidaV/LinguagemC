#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No{
    char nome[21]; //nome com até 20 caracteres
                   //1 para guardar o caractere de fim de string

    struct No* proximo; //deve guardar o endereco do proximo elemento da lista
};

struct No* inicio = NULL;

//adiciona um nome à lista

void insereNoInicio (char *nome){
    //Primeiro passo: construir um nó para armazenar o nome
    struct No* novo = malloc(sizeof(struct No));

    //Segundo passo: guardar informações no nó
    strcpy(novo->nome, nome);
    //terceiro passo
    novo->proximo = inicio;

    //quarto passo:
    inicio = novo;

    //Terceiro Passo: Se a lista tiver vazia, insira o novo no inicio
    if(inicio == NULL)
    inicio = novo;

}

void insereNoFim (char* nome){
    //Primeiro passo: construir um nó para armazenar o nome
    struct No* novo = malloc(sizeof(struct No));

    //Segundo passo: guardar informações no nó
    strcpy(novo->nome, nome);
    //terceiro passo
    novo->proximo = NULL;

    //Terceiro Passo: Se a lista tiver vazia, insira o novo no inicio
    if(inicio == NULL)
    inicio = novo;


    //Quarto passo: andar ate o ultimo nó
    else {
        struct No* temp=inicio;
        while(temp->proximo!=NULL){
            temp = temp->proximo;
        }
        //insere apos o ultimo
        temp->proximo=novo;

    }
}

void imprime(){
    //passo1: para cada nó que nao for o ultimo
    struct No* temp = inicio;
    

    //passo2: imprime o nome guardado no nó
    while(temp!=NULL){
        printf("%s\n", temp->nome);
        //passo3: passe o ponteiro para a proxima posição da lista
        temp = temp->proximo;
    }

 

}

int TamanhoDaLista(){
    //deve calcular quanto nós existem na lista
    //e retornar

    int cont = 0;
    
    struct No* temp = inicio;
    

    while(temp!=NULL){
        temp = temp->proximo;
        cont++;

    }
    printf("%d",cont);

}

struct No* procura(char Nome[]){
    //deve procurar o nome na lista
    //caso nao encontre, retorna Null
    //se encontrar retorna o nó na lista onde o nome está 
    
    struct No* temp = inicio;
    while(temp!=NULL){
        if(strcmp(temp->nome, Nome)==0){
            printf("%s", temp->nome);
            return temp;
        }
        temp = temp->proximo;
    }
}

void inverteLista(){
    //dada uma lista
    //criar outra para imprimir a lista na ordem inversa

    struct No* temp = inicio;
    struct No* temp2 = NULL;
    struct No* temp3 = NULL;
    while(temp!=NULL){
        temp2 = temp->proximo;
        temp->proximo = temp3;
        temp3 = temp;
        temp = temp2;
    }
    inicio = temp3;
    imprime();


    
     
    
    
}

int main(){
    insereNoInicio("Maria");
    insereNoInicio("Joao");
    insereNoInicio("Jose");
    imprime();
    TamanhoDaLista();
    procura("Jose");
    inverteLista();
    return 0;
}