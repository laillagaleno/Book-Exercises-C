#include<stdio.h>
int main(){
    printf("Ler um vetor A com 20 elementos e B com 30. Construir um vetor C com a junção de A e B\n");

    long A[20], B[30], C[50];
    
    for (int i = 0; i < 20; i++)
    {
        printf("Digite o valor de A[%d]:",i);
        scanf("%li", &A[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        printf("Digite o valor de B[%d]:",i);
        scanf("%li", &B[i]);
    }

    for (int i = 0; i < 50; i++)
    {
      if (i<=20)
      {
    C[i]=A[i];      
    }else{
        C[i]=B[i-20];
    } 
    }
    
    printf("\nMatriz C:\n");
    for (int i = 0; i < 50; i++)
    {
        printf("C[%d]: %li\n", i, C[i]);
    }
}