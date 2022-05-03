#include <stdio.h>
#include <math.h>
int main() {
printf("CALCULAR O NOVO SALÁRIO\n\n");
float SM, PR,NS;
printf("Informe o valor do salário mensal:\n");
scanf("%f",&SM);
printf("Informe o valor do porcentual de reajuste:\n");
scanf("%f",&PR);
NS=SM*(100+PR)/100;
printf("O valor do novo salário será R$ %.2f",NS);
return 0;
}