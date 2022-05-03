#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:");
    scanf("%d",&num);
    
    if((num>=1) && (num<=9)){
        printf("O valor esta na faixa permitida");
    }else{
        printf("O valor esta fora da faixa permitida");
    }
    return 0;
}
