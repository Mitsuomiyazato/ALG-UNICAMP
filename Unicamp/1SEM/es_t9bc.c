#include <stdio.h>

int N;

void Extremos(int *v){
    
    int aux;
    for (int j = N-1; j >= 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;    
            }
        }
    }
}

int main(){
    scanf("%d", &N);
    int vetor[N], i;

    for(i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }


    Extremos(vetor);

    printf("maior valor: %d\n", vetor[N-1]);
    printf("menor valor: %d\n", vetor[0]);
    return 0;
}