#include <stdio.h>

int main(){
    printf("Ler três vetores A,B e C de 5 elementos. Construir um vetor D com a junção dos vetores A,B e C \n");
    long A[5], B[5], C[5],D[15];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor de A[%d], B[%d] e C[%d]:",i,i,i);
        scanf("%li %li %li", &A[i],&B[i], &C[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (i<5)
        {
           D[i]=A[i];
        }else if(i>=5 && i<10){
            D[i]=B[i-5];
        }else{
            D[i]=C[i-10];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        printf("D[%d]: %li\n", i, D[i]);
    }
}