#include <stdio.h>
#include <string.h>
#define TAM 15 
 
int A[TAM], B[TAM];
 
void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}
 
void metade(int v1[], int v2[], int tamanho){
for (int i = 0; i < tamanho; i++)
{
    v2[i]= v1[i]/2;
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
 void bubbleSortDecrescente(int v[], int tamanho){
    int temp, i, j;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < tamanho -1; i++)
        {
            if (v[i]<v[i+1])
            {
                temp = v[i];
                v[i] =v[i+1];
                v[i+1]=temp;
            }
        }
    }
}
void list(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    } 
}

int main(){
    printf("Digite %d valores pra A: ", TAM);  
    read(A,TAM);
    metade(A,B,TAM);

    bubbleSortCrescente(A,TAM);
    printf("Vetor B em ordem crescente:");
    list(A,TAM);
    bubbleSortDecrescente(B,TAM);
    printf("\nVetor B em ordem decrescente:");
    list(B,TAM);

    return 0;
}
