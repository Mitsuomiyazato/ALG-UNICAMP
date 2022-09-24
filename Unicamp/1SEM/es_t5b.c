#include <stdio.h>

int main(){

    int prod[10], contador, totalP=0; 
    float lucro[10], totalL=0;

    for(contador = 0; contador < 10; contador++)
    {
        scanf("%d", &prod[contador]);
        totalP += prod[contador];
    }
    
    for(contador = 0; contador <10; contador++)
    {
        scanf("%f", &lucro[contador]);
    }

    for(contador = 0; contador< 10; contador++)
    {
        totalL += prod[contador] * lucro[contador];
    }

    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", totalL, totalP);

    return 0;
}