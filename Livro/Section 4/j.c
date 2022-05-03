#include <stdio.h>

int main() {
int num, Res;
printf("Informe um número:");
scanf("%d",&num);

Res=num%2;
if(Res==0){
    printf("É um número par");
}else{
    printf("É um número ímpar");
}
return 0;
}