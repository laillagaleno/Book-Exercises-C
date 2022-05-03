#include<stdio.h>
#include<math.h>
int main(){
    printf("Ler dois vetores A[10] e B[10]. Construir C, com cada elemento sendo o quadrado da soma de cada A e B\n");

    int A[10], B[10], C[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para A[%d] e B[%d]: ", i,i);
        scanf("%d %d",&A[i], &B[i]);

        C[i]=pow(A[i]+B[i],2);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("C[%d]: %d\n",i,C[i]);
    }
    
}