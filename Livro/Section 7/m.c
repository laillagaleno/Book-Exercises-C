#include <stdio.h>
#include <string.h>
#define TAM 12

int A[TAM], B[TAM],C[TAM];

void read(int v[], int tamanho){
   for (int i = 0; i < tamanho; i++)
   {
    scanf("%d", &v[i]);
   }
}

void constuir(int v[], int v1[], int v2[],int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        v[i]=v1[i]*v2[i];
    }
}

int search(int v[], int key, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        if (key==v[i])
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int posicao, chave;
    char res[1]="S";

    printf("Digite %d valores pra A: ",TAM);  
    read(A,TAM);
    printf("\nDigite %d valores pra B: ", TAM);  
    read(B,TAM);

    constuir(C,A,B,TAM);

    while (strcmp(res,"S") == 0)
    {
        printf("Digite a chave que deseja: ");
        scanf("%d", &chave);

        posicao=search(C,chave,TAM);
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