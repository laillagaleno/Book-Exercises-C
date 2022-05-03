#include <stdio.h>
int main() {float A,C,L,V;
printf("CALCULO DO VOLUME DE UMA CAIXA RETANGULAR \n\n");
printf("Informe o comprimento:");
scanf("%f",&C);
printf("Informe a largura:");
scanf("%f",&L);
printf("Informe a altura:");
scanf("%f",&A);
V=C*L*A;
printf("O volume da caixa é: %.2f", V);
return 0;
}