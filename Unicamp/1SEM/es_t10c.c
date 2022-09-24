#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
    char nome[102];
    int RA;
    float n1;
    float n2;
    float media;
};
void LimpaEspaco(char *v){
    for(int i =0; i <= strlen(v) - 1; i++)
    {
        if(i == strlen(v) -1)
        {
            v[i] = '\0';
        }
    }
}


int main(){
    
    int n, i;
    scanf("%d", &n);
    getchar();
    struct pessoa * aluno = (struct pessoa*) malloc (n * sizeof(struct pessoa));

    for(i = 0; i < n; i++)
    {
        
        fgets(aluno[i].nome, 102, stdin);
        scanf("%d", &aluno[i].RA);
        getchar();
        scanf("%f", &aluno[i].n1);
        getchar();
        scanf("%f", &aluno[i].n2);
        getchar();
        aluno[i].media = (aluno[i].n1 + aluno[i].n2)/2; 
    }

    for(i = 0; i < n; i++)
    {
        LimpaEspaco(aluno[i].nome);
    }

    
    for(i = 0; i<n; i++)
    {
        printf("%d\t%s\t%.2f\n", aluno[i].RA, aluno[i].nome, aluno[i].media);
    }


    return 0;
}