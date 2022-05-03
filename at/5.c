#include <stdio.h>
#include <math.h>
 //cap 4, letra e


 float calculateDelta(float *A, float *B, float *C){
   return pow(*B,2)-4* *A * *C;
 }

 float calculalateRaiz(float *A, float *B){
    return (-*B) / (2* *A);
 }

float calculateX1(float *A, float *B, float *d){
   return (-*B + sqrt(*d)) / (2* *A);
 } 
 float calculateX2(float *A, float *B, float *d){
    return (-*B - sqrt(*d)) / (2* *A);
 } 

int main()
{
 float  A,B,C;
 printf("Digite os valores de A, B e C da equação completa: ");
 scanf("%f %f %f", &A, &B, &C);


 if((A==0)&&(B==0)&&(C==0)) {
    printf("Não é uma equação do segundo grau completa");
    } else{
       float delta = calculateDelta(&A,&B,&C);
        if(delta==0){
            printf("Possui uma raiz real x: %.2f", calculalateRaiz(&A,&B));
        }else if(delta>0){
            float x1,x2;
            printf("Possui duas raízes distintas reais, x1: %.2f x2: %.2f", calculateX1(&A,&B,&delta), calculateX2(&A,&B,&delta));
        
        } else{
            printf("Não possui raízes reais");
        }
    }


 return 0;
}