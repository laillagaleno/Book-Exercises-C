#include <stdio.h>
int main() {
float A,B, aux;
printf("TROCAR OS VALORES ENTRE SI \n\n");
printf("Informe o valor de A:");
scanf("%f", &A);
printf("Informe o valor de B:");
scanf("%f", &B);
aux=A;
A=B;
B=aux;printf("A: %.2f \nB: %.2f", A, B);
return 0;
}