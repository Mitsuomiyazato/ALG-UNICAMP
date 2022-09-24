#include <stdio.h>
#include <math.h>

int main(){

    struct corpo{
        float altura, peso;
        char nome[81];
    } usuario;

    float IMC;

    scanf("%f", &usuario.altura);
    scanf("%f", &usuario.peso);
    scanf("%s", &usuario.nome);

    IMC = usuario.peso/pow(usuario.altura,2);

    printf("%.3f\n", IMC);
    return 0;
}