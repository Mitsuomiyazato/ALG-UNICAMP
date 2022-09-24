#include <stdio.h>

int main(){

    int par = 0, impar = 0, n;
    
    for(int contador = 0; contador <10; contador++)
    {
        scanf("%d", &n);
        if(n%2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("%d pares, %d impares\n", par, impar);

    return 0;
}