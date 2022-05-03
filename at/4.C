#include <stdio.h>
//Cap 4, letra j

int verificarNum(int *n){
      return *n%2;
}
int main() {
    int num, Res;
    printf("Informe um número:");
    scanf("%d",&num);

    Res = verificarNum(&num);
 
    if(Res==0){
        printf("É um número par");
    }else{
        printf("É um número ímpar");
    }
return 0;
}