#include <stdio.h>
int main(){
    printf("Ler dois vetores A[6] e B[6]. Construir um vetor C com os valores de íncide impar de A e B. Construir um vetor D com os valores de íncide par de A e B. \n");
    int A[6],B[6], C[6],D[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite dois valores inteiros: ");
        scanf("%d %d", &A[i],&B[i]);
    }

    for (int i = 0; i < 6; i++) 
    {
        if(!(i%2==0)){
            C[i-1]=A[i];
            C[i]=B[i];
        }
    }

    for (int i = 0; i < 6; i++) 
    {
        if(i%2==0){
            D[i]=A[i];
            D[i+1]=B[i];
        }
    }

for (int i = 0; i < 6; i++)
    {
        printf("C[%d]: %d -  D[%d]: %d\n",i,C[i],i,D[i]);
    }
}