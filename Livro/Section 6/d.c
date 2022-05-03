#include <stdio.h>
#include<math.h>
int main(){
    printf("Ler 15 elementos de um vetor A. Construir um vetor B com o quadrado de cada elemento de A\n");

    long vA[15], vB[15];
    for (int i = 0; i < 15; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%li", &vA[i]);
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < 15; i++)
    {
        vB[i] = pow(vA[i],2);
        printf("B[%d]: %li\n", i, vB[i]);
    }   
}