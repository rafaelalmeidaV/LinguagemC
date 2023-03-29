#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int *vet, int posicao) {
    if (posicao >= 0) {
        printf("%d ", vet[posicao]);
        imprimeVetor(vet, posicao-1); //passo de recursão
    } 
  
} 
int main() {
    int *vet = malloc(sizeof(int) * 10);
    int i;
    for (i = 0; i < 10; i++) {
        vet[i] = i+1;
    }
    imprimeVetor(vet, 9);
}