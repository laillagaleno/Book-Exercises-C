#include <stdio.h>
int main() {
float T, V, D, L;
printf("Informe o tempo gato:");
scanf("%f", &T);
printf("Informe a velocidade média:");
scanf("%f", &V);
D = T*V;
L = D/12;
printf("Velocidade média: %.2f", V);
printf("\nTempo gasto: %.2f", T);
printf("\nDistância percorrida: %.2f", D);
printf("\nQuantidade de litros utilizado: %.2f", L);
return 0;
}