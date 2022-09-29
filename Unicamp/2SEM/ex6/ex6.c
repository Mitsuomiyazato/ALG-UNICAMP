#include <stdio.h>

int main(){

    int matriz[4][4], linha, coluna, valT = 0;

    for(linha = 0; linha <4; linha++)
    {
        for(coluna = 0; coluna <4; coluna++)
        {
            matriz[linha][coluna] = linha * coluna;
        }
    }

    for(linha = 0; linha <4; linha++)
    {
        for(coluna = 0; coluna <4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    
    return 0;
}