#include <stdio.h>
#include <string.h>
#include<math.h>
#define TAM 15
 
int A[TAM], B[TAM],C[TAM], D[TAM];

void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}
void constuir(int v[], int v1[], int v2[],int v3[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v[i]= pow(v1[i],3)+pow(v2[i],3)+pow(v3[i],3);
    }
}

void list(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    } 
}

void bubbleSortCrescente (int v[], int tamanho){
    int temp;
    for (int i = 0; i < tamanho -1; i++)
    {
        for (int j = 0; j < tamanho -1; j++)
        {
            if (v[j]>v[j+1])
            {
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

int main(){
    printf("Digite %d valores pra A: ", TAM);  
    read(A,TAM);
    printf("\nDigite %d valores pra B: ", TAM);  
    read(B,TAM);
    printf("\nDigite %d valores pra C: ", TAM);  
    read(C,TAM);

    constuir(D,A,B,C,TAM);
    bubbleSortCrescente(D,TAM);
    printf("\n Vetor D(ordem crescente):\n ");
    list(D,TAM);
}