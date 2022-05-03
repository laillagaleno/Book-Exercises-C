#include<stdio.h>
#define TAM 12

int vetor[TAM];

void  read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
    }
}

void bubbleSort(int v[], int tamanho){
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
    printf("Digite %d valores:", TAM);
    read(vetor, TAM);
    bubbleSort(vetor, TAM);
    printf("\nVetor ordenado: ");
    list(vetor, TAM);
    return 0;
}