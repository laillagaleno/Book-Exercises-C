#include <stdio.h>
int main(){
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j <10; j++)
        {
           if (A[i]>A[j])
           {
               A[i]=A[i]+A[j];
               A[j]=A[i]-A[j];
               A[i]=A[i]-A[j];
           }
        }
         printf("%d,", A[i]);
    }
}