#include <stdio.h>

float MaiorSalario(int sal1, int sal2)
{
    if(sal1 > sal2)
    {
        return sal1;
    }
    else
    {
        return sal2;
    }
}

int main(){

    float S1, S2;

    printf("Digite o primeiro salário: ")
    scanf("%f", &S1);
    printf("Digite o segundo salário: ")
    scanf("%f", &S2);

    printf("O maior valor é: R$ %.2f", MaiorSalario(S1, S2));

    return 0;
}