#include <stdio.h>

int MODULO(int val){

    if(val < 0)
    {
        val *= -1;
    }
    return val;
}

int main()
{

    int valor;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    valor = MODULO(valor);

    printf("%d\n", valor);
    return 0;
}