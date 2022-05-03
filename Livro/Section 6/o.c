#include<stdio.h>
int main(){
    printf("Ler 25 temperaturas em °C em um vetor A. Construir um vetor B com as temperaturas de A convertidas para °F\n");

    float A[25], B[25];

    for (int i = 0; i < 25; i++)
    {
        printf("Digite uma temperatura em °C:");
        scanf("%f",&A[i]);
    }

    for (int i = 0; i < 25; i++)
    {
        B[i]=(9*A[i]+160)/5;
        printf("A[%d]: %2.f °C ==> B[%d]: %2.f °F\n", i,A[i], i, B[i]);
    }
}