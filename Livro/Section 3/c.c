#include <stdio.h>
#include <math.h>
int main() {
       double A, R, V;
        printf("Informe a altura de uma lata de óleo:");
        scanf("%lf", &A);
        
        printf("Informe o raio de uma lata de óleo:");
        scanf("%lf", &R);
        
        V= 3.14159*pow(R,2)*A;
        printf("O volume da lata é %lf\n", V);
        return 0;
}