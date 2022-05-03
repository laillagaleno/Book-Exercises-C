#include <stdio.h>
#include <string.h>
#include<math.h>
#define TAM 10
 
int A[TAM], B[TAM],C[TAM];

void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}

void constuir(int v[], int v1[], int v2[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v[i]= pow(v1[i],2)+pow(v2[i],2);
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
    
    constuir(C,A,B,TAM);
    bubbleSortCrescente(C,TAM);
    printf("\n Vetor C (ordenado): ");
    list(C,TAM);
}