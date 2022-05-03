#include <stdio.h>
#define TAM 5
#include <string.h>
#include <math.h>

int A[TAM], B[TAM];

void read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
    }
}

void cubo(int v1[], int v2[], int tamanho){
 for (int i = 0; i < tamanho; i++)
 {
     v2[i]= pow(v1[i],3);
     printf("%d ", v2[i]);
 }
}

int search(int v[], int tamanho, int key){
  for (int i = 0; i < tamanho; i++)
    {
        if (key==v[i]){
            return i;
        }  
    }
    return -1;
}

int main(){
    char res[1]="S";
    int posicao, chave;

    printf("Digite %d valores pra A: ", TAM);  
    read(A,TAM);
    cubo(A,B,TAM);

    while (strcmp(res,"S") == 0)
    {
        printf("Informe o numero que deseja: ");
	    scanf("%d",&chave);

        posicao=search(B,TAM,chave);

        if(posicao < 0)
        {
             printf("Número não encontrado");
        }else{
             printf("Número encontrado na posição %d", posicao);
        }
        
        printf("\n Deseja pesquisar outro valor? [S/N]");
        scanf("%s",res);
    }
   
   return 0;
}

