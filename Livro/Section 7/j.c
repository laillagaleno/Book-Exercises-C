#include <stdio.h>
#include <string.h>
#define TAM 15
#define TAM1 2*TAM
 
int A[TAM], B[TAM],C[TAM], D[TAM], E[TAM1];

void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}

void somatorio(int v1[], int v2[], int tamanho){
for (int i = 0; i < tamanho; i++)
    {
        int soma = 0;
        for (int j= v1[i]; j>0; j--)
        {
            soma= soma +j;
        }
        v2[i]=soma;
    }
}

void fatorial(int v1[], int v2[], int tamanho){
 for (int i = 0; i < tamanho; i++)
    {
      int fatorial =1;
        for (int j= v1[i]; j>1; j--)
        {
            fatorial *=j;
        }
        v2[i]=fatorial;
    }
}
void constuir(int v[], int v1[], int v2[], int v3[], int v4[],int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v[i]=v1[i]-v2[i];
        v[i+tamanho]=v3[i]+v4[i];
    }
}

void list(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    } 
}

void bubbleSortCrescente(int v[], int tamanho){
    int temp, i, j;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < tamanho -1; i++)
        {
            if (v[i]>v[i+1])
            {
                temp = v[i];
                v[i] =v[i+1];
                v[i+1]=temp;
            }
        }
    }
}

int main(){
    printf("Digite %d valores pra A: ", TAM);  
    read(A,TAM);
    printf("\nDigite %d valores pra B: ", TAM);  
    read(B,TAM);

    somatorio(A,C,TAM);
    fatorial(B,D,TAM);


    printf("\n Vetor A: ");
    list(A,TAM);
    printf("\n Vetor B ");
    list(B,TAM);
    printf("\n Vetor C ");
    list(C,TAM);
    printf("\n Vetor D ");
    list(D,TAM);
    
    constuir(E,A,B,C,D,TAM);
    printf("\n Vetor E: ");
    list(E,TAM1);
    bubbleSortCrescente(E,TAM1);
    printf("\n Vetor E(ordem crescente):\n ");
    list(E,TAM1);
 
    return 0;
}