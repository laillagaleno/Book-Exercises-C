#include<stdio.h>

int main(){
    printf("Ler um vetor A[6]. Construir B em que nos indice impar deve ter os valores de indice par do vetor A. E onde for par, os valores de indice impar de A\n");

    float A[6], B[6];

    for (int i = 0; i < 6; i++){
        printf("Digite um valor para A[%d]: ",i);
        scanf("%f",&A[i]);
 
        if (i%2==0){
            B[i+1]=A[i];
        }else{
            B[i-1]=A[i];
        }
    }
    
    printf("\nMatriz A e B\n");
    for (int i = 0; i < 6; i++){
          printf("A[%d]: %2.f-- B[%d]: %2.f\n",i,A[i],i,B[i]);
    }
}