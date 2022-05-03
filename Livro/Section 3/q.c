#include <stdio.h>
#include <math.h>
int main() {
printf("CALCULAR A ÁREA DE UMA CIRCUNFERÊNCIA\n\n");
float R,A;
printf("Informe o valor do raio:\n");
scanf("%f",&R);
A=3.14159 * pow(R,2);
printf("O valor da área é: %.2f",A);
return 0;
}