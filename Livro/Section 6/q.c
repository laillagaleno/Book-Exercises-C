#include<stdio.h>
int main(){
    printf("Ler  um vetor A[15]. Construir um vetor B com os elementos de A, em que os valores com indice par deve ser dividido por 2, caso contrario multiplicado por 1.5 \n");

    float A[15], B[15];
    for (int i = 0; i < 15; i++)
    {
        printf("Digite um valor: ");
        scanf("%f",&A[i]);
    }
    printf("\nMatriz B\n");
    for (int i = 0; i < 15; i++)
    {
        if (i%2==0)
        {
            B[i]=A[i]/2;
        }else{
            B[i]=A[i]*1.5;
        }
     printf("B[%d]: %2.f\n",i,B[i]);   
    }  
}