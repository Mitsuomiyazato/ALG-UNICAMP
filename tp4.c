#include <stdio.h>
#include <string.h>

void inicializaVet(int *v)
{
   for(int j = 0; j < 62; j++)
   {
       v[j] = 0;
   }
}

void showVet(int *vet){
    for(int j = 0; j < 62; j++)
    {
       printf("%d ", vet[j]);
    }
}

void readText(char *txt)
{
    fgets(txt, 1001, stdin );
}

int avaliacaoFim(char *txt)
{
    char final[] = "FIM\n";

    return strcmp(txt, final);
    
}

int avalicaoCaracteres(char *txt, int *vet)
{
    int nCaractere = 0;
    int j;
    for(int i = 0; i < strlen(txt) - 1; i++)
    {
        if((txt[i] >= 48) && (txt[i] <= 57)){
            nCaractere += 1;
            for(j = 48; j <= 57; j++)
            {  
                if(txt[i] == j)
                {
                    vet[j+4]++;
                    break;
                }
            }
        }
        else if((txt[i] >= 65) && (txt[i] <=90))
        {
            nCaractere++;
            for(j = 65; j <= 90; j++)
            {  
                if(txt[i] == j)
                {
                    vet[j - 65]++;
                    break;
                }
            }
        }
        else if((txt[i] >=97) && (txt[i] <= 122))
        {
            nCaractere++;
            for(j = 97; j <= 122; j++)
            {  
                if(txt[i] == j)
                {
                    vet[j - 71]++;
                    break;
                }
            }
        }
    }
    return nCaractere;
}

void cleanTxt(char *txt)
{
    txt[0] = '\0';   
}

int main(){

    int vetor[62];
    char texto[1001];
    int qtdCaracteres= 0;
    float porcentagem;
    int j, contador;
    
    inicializaVet(vetor);
    
    printf("Digite ou cole o texto (NO FINAL, COLOQUE 'FIM' PARA AVALIAR O TEXTO)\n");
    readText(texto);

    while(avaliacaoFim(texto) != 0)
    {
        qtdCaracteres += avalicaoCaracteres(texto, vetor);
        
        cleanTxt(texto);

        readText(texto);
    }
    
    printf("Caracteres Maiusculos:\n");
    for(j = 0; j <= 25; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCaracteres;
        
        printf("%c: ", j+65);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }
    printf("\n");
    printf("Caracteres Minusculos:\n");
    for(j = 26; j <= 51; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCaracteres;
        
        printf("%c: ", j+71);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }
    printf("\n");
    printf("Digitos:\n");
    for(j = 52; j <= 61; j++)
    {
        porcentagem = ((float) vetor[j]) / qtdCaracteres;
        
        printf("%d: ", j-52);
        
        for(contador=0; contador <= vetor[j]; contador++)
        {
            if(contador == vetor[j])
            {
                printf(" (%d - %.2f)\n", vetor[j], porcentagem);
            }
            else
            {
                printf("*");
            }
        }
        porcentagem = 0;   
    }
    
    return 0;
}
