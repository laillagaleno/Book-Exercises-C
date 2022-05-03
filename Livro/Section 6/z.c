#include<stdio.h>
int main(){
    printf("Ler um vetor A[10]. Apresentar a quantidade de valores impares e o porcentual\n");
    int A[10],  qnt=0;
    float p;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para A[%d]: ",i);
        scanf("%d", &A[i]);
       
        if (A[i]%2!=0)
        {
            qnt+=1;
        }
    }
    p=(qnt*0.1)*100;
    printf("%d são ímpares (%1.f %%)",qnt,p);
}