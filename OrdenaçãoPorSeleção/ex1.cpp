#include <stdio.h>

void funcSelectionSort(int v[], int tamanho){
    int i, j, min, aux;

    for(i=0; i< tamanho-1; i++){
        min = i;
        for(j=i+1; j<tamanho; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }
        aux = v[i];
        v[i] = v[min];
        v[min] = aux;
    }


}

int main(){
    int A[8] = {5,4,1,1,3,3,2,1};
    int tamanho = 8;
    funcSelectionSort(A, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", A[i]);
    }

}