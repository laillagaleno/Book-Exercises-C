#include <stdio.h>
int main() {
float C, F;
printf("Informe uma temperatura em Fahrenheit:");
scanf("%f", &F);
C=(F-32)* 5/9;
printf("A conversão da temperatura %.2f°F para Celsius é %.2f°C", F,C);
return 0;
}