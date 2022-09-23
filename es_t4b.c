#include <stdio.h>

int main(){

    int n, s, m, contador, resultado;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &n);

    printf("Digite o segundo valor valor:\n");
    scanf("%d", &s);

    m = n - s;

    for(contador = n; contador >= 0; contador--)
    {
        if(contador > 1)
        {
        n *= contador-1;
        }
        else
        {
            break;
        }
    }
    
    for(contador = s; contador >= 0; contador--)
    {
        if(contador > 1)
        {
        s *= contador-1;
        }
        else
        {
            break;
        }
    }
    for(contador = m; contador >= 0; contador--)
    {
        if(contador > 1)
        {
        m *= contador-1;
        }
    }
    if(m != 0 && s != 0){
    resultado = n/(s*m);
    printf("%d\n", resultado);
    }
    else
    {
        resultado = 1;
        printf("%d\n", resultado);
    }
    return 0;
}