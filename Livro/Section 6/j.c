#include<stdio.h>
int main(){
    printf("Ler um vetor A. Construit um vetor B com cada elemento sendo a somatoria do elemeto correspondente a A \n");
    long A[20], B[20];
    long soma;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor de A[%d]:",i);
        scanf("%li", &A[i]);
    }

printf("\nMatriz B: \n");
    for (int i = 0; i < 20; i++)
    {
        soma=0;
        for (int j = A[i]; j > 0 ; j--)
        {
            soma+=j;
        }
        B[i] = soma;
        printf("B[%d] = %li \n", i,soma);
    }
    
}