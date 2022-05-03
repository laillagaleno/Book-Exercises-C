#include <stdio.h>
//Cap 3, letra a
//function
float calCelsius(float * f){
    
    return ((*f-32)*5/9);
}
int main() {
float F;
printf("Informe uma temperatura em Fahrenheit:");
scanf("%f", &F);
printf("A conversão da temperatura %.2f°F para Celsius é %.2f°C",F,calCelsius(&F));
return 0;
}