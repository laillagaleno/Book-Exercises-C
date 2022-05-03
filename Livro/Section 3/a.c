#include <stdio.h>
int main() {
float C, F;
printf("Informe uma temperatura em Celsius:");
scanf("%f", &C);
F=(9*C+160)/5;
printf("A conversão da temperatura %.2f°C para Fahrenheit é %.2f°F", C,F);
return 0;
}