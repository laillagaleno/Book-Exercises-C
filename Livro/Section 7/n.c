#include <stdio.h>
#include <string.h>
#define TAM 15

int A[TAM], B[TAM],C[TAM], D[TAM];

void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}

void constuir(int v[], int v1[], int v2[], int v3[],int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v[i]=v1[i]+v2[i]+v3[i];
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

int search(int v[], int key, int tamanho){
    int meio;
    for (int i = 0; i <= tamanho;  meio = tamanho/2)
    {
        meio = tamanho/2;
        if (key==v[meio])
        {
            return meio;
        }else if(key<v[meio]){
            tamanho=meio;
        }else{
            i=meio;
        }
    }
return -1;
}

int main(){
    int posicao, chave;
    char res[2]="S";

    printf("Digite %d valores pra A: ",TAM);  
    read(A,TAM);
    printf("\nDigite %d valores pra B: ", TAM);  
    read(B,TAM);

    constuir(D,A,B,C,TAM);
    bubbleSortCrescente(D,TAM);
    while (strcmp(res,"S") == 0)
    {
        printf("Digite a chave que deseja: ");
        scanf("%d", &chave);

        posicao=search(D,chave,TAM);
        if (posicao<0)
        {
            printf("Não encontrado");
        }else{
            printf("Numero encontrado na posição %d", posicao);
        }

        printf("\nDeseja pesquisar mais algum numero?  [S/N]");
        scanf("%s",res);
    }
return 0;

}