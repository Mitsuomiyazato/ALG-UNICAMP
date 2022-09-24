#include <stdio.h>
#include <stdlib.h>

int main(){

    
    int **matriz, **trpMatriz, l, c, i, j, simetria = 0;

    scanf("%d %d", &l, &c);

    matriz = (int **) malloc(l * sizeof(int *));
    for(i = 0; i <l; i++)
    {
        matriz[i] = (int *) malloc(c * sizeof(int));
    }
    
    trpMatriz = (int **) malloc(c * sizeof(int *));
    for(i = 0; i <l; i++)
    {
        trpMatriz[i] = (int *) malloc(l * sizeof(int));
    }

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    if(l == c)
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                trpMatriz[j][i] = matriz[i][j];
            }
        }   
    }
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if(trpMatriz[i][j] != matriz[i][j])
            {
                simetria++;
            }
        }
    }   

    if(simetria == 0)
    {
        printf("Eh simetrica\n");
    }
    else
    {
        printf("Nao eh simetrica\n");
    }
    
    return 0;
}