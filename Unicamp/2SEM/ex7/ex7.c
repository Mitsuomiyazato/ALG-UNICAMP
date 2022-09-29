#include <stdio.h>

int main()
{
    int matriz[3][3], linha, coluna, soma1, soma2;

    for(linha = 0; linha <3; linha++)
    {
        for(coluna = 0; coluna <3; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha = 0; linha <3; linha++)
    {
        for(coluna = 0; coluna <3; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    soma1 = matriz[0][1] + matriz[0][2] + matriz[1][2];
    soma2 = matriz[1][0] + matriz[2][0] + matriz[2][1];

    printf("A soma dos valores acima da diagonal principal é: %d\n", soma1);
    printf("A soma dos valores abaixo da diagonal principal é: %d", soma2);
    return 0;
}