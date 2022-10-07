#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[20], nome2[20], nome3[20];
    char n1, n2, n3;
    
    printf("Digite o primeiro nome:");
    fgets(nome1, 20, stdin);
    printf("Digite o segundo nome:");
    fgets(nome2, 20, stdin);
    printf("Digite o terceiro nome:");
    fgets(nome3, 20, stdin);
    
    n1 = nome1[0];
    n2 = nome2[0];
    n3 = nome3[0];
    
    if((n1 < n2) && (n2 < n3))
    {
        printf("%s", nome1);
        printf("%s", nome2);
        printf("%s", nome3);
    }
    if((n1 < n3) && (n3 < n2))
    {
        printf("%s", nome1);
        printf("%s", nome3);
        printf("%s", nome2);
    }
    if((n2 < n1) && (n1 < n3))
    {
        printf("%s", nome2);
        printf("%s", nome1);
        printf("%s", nome3);
    }
    if((n2 < n3) && (n3 < n1))
    {
        printf("%s", nome2);
        printf("%s", nome3);
        printf("%s", nome1);
    }
    if((n3 < n2) && (n2 < n1))
    {
        printf("%s", nome3);
        printf("%s", nome2);
        printf("%s", nome1);
    }
    if((n3 < n1) && (n1 < n2))
    {
        printf("%s", nome3);
        printf("%s", nome1);
        printf("%s", nome2);
    }
  
    return 0;
}