#include <stdio.h>

int main(){


    int n[6], contador;
    
    for(contador = 0; contador <6; contador++)
    {
        printf("Digite o %d° num: ", contador+1);
        scanf("%d", &n[contador]);
    }

    for(contador = 0; contador <6; contador++)
    {
        printf("%d° num: %d\n", contador+1, n[contador]);
    }

    return 0;
}