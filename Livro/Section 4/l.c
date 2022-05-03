#include <stdio.h>

int main() {
    int num;
    printf("Informe um número:");
    scanf("%d",&num);
    
    if(!(num>3)){
        printf("O numero informado foi %d", num);
    }
 
    return 0;
}