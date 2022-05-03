#include<stdio.h>

int main(){
    printf("Ler um vetor de A com 20 elementos. Construir um vetor B com os elementos de A em ordem investida\n");

     long A[20], B[20];
    
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor de A[%d]:",i);
        scanf("%li", &A[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        B[i]= A[19-i];
    }
    
    printf("\nMatriz A: \n");
    for (int i = 0; i < 20; i++)
    {
         printf("A[%d]: %li\n", i, A[i]);
    }
    
    printf("\nMatriz B: \n");
    for (int i = 0; i < 20; i++)
    {
         printf("B[%d]: %li\n", i, B[i]);
    }
}