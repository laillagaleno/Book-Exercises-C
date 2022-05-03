#include <stdio.h>
#include <math.h>
int main() {
float D,C,R;
printf("CONVERTER REAIS PARA DÓLAR\n\n");
printf("Informe sua quantia em R$:");
scanf("%f",&R);
printf("Informe a cotação do real:");
scanf("%f",&C);
D=R*C;
printf("Você tem US$ %.2f",D);
return 0;
}