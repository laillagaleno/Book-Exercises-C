#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define TAM 10

typedef struct 
    {
        char nome[30];
        char codbarras[30];
        float preco;
    } Tproduto;


bool addProduct (Tproduto listaProdutos[], int *sizeControl, int tamanho);

void showProducts (Tproduto listaProdutos[], int *sizeControl);

void showMenu();

int main(void){

    Tproduto listaProdutos[TAM];
    int sizeControl = 0;
    int choose = 0;
    bool verifyAdd = false;

    while (choose != 3)
    {
        showMenu();
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            verifyAdd = addProduct(listaProdutos, &sizeControl, TAM);
            if(verifyAdd){
                printf("Produto adicionado\n");
            }else{
                printf("Nao foi possivel adicionar o produto, lista cheia\n");
            }
            break;
        case 2:
            showProducts(listaProdutos, &sizeControl);
            break;
        case 3:
            return 0;
        default:
            printf("Digite um valor valido\n");
        }
    }
    
    return 0;
}

bool addProduct (Tproduto listaProdutos[], int *sizeControl, int tamanho){
    int currentPosition = *sizeControl;

    if(currentPosition == tamanho - 1){
     return false;
    }
    
    printf("Digite o nome\n");
    scanf("%s", listaProdutos[currentPosition].nome);
    printf("Digite o codbarras\n");
    scanf("%s", listaProdutos[currentPosition].codbarras);
    printf("Digite o preco\n");
    scanf("%f", &listaProdutos[currentPosition].preco);
    *sizeControl += 1;
    return true;
}

void showProducts (Tproduto listaProdutos[], int *sizeControl){
    int lengh = *sizeControl;

    if(lengh == 0){
        printf("Nao existem contatos\n");
        return;
    }

    for ( int i = 0; i < lengh; i++)
    {
        printf("\nProduto numero: %d\n", i + 1);
        printf("nome : %s\ncodBarras : %s\npreco : %f\n", listaProdutos[i].nome, listaProdutos[i].codbarras, listaProdutos[i].preco);
    }
}

void showMenu(){
    printf("\nDigite 1 para adicionar um novo Produto\n");
    printf("Digite 2 para mostrar Produtos\n");
    printf("Digite 3 fechar o progama\n");
}