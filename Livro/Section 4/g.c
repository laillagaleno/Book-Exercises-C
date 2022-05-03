#include <stdio.h>
#include <string.h> 
 
int main() {
    int a,b,c,d;
    printf("Informe quatro números inteiros: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if((a%2)==0 && (a%3)==0){
        printf("%d é divisível por 2 e por 3", a);      
    }
    if((b%2)==0 && (b%3)==0){
        printf("%d é divisível por 2 e por 3", b);
    }
    if((c%2)==0 && (c%3)==0){
        printf("%d é divisível por 2 e por 3", c);
    }
    if((d%2)==0 && (d%3)==0){
        printf("%d é divisível por 2 e por 3", d);
    }
    return 0;
}