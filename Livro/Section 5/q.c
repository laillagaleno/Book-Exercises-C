#include<stdio.h>
#include <string.h>

int main(){
    char R[3]="SIM", nome[100];
    float A,L,area,total=0;
    for (int i = 0;strcmp(R,"SIM")==0;i++)
    {
        printf("\nNome do comodo: ");
        scanf("%s",nome);
        printf("\nQual a largura do %s?", nome);
        scanf("%f",&L);
        printf("\nQual a altura do %s?", nome);
        scanf("%f",&A);
        area= L*A;
        printf("\nÁREA=%f", area);
        total+=area;

        printf("\n\nDeseja continuar? SIM/NÃO");
        scanf("%s",R);
    }
    printf("\n A area total da residencia é %f", total);

    
return 0;
}