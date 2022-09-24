#include <stdio.h>
#include <math.h>

int main(){

    struct Ponto
    {
        float x, y;

    } q1inf, q1sup, q2inf, q2sup;

    scanf("%f %f", &q1inf.x, &q1inf.y);
    scanf("%f %f", &q1sup.x, &q1sup.y);
    scanf("%f %f", &q2inf.x, &q2inf.y);
    scanf("%f %f", &q2sup.x, &q2sup.y);

    if((q2sup.x <= q1sup.x) && (q2sup.y <= q1sup.y) && (q2inf.x >= q1inf.x) && (q2inf.y >= q1inf.y))
    {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else
    {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    

    return 0;

}