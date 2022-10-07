#include <stdio.h>

int AvaliaMenor(int vetor[5])
{
    int men;
    for(int j = 0; j <5; j++)
    {
        if(j==0)
        {
            men = vetor[j];
        }
        else
        {
            if(men>vetor[j])
            {
                men = vetor[j];
            }
        }
    }
    
    return men;
}

int main()
{
    int vetor[5], menor;
    
    for(int i =0; i <5; i++){
    scanf("%d", &vetor[i]);
    }
    
    menor = AvaliaMenor(vetor);
    printf("O menor valor e: %d", menor);
	return 0;

}