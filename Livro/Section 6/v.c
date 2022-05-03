#include<stdio.h>
int main(){
    printf("Ler 30 valores em A. Contar quantos numeros são positivos e quantos são negativos\n");

    int A[30],qnt1=0, qnt2=0;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite o %d° valor: ",i);
        scanf("%d",&A[i]);
        if (A[i]%2==0) {
            qnt1+=1;
        } else{
            qnt2+=1;
        }     
    }
    printf("%d valores são pares e %d são ímpares", qnt1,qnt2);
}