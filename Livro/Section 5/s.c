#include <stdio.h>
int main(){
int D,d;
float q;

printf("Divisor: ");
scanf("%d",&D);
printf("Dividendo:");
scanf("%d",&d);

for (q= 0; d>=D; q++)
{
    d-=D;
}
printf("Quociente: %f, ",q);
    return 0;
}