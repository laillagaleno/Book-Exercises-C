#include <stdio.h>
int main(){

    int num, maior, menor;
    printf("Informe um número: ");
    scanf("%d",&num);
    
    maior=num;
    menor=num;

    for (int i = 1; num>=0; i++)
    {
        printf("Informe um número: ");
        scanf("%d",&num);
    
        if (maior<num){
            maior=num;
        }

        if((menor>num)&&(num>=0)){
            menor=num;
        }

    }
    printf("Maior: %d\nMenor: %d", maior,menor);
    return 0;
}