#include <stdio.h>
#include <math.h>
int main() {
int N, R;
printf("CALCULAR O VALOR DE UM NÚMERO AO QUADRADO \n\n");
printf("Informe o valor de um número:");
scanf("%d",&N);
R=pow(N,2);
printf("O número %d elevado ao quadrado é %d",N, R);
return 0;
}