#include <stdio.h>

int main(){

    int n, contador = 0, A, B, C, D, E, F, a,b,c,d,e,f;
    char dna1[13];
    char dna2[13];
    scanf("%d", &n);

    while(contador < n)
    {
        A=0;
        B=0;
        C=0;
        D=0;
        E=0;
        F=0;
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        scanf("%s", dna1);

        for(int i=0; i<12; i++)
        {
            if(dna1[i] == 'A'){A++;}
            else if(dna1[i] == 'B'){B++;}
            else if(dna1[i] == 'C'){C++;}
            else if(dna1[i] == 'D'){D++;}
            else if(dna1[i] == 'E'){E++;}
            else if(dna1[i] == 'F'){F++;}
        }
        
        scanf("%s", dna2);

        for(int i=0; i<12; i++)
        {
            if(dna2[i] == 'A'){a++;}
            else if(dna2[i] == 'B'){b++;}
            else if(dna2[i] == 'C'){c++;}
            else if(dna2[i] == 'D'){d++;}
            else if(dna2[i] == 'E'){e++;}
            else if(dna2[i] == 'F'){f++;}
        }

        if((A==a) && (B==b) && (B==b) && (C==c) && (D==d) && (E==e) && (F==f))
        {
            printf("Caracteristicas Iguais\n");
        }
        else
        {
            printf("Caracteristicas Diferentes\n");
        }
        contador++;
    }


    return 0;
}