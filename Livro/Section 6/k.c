#include <stdio.h>

int main(){
    printf("Ler um vetor de 10 elementos. Construir um vetor B com os elementos de A negativos\n");
     long A[10], B[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor de A[%d]:",i);
        scanf("%li", &A[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        B[i]=A[i]*(-1);
        printf("B[%d]: %li\n", i, B[i]);
    }
}