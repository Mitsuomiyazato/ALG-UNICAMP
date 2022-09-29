#include <stdio.h>

float mediaT(float n1, float n2, float n3, float n4, char l)
{
    float media;
    if(l == 'B')
    {
        return media = (n1+n2+n3+n4)/4;
    }
    else
    {
        return media = (n1*5 + n2*3 + n3 *2 + n4)/(5+3+2+1);
    }

}

int main()
{

    float nota1, nota2, nota3, nota4, mediafinal;
    char letra;

    printf("Digite a primeira: ");
    scanf("%f", &nota1);
    printf("Digite a segunda: ");
    scanf("%f", &nota2);
    printf("Digite a terceira: ");
    scanf("%f", &nota3);
    printf("Digite a quarta: ");
    scanf("%f", &nota4);
    
    printf("Digite a letra (A - Media Ponderada / B - Media Aritmetica): ");
    getchar();
    letra = getchar();

    printf("Média Final: %.2f", mediaT(nota1, nota2, nota3, nota4, letra));
    
    return 0;
}