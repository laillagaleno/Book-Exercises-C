#include <stdio.h>
#include <math.h>
int main() {
float D,C,R;
printf("CONVERTER DÓLAR EM REAIS \n\n");
printf("Informe sua quantia em US$:");
scanf("%f",&D);
printf("Informe a cotação do dólar:");scanf("%f",&C);
R=D*C;
printf("Você tem R$ %.2f",R);
return 0;
}