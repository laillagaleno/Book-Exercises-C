#include <stdio.h>

int main() {
int A, B, RES;
printf("Informe os dois números:");
scanf("%d %d", &A, &B);
if(A>B){
    RES=A-B;
}else{
    RES=B-A;
}
printf("Resultado: %d", RES);
    return 0;
}