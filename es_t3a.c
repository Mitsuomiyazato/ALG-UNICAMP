#include <stdio.h>

int main(){
int num;

printf("Digite um número:\n");
scanf("%d", &num);

if(num % 2 == 0)
{
    printf("par\n");
}
else
{
    printf("impar\n");
}

return 0;
}
