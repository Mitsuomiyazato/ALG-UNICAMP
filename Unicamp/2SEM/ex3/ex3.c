#include <stdio.h>


int main(){

    float vetor[10], quadrado[10];
    int contador;

    printf("Digite dez valores:\n");
    
    for(contador = 0; contador <10; contador++)
    {
        scanf("%f", &vetor[contador]);
    }

    for(contador = 0; contador <10; contador++)
    {
        quadrado[contador] =  vetor[contador] * vetor[contador];
    }

    for(contador = 0; contador <10; contador++)
    {
        printf("%d valor: %f\n", contador+1, quadrado[contador]);
    }

    return 0;
}