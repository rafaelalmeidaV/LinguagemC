#include <stdio.h>

void misterio(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int a = 10, b = 20;
    misterio(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}