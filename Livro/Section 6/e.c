#include <stdio.h>

int main(){
    printf("Ler uma matriz A. Construir um vetor B com o fatorial de todos os elementos de A\n");

    long vA[15], vB[15], fatorial;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%li", &vA[i]);
    }

    printf("Matriz B:\n");

    for (int i = 0; i < 15; i++)
    {
        fatorial =1;
        for (int j = vA[i]; j >1; j--)
        {
            fatorial *= j;
        }
        vB[i]=fatorial;
        printf("B[%d]: %li\n",i, vB[i]);
    } 
}