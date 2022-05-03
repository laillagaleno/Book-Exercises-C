#include <stdio.h>
#include <math.h>
int main() {
int A,B,C, S;
printf("QUADRADO DA SOMA DE TRÊS NÚMEROS\n\n");
printf("Informe o valor de três números inteiros:");
scanf("%d %d %d",&A,&B,&C);
S=pow(A+B+C,2);
printf("O resultado é: %d",S);
return 0;
}