#include <stdio.h>
#define TAM 10

typedef struct
{
    char nome[60];
    char codbarras[60];
    float custo;
    float preco;
}TProduto;

TProduto listaProdutos[TAM];

void menu(){
    printf("\n\nMENU:");
    printf("\n1 - Cadastrar produtos");
    printf("\n2 - Listar produtos");
    printf("\n3 - Sair");
}

void cadastrar(TProduto v[], int tamanho, int *quantidade){
    int id = *quantidade;
    scanf("\n%s %s %f %f", v[id].nome, v[id].codbarras, &v[id].custo,&v[id].preco);

    *quantidade+=1;
}

void listar(TProduto v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nProduto: %s | Codigo de barras: %s | Custo: %f | Preço: %f", v[i].nome, v[i].codbarras, v[i].custo, v[i].preco);
    }  
}

int main(){

    int qnt=0;
    int res=0;

    while (res!=3)
    {
    menu();
    printf("\nO que deseja fazer? ");
    scanf("%d", &res);

    if (res == 1 )
        {
            printf("\n\nCADASTRAR PRODUTO\n"),
            cadastrar(listaProdutos,TAM,&qnt);
        } else if (res == 2)
        {
            printf("\n\nLISTAR PRODUTOS");
            listar(listaProdutos,TAM);
        }else{
            printf("\nOpção não encontrada!");
        }
    }
    return 0;
}