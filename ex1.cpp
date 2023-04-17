#include <stdio.h>
#include <stdlib.h>

void componente1(){
    printf("\n Executou o componente 1");
}

void componente2(int var1){
    int i;
    for(i=0;i<var1;i++){
        componente1();

    }
}

int componente3(int var2){
    int resultado = var2*2;
    return resultado;
}

int main(){
    int resultado = componente3(4);
    printf("%d\n", resultado);
    componente2(2);
    system("pause");
    return 0;
}