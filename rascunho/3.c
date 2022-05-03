#include <stdio.h>
#define TAM 10

int vetor[TAM];

void ler(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
    }   
}

void bubbleSort(int v[], int tamanho){
    int temp;

    for (int i = 0; i < tamanho -1; i++)
    {
        for (int j = 0; i < tamanho -1; i++)
        {
            if (v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        } 
    }
}

int main(){

    printf("Digite %d valores: ",TAM);
    ler(vetor,TAM);
    bubbleSort(vetor, TAM);
    
    printf("VALORES ORDENADOS: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d, ", vetor[i]);
    }
    
    return 0;
}