#include <stdio.h>

int main(){

    float n1, n2, resultado;
    char operador;

    printf("Digite os valores e o operador(exemplo: n+n):\n");
    scanf("%f%c%f", &n1, &operador, &n2);

    if(operador == '+')
    {
        resultado = n1 + n2;
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
    }
    else if(operador == '-')
    {
        resultado = n1 - n2;
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
    }
    else if(operador == '*')
    {
        resultado = n1 * n2;
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
    }
    else if(operador == '/')
    {
        resultado = n1 / n2;
        printf("%.3f%c%.3f=%.3f\n", n1, operador, n2, resultado);
    }
    else{
        printf("Operador invalido\n");
    }
    return 0;
}