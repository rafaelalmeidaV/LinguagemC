#include <stdio.h>

void func(int A[], int tamanho){
    int i, j,k,elemento;

    for( j = 1; j < tamanho; j++){
        elemento = A[j];
        i = j - 1;

        k=j;
        while ((i >= 0) and (A[i] > elemento))
        {
            A[k] = A[i];
            i--;
            k--;
        }
        A[k] = elemento;
        
    }
}

int main(){
    int A[5] = {5,4,3,2,1};
    int tamanho = 5;
    func(A, tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}