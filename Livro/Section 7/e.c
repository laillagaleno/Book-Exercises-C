#include <stdio.h>
#define TAM1 20
#define TAM2 30
#define TAM3 TAM1+TAM2

int A[TAM1], B[TAM2], C[TAM3];

void read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
    }
}
void acrescimo(int v1[], int v2[],int v3[], int t1, int t3){
  
    for (int i = 0; i < t3; i++)
    {
      if (i<t1)
      {
        v3[i]=v1[i];      
    }else{
        v3[i]=v2[i-t1];
        } 
    }
}
void bubbleSortDecrescente(int v[], int tamanho){
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
    printf("Digite %d valores pra A: ", TAM1);  
    read(A,TAM1);

    printf("Digite %d valores pra A: ", TAM2);  
    read(B,TAM2);
    
    acrescimo(A,B,C,TAM1,TAM3);
    bubbleSortDecrescente(C,TAM3);
    printf("\nVetor C: ");  
    list(C,TAM3);

   return 0;
}