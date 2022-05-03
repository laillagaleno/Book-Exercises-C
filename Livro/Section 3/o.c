#include <stdio.h>
#include <math.h>
int main() {
int A,B,C,D,P,S;
printf("Informe o valor de quatro números inteiros:\n");
scanf("%d %d %d %d",&A,&B,&C,&D);
P=A*C;
printf("Multiplicação de %d e %d: %d", A,C,P);
S=B+D;
printf("\nSoma de %d e %d: %d", B,D,S);
return 0;
}