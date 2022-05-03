#include<stdio.h>

int main(){
    printf("Ler uma matriz A[20] e B[20]. Construir uma matriz C que é a subtração de cada elemento de A e B\n");

    long vA[20], vB[20], vC[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor de A[%d] e B[%d]",i, i);
        scanf("%li %li", &vA[i], &vB[i]);
    }
    printf("\nMatriz C: \n");
    for (int i = 0; i < 20; i++)
    {
       vC[i]= vA[i] - vB[i];
       printf("C[%d]: %li\n", i, vC[i]);
    }
}