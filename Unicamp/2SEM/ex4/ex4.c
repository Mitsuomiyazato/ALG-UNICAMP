#include <stdio.h>

int main(){

    int maior, menor, vetor[10], contador;

    printf("Digite dez valores:\n");
    for(contador = 0; contador <10; contador++)
    {
        scanf("%d", &vetor[contador]);
    }

    for(contador = 0; contador <10; contador++)
    {
        if(contador == 0)
        {
            maior = menor = vetor[contador];
        }
        else
        {
            if(maior < vetor[contador])
            {
                maior = vetor[contador];
            }
            if(menor > vetor[contador])
            {
                menor = vetor[contador];
            }
        }
    }
    printf("O maior valor é %d\nO menor valor é %d", maior, menor);

    return 0;
}