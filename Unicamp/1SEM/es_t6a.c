//Mitsuo Miyazato - 260852
#include <stdio.h>

int main(){

    int numl, numc;

    scanf("%d %d", &numl, &numc);

    int matriz[numl] [numc];
    for(int i=0; i<numl; i++){                                                    
        for(int j=0;j<numc;j++)
        {
            scanf("%d", &matriz[i] [j]);
        }
    }

    for(int k=0; k<numc; k++)
    {
        for(int h=0;h<numl;h++)
        {
            printf("%d ", matriz[h] [k]);
        }
        printf("\n");
    }
    return 0;
}