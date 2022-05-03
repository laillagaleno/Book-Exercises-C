#include <stdio.h>
int main (){
    printf("Ler 8 elementos de uma matriz A, e construir uma matriz B com a multiplicação dos elementos de A por 3.\n");

    int vA[8], vB[8];
    for (int i = 0; i < 8; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &vA[i]);
    } 
    printf("\nMatriz B:\n");
    for (int i = 0; i < 8; i++)
    {
        vB[i]= vA[i]*3;
        printf("%d\n", vB[i]);
    }
    
}
