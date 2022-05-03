#include<stdio.h>
int main(){
    printf("Ler A[6] e B[6], onde A só aceita valores pares e B valores ímpares. Construir C[12] com os elementos de A e B\n");

int A[6],B[6],C[12];
float res;

 printf("\nDigite um valor par para A\n");
    for (int i = 0; i < 6; i++)
    {
      printf("A[%d]", i);
      scanf("%d", &A[i]);
        res = A[i]%2;
        while (res!=0)
        {
            printf("\n!ERRO!Valor ímpar\n");
            i--;
            res=0;
        }
    }

 printf("\nDigite um valor ímpar para B\n");
    for (int i = 0; i < 6; i++)
    {
      printf("B[%d]", i);
      scanf("%d", &B[i]);
        res = B[i]%2;
        while (res==0)
        {
            printf("\n!ERRO!Valor par\n");
            i--;
            res=1;
        }
    }

    printf("\nMatriz C\n");
    for (int i = 0; i < 6; i++)
    {
        C[i]=A[i];
        C[i+6]=B[i];
    }

    for (int i = 0; i < 12; i++)
    {
        printf("C[%d]: %d\n",i,C[i]);
    }
    
}