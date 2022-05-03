#include <stdio.h>
#define TAM 5

int vetor[TAM]={5,4,3,2,1};
typedef struct
{
    int matricula;
    char nome[50];
    char curso[50];
}TAluno;

TAluno  vetorAluno[TAM];

int buscaSequencial(int v[], int tamanho, int key){
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (key==v[i])
        {
            return i;
        }
        
    }
return -1;
}

int buscarAluno(TAluno v[], int tamanho, int key){
    int i;
    for ( i = 0; i < tamanho; i++)
    {
        if(key==v[i].matricula){
            return i;
        }
    }
    return -1;
}
int main(){
   

    // int posi = buscaSequencial(vetor,TAM,chave);

    // if (posi==-1)
    // {
    //     printf("Não encontrado");
    // }else{
    //     printf("Encontrado na posição %d", posi);
    // }
    
    int i;
    for ( i = 0; i < TAM; i++)
    {
        scanf("%d %s %s", &vetorAluno[i].matricula,vetorAluno[i].nome,vetorAluno[i].curso);
    }

    int chave;
    printf("Informe a chave da busca: ");
    scanf("%d", &chave);

    int posi = buscarAluno(vetorAluno,TAM,chave);

    if (posi==-1)
    {
        printf("Não encontrado");
    }else{
        printf("\nResultado da busca\nMatricula: %d\nNome: %s\nCurso: %s\n", vetorAluno[posi].matricula, vetorAluno[posi].nome,vetorAluno[posi].curso);
    }
}