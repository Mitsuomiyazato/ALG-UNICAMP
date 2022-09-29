#include <stdio.h>

int main(){

    int matriz[4][4], linha, coluna, valT = 0;

    printf("Digite os valores de uma matriz 4x4:\n");
    for(linha = 0; linha <4; linha++)
    {
        for(coluna = 0; coluna <4; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for(linha = 0; linha <4; linha++)
    {
        for(coluna = 0; coluna <4; coluna++)
        {
            if(matriz[linha][coluna] > 10)
            {
                valT++;
                printf("O número %d da linha %d e coluna %d é maior que 10\n", matriz[linha][coluna], linha, coluna);
            }
        }
    }

    printf("Quantidade de valores maiores que 10: %d", valT);


    return 0;
}