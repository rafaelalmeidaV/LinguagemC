#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No{
    char nome[21]; //nome com até 20 caracteres
                   //1 para guardar o caractere de fim de string

    struct No* proximo; //deve guardar o endereco do proximo elemento da lista
}

struct No* inicio = NULL;

//adiciona um nome à lista

void insereNoInicio (char *nome){
    //Primeiro passo: construir um nó para armazenar o nome
    struct No* novo = malloc(sizeof(struct No));

    //Segundo passo: guardar informações no nó
    strcpy(novo->nome, nome);
    //terceiro passo
    novo->proximo = NULL;

    //quarto passo:
    inicio = novo

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
            temp = temp->proximo
        }
        //insere apos o ultimo
        temp->proximo=nome;

    }
}

void imprime(){
    //passo1: para cada nó que nao for o ultimo

    //passo2: imprime o nome guardado no nó

    //passo3: passe o ponteiro para a proxima posição da lista
}