#include <stdio.h>
#include <math.h>
int main() {
int A,B, R;
printf("CALCULAR O QUADRADO DA DIFERENÇA ENTRE DOIS NÚMEROS \n\n");
printf("Informe dois valores inteiros:");
scanf("%d %d",&A, &B);
R=pow(A-B,2);
printf("A diferença entre %d e %d elevado ao quadrado é %d", A,B,R);
return 0;
}