#include <stdio.h>
#include <math.h>

float soma(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float div(float n1, float n2);
float pot(float n1, float n2);

int main(){
    float num1, num2, resultado;
    char operador;

    scanf("%f%c%f", &num1, &operador, &num2);

    switch (operador)
    {
    case '+':
        resultado = soma(num1,num2);
        break;
    case '-':
        resultado = sub(num1,num2);
        break;
    case '*':
        resultado = mult(num1,num2);
        break;
    case '/':
        resultado = div(num1,num2);
        break;
    case '^':
        resultado = pot(num1,num2);
        break;
    }
    printf("%.3f\n", resultado);
    return 0;
}

float soma(float n1,float n2)
{
    return n1 + n2;
}
float sub(float n1, float n2)
{
    return n1 - n2;
}
float mult(float n1, float n2)
{
    return n1 * n2;
}
float div(float n1, float n2)
{
    return n1/n2;
}
float pot(float n1, float n2)
{
    return pow(n1, n2);
}