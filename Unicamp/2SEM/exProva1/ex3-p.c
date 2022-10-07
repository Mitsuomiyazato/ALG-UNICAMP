#include <stdio.h>

int main()
{
    float n1, n2, n3, mediaEx, media;
    char conceito;
    
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a media ex: ");
    scanf("%f", &mediaEx);
    
    media = (n1 + n2*2 + n3*3 + mediaEx)/7;
    
    if(media >= 9)
    {
        conceito = 'A';
    }
    else if(media >= 7.5)
    {
        conceito = 'B';
    }
    else if(media >= 6)
    {
        conceito = 'C';
    }
    else if(media >= 4)
    {
        conceito = 'D';
    }
    else
    {
        conceito = 'E';
    }

    printf("A nota foi %.2f e seu conceito %c\n", media, conceito);

    return 0;
}