#include <stdio.h>
#include <string.h>
#define TAM 3

char vetor[TAM];

void ler(char v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%s", &v[i]);
    }   
}
int buscaSequencial(char v[], int tamanho, char key){
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
    char chave;
    char r[2]="S";
    int posi;

    printf("\nDigite %d nomes: ",TAM);
    ler(vetor,TAM);


    while (strcmp(r,"S") == 0)
    {
        printf("\nDeseja buscar qual nome?");
        scanf("%s", &chave);

       posi = buscaSequencial(vetor, TAM,chave);

        if (posi==-1)
        {
            printf("Não encontrado");
        }else{
            printf("Nome encontrado na posição %d", posi);
        }

        printf("\nDeseja pesquisar mais algum nome?  [S/N]");
        scanf("%s",r);
    }


    return 0;
}