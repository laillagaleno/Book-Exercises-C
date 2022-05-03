#include<stdio.h>
int main(){
    printf("Ler um vetor A[15]. Apresentar quantos elementos são pares\n");

    int A[15],  qnt=0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um valor para A[%d]: ",i);
        scanf("%d", &A[i]);

        if (A[i]%2==0)
        {
            qnt+=1;
        }
    }
    printf("%d valores são pares", qnt);
}