#include <stdio.h>
#include <math.h>

float volume_esfera(float r){
    float v;
    v = (4 * 3.14159)/3 * pow(r,3);

    return v;
}

int main(){
    float raio, volume;
    scanf("%f", &raio);
    volume = volume_esfera(raio);
    printf("%.2f\n", volume);
    return 0;
}