#include <stdio.h>
#include <math.h>
 
int main()
{
 float  A,B,C, x, x1, x2, delta;
 printf("Digite os valores de A, B e C da equação completa: ");
 scanf("%f %f %f", &A, &B, &C);

 if((A==0)&&(B==0)&&(C==0)) {
 printf("Não é uma equação do segundo grau completa");
 } else{
    delta = pow(B,2)-4*A*C;
    if(delta==0){
         x = -B/ (2*A);
         printf("Possui uma raiz real x: %.2f", x);
    }else if(delta>0){
        x1 = (-B + sqrt(delta)) / (2*A);
        x2 = (-B - sqrt(delta)) / (2*A);
     printf("Possui duas raízes distintas reais. \nx1: %.2f \nx2: %.2f", x1, x2);
    } else{
        printf("Não possui raízes reais");
    }
 }
 return 0;
}