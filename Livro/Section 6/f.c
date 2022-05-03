#include <stdio.h>
int main(){
    printf("Ler dois vetores A e B. Construir um vetor C com os eLementos de A e B\n");
    long vA[15], vB[15], vC[30];

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o valor de A[%d] e B[%d]: ",i, i);
        scanf("%li %li", &vA[i],&vB[i]);
    }

    for (int i  = 0; i < 15; i++)
    {
     vC[i]=vA[i];
     vC[i+15]=vB[i];
    }

    printf("Matriz C:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("C[%d]: %li\n", i, vC[i]);
    }
}