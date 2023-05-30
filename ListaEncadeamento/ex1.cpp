#include <stdio.h>

struct {
    char info;
    Node next;

} typedef Node;

int main(){

    Node *p;
    p = (Node *) malloc(sizeof(Node));
    p->info = 'a';
    p->next = (Node *) malloc(sizeof(Node));
    p->next->info = 'b';
    p->next->next = (Node *) malloc(sizeof(Node));
    p->next->next->info = 'c';
    p->next->next->next = NULL;

    Node *q;
    q = (Node *) malloc(sizeof(Node));
    q->info = 'd';
    q->next = (Node *) malloc(sizeof(Node));
    q->next->info = 'e';
    q->next->next = (Node *) malloc(sizeof(Node));
    q->next->next->info = 'f';
    q->next->next->next = NULL;

    Node *r;
    r = (Node *) malloc(sizeof(Node));
    r->info = 'g';
    r->next = (Node *) malloc(sizeof(Node));
    r->next->info = 'h';
    r->next->next = (Node *) malloc(sizeof(Node));
    r->next->next->info = 'i';
    r->next->next->next = NULL;

    p->next->next->next = q;
    q->next->next->next = r;

    Node *aux;
    aux = p;
    while(aux != NULL){
        printf("%c ", aux->info);
        aux = aux->next;
    }
    printf("\n");

    aux = p;
    while(aux != NULL){
        if(aux->info == 'b'){
            aux->next = aux->next->next;
        }
        aux = aux->next;
    }

    aux = p;
    while(aux != NULL){
        printf("%c ", aux->info);
        aux = aux->next;
    }
    printf("\n");

    return 0;
}