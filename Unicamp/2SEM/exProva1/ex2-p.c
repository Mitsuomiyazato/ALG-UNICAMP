#include <stdio.h>

int main()
{
    int vetor[10], maior;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    
    for(int j = 10-1; j >=1; j--)
    {
		for(int i=0; i < j; i++)
		{
			if(vetor[i]>vetor[i+1])
			{
				maior = vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=maior;
            }
        }
    }
    
    printf("Contagem Crescente: ");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    
    printf("\nContagem Decrescente: ");
    for(int i = 9; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}