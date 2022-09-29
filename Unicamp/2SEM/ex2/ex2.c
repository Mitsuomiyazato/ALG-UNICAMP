#include <stdio.h>

int main(){

    int A[6] = {1, 0, 5, -2, -5, 7}, soma;

    soma = A[0] + A[1] + A[5];

    printf("Soma dos valores específicos: %d\n", soma);

    for(int contador = 0; contador < 6; contador++)
    {
        printf("%d° valor: %d\n", contador+1, A[contador]);
    }

    return 0;
}