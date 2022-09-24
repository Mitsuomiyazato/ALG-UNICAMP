#include <stdio.h>
#include <string.h>

int main(){

    char palavra[81], inversa[81];
    int contador = 0, igualdade = 0;

    fgets(palavra, 81, stdin);

    if(palavra[0] <= 90)
    {
        palavra[0] += 32;
    }

    for(int i = strlen(palavra)-2; i >= 0; i--)
    {
        inversa[contador] = palavra[i];
        contador++; 
    }

    for(int k = 0; k < strlen(palavra)-1; k++)
    {
        if(inversa[k] == palavra[k])
        {
            igualdade++;
        }
    }
    
    if(igualdade == strlen(palavra)-1)
    {
        printf("Esta palavra e um palindromo\n");
    }
    else
    {
        printf("Esta palavra nao e um palindromo\n");
    }
    
    return 0;
}