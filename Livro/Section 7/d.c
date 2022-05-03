#include <stdio.h>
#define TAM 12

int A[TAM], B[TAM], C[TAM];

void read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
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

void soma(int v1[], int v2[], int v3[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v3[i]=v1[i]+v2[i];
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
    bubbleSortCrescente(A,TAM);

    printf("Digite %d valores pra B: ", TAM);  
    read(B,TAM);
    bubbleSortCrescente(B,TAM);

    soma(A,B,C,TAM);
    bubbleSortDecrescente(C,TAM);
    printf("\nLISTA ORDENADA DE C:");
    list(C,TAM);
}