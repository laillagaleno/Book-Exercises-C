#include <stdio.h>
int main() {
float V, P, Tx, Temp;
printf("CALCULAR O NOVO VALOR DE UMA PRESTAÇÃO \n\n");
printf("Informe o valor inicial:");
scanf("%f", &V);
printf("Informe a taxa:");
scanf("%f", &Tx);
printf("Informe o tempo:");
scanf("%f", &Temp);
P = V+(V*Tx/100)*Temp;
printf("Novo valor da prestação: %.2f", P);
return 0;
}