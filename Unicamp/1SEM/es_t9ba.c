#include <stdio.h>
#include <math.h>
#define n 10

void Cubo(int x[n], int y[n]){

    for(int j = 0; j<n; j++)
    {
        y[j] = pow(x[j],3);
    }    

}

int main(){

    int A[n], B[n], i;
    for(i = 0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    
    Cubo(A,B);

    for(i = 0; i<n; i++)
    {
        printf("%d\n", B[i]);
    }
    return 0;
}