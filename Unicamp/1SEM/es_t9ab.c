#include <stdio.h>
#include <math.h>

float media(float n1, float n2, char l);

int main(){
    float nota1, nota2, Media;
    char letra;

    scanf("%c", &letra);
    scanf("%f %f", &nota1, &nota2);

    Media = media(nota1, nota2, letra);

    printf("%.3f\n", Media);

    return 0;
}

float media(float n1, float n2, char l)
{
    if(l == 'A')
    {
        return (n1+n2)/2;
    }
    else if(l == 'B')
    {
        return sqrt(n1 * n2);
    }
    return 0;
}

