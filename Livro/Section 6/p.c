#include<stdio.h>
int main(){
    printf("Ler 12 elementos de um vetor A. Construir um vetor B com os elementos de A, em que todo valor ímpar deve ser multiplicado pro 2\n");

    int A[12], B[12];
    for (int i = 0; i < 12; i++)
    {
        printf("Digite um valor inteiro:");
        scanf("%d",&A[i]);
    }

    printf("\nMatriz B\n");
    for (int i = 0; i < 12; i++)
    {
        if (!(A[i]%2==0))
        {
            B[i]=A[i]*2;
        }else{
            B[i]=A[i];
        }
        printf("B[%d]: %d\n", i, B[i]);
    } 
}