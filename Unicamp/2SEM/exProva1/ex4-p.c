#include <stdio.h>

int main()
{
    int matriz[3][3], linha, coluna, menor, menorL;
    
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna <3; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna <3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    for(linha = 0; linha < 3; linha++)
    {
        for(coluna = 0; coluna <3; coluna++)
        {
            if((linha == 0) && (coluna == 0))
            {
                menor = matriz[linha][coluna];
                menorL = linha;
            }
            else
            {
                if(menor > matriz[linha][coluna])
                {
                    menor = matriz[linha][coluna];
                    menorL = linha;
                }
            }
        }
    }
    
    printf("o menor numero e %d, da linha %d", menor, menorL+1);
    

    return 0;
}