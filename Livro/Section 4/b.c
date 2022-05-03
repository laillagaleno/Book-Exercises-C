#include <stdio.h>

int main() {
int A;
printf("Informe um número:");
scanf("%d", &A);
if(A <= 0){
    printf("Resultado: %d", A * -1);
}else{
    printf("Resultado: %d",A);
}
    return 0;
}