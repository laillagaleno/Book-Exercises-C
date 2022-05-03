#include <stdio.h>
#define TAM 15

int A[TAM], B[TAM];

void  read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
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

void list(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
    
}
void bubbleSort(int v[], int tamanho){
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
    fatorial(A,B,TAM);
    printf("\n Listagem do vetor B: ");
    list(B,TAM);
    bubbleSort(B,TAM);
    printf("\n Listagem do vetor B ordenado: ");
    list(B,TAM);
}