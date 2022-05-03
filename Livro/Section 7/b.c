#include <stdio.h>
#include <string.h>
#define TAM 8
 
int A[TAM], B[TAM];
 
void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}
 
void mult(int v1[], int v2[], int tamanho){
for (int i = 0; i < tamanho; i++)
{
    v2[i]=v1[i]*5;
}
}

 void bubbleSort(int v[], int tamanho){
    int temp, i, j;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < tamanho -1; i++)
        {
            if (v[i]>v[i+1])
            {
                temp = v[i];
                v[i] =v[i+1];
                v[i+1]=temp;
            }
        }
    }
}

int search(int v[], int tamanho, int key){  

int i=0;
    while (i<=tamanho)
    {
        int meio = (i+tamanho)/2;
        if (key == v[meio])
           {
               return meio;
           }else if(key < v[meio]){
               tamanho = meio-1;
           }else{
               i=meio+1;
           } 
       }
    return -1;
    }
 
 

int main(){
    int chave;
    int posicao;
    char res[1]="S";

    printf("Digite %d valores pra A: ", TAM);  
    read(A,TAM);
    mult(A,B,TAM);

    bubbleSort(B,TAM);

    while (strcmp(res,"S") == 0)
    {
        printf("Informe a chave que deseja: ");
        scanf("%d",&chave);
        posicao=search(B,TAM,chave);
        printf("%d", posicao);
        if (posicao < 0){
                printf("Número não encontrado");
        }else{
            printf("Número encontrado na posição %d", posicao);
        }

        printf("\nDeseja pesquisar mais algum numero?  [S/N]");
        scanf("%s",res);
    }
    return 0;
}
