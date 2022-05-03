#include <stdio.h>
#include <math.h>
int main() {
int A,B,C, S;
printf("SOMA DOS QUADRADOS DOS TRÊS NÚMEROS\n\n");
printf("Informe o valor de três números inteiros:");
scanf("%d %d %d",&A,&B,&C);
S=pow(A,2)+pow(B,2)+pow(C,2);
printf("O resultado é: %d",S);
return 0;
}