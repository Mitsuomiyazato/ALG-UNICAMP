#include <stdio.h>

void Soma(int* realA, int* imgA, int realB, int imgB);
void Mult(int* realA, int* imgA, int realB, int imgB);
int main(){

    int realZ, imgZ, realW, imgW;
    char operador;

    scanf("%d %d %c %d %d", &realZ, &imgZ, &operador, &realW, &imgW);

    int *ptrZ, *ptrz;
    ptrZ = &realZ;
    ptrz = &imgZ;

    if(operador == '+')
    {
        Soma(ptrZ, ptrz, realW, imgW);
    }
    else
    {
        Mult(ptrZ, ptrz, realW, imgW);
    }

    printf("%d + %di\n", realZ, imgZ);
    return 0;
}

void Soma(int* realA, int* imgA, int realB, int imgB){
    *realA = *realA + realB;
    *imgA = *imgA + imgB;
}

void Mult(int* realA, int* imgA, int realB, int imgB){
    int mult1, mult2;
    mult1 = ((*realA * realB) - (*imgA * imgB));
    mult2 = ((*realA * imgB) + (*imgA * realB));
    *realA = mult1;
    *imgA = mult2;
}
