#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float *v, x, result =0;
    int gPoli, qtdVet, i;
    scanf("%d", &gPoli);

    qtdVet = gPoli + 1;

    v = (float *) malloc(qtdVet * sizeof(float));

    for(i = 0; i < qtdVet; i++)
    {
        scanf("%f", &v[i]);
    }

    scanf("%f", &x);
    for(i = 0; i< qtdVet; i++)
    {
        v[i] = v[i] * pow(x, i);
        result += v[i];
    }

    printf("%.2f\n", result);
    free(v);
    return 0;
}