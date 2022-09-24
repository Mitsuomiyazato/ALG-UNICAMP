#include <stdio.h>

int main(){

    int vet1[10], vet2[10], contador;

    for(contador = 0; contador <10; contador++)
    {
        scanf("%d", &vet1[contador]);
    }
    for(contador = 0; contador <10; contador++)
    {
        scanf("%d", &vet2[contador]);
    }

    for(contador = 0; contador <10; contador++)
    {
        printf("%d|%d|", vet1[contador], vet2[contador]);
    }
    printf("\n");

    return 0;
}