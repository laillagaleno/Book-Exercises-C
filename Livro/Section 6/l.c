#include<stdio.h>
int main(){
    printf("Ler um vetor A. Construir um vetor B com a metade de cada valor de A \n");

    float A[10], B[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor de A[%d]:",i);
        scanf("%f", &A[i]);
    }

    printf("\nMatriz B");
    for (int i = 0; i < 10; i++)
    {
        B[i]=(A[i]/2);
        printf("B[%d]: %.2f\n", i, B[i]);
    }
}