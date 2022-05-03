#include <stdio.h>
#include <string.h>
#define TAM 20 
 
int A[TAM], B[TAM];
 
void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
    if (v[i]>0)
    {
        i--;
    }
    
   }
}
 
void positivo(int v1[], int v2[], int tamanho){
for (int i = 0; i < tamanho; i++)
{
    v2[i]= v1[i]*(-1);
}
}

 void bubbleSort(int v[], int tamanho){
    int temp, i, j;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < tamanho -1; i++)
        {
            if (v[i]<v[i+1])
            {
                temp = v[i];
                v[i] =v[i+1];
                v[i+1]=temp;
            }
        }
    }
}
void list(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
    
}

int main(){
    printf("Digite %d valores negativos pra A: ", TAM);  
    read(A,TAM);
    positivo(A,B,TAM);

    bubbleSort(B,TAM);
    printf("Vetor B em ordem decrescente:");
    list(B,TAM);

    return 0;
}
