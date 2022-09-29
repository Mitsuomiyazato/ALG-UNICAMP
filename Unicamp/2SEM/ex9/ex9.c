#include <stdio.h>
#include <stdlib.h>



int instanciandoMatriz(int m[5][5]){
    int l;
    int c;

    for(l = 0; l < 5; l++)
    {
        for(c = 0; c <5; c++)
        {
            m[l][c] = -1;
        }
    }
}

int avaliarV(int valores[5][5], int valorAv, int x, int y)
{
    int lin, col;
    for(lin = 0; lin < 5; lin++)
    {
        for(col = 0; col <5; col++)
        {
            if((lin != x) && (col != y))
            {
                if(valorAv == valores[lin][col])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int RAM(int m[5][5])
{
    int l, c, avalia;

    for(l = 0; l < 5; l++)
    {
        for(c = 0; c <5; c++)
        {
            m[l][c] = rand() % 99;
            avalia = avaliarV(m, m[l][c], l, c);
            while(avalia == 1)
            {
                m[l][c] = rand() % 99;
                avalia = avaliarV(m, m[l][c], l, c);
            }
        }
    }
}

int main()
{

    int matriz[5][5], linha, coluna;

    
    instanciandoMatriz(matriz);

    RAM(matriz);

    for(linha = 0; linha < 5; linha++)
    {
        for(coluna = 0; coluna <5; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }



    return 0;
}