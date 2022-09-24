#include <stdio.h>

int main(){

    float notas[20], pesquisa;

    for(int i = 0; i < 20; i++)
    {
        scanf("%f", &notas[i]);
        while(notas[i] < 0 || notas[i] > 10)
        {
            scanf("%f", &notas[i]);
        }   
    }

    scanf("%f", &pesquisa);
    while(pesquisa >= 0)
    {
        for(int j = 0; j < 20; j++)
        {   
            if(pesquisa == notas[j])
            {
                printf("existe\n");
                break;
            }
            else if(j == 19)
            {
                printf("nao existe\n");
            }
        }
        scanf("%f", &pesquisa);
    }

    return 0;
}