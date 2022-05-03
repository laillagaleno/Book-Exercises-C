#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct { 
    int topo; 
    int dados[SIZE];
} TPilha;

TPilha pilha;

void push(TPilha * p, int info, int tamanho){
    if (p->topo == tamanho - 1){
        printf("\nPilha cheia\n\n");
        return; 
    }

    p->dados[++(p->topo)] = info;
}

void listar(TPilha * p){
    int i;
    printf("\n\nListando\n");
    for (i = p->topo; i >= 0; i--){
            printf("%d \n",p->dados[i]);
    }
}

int buscar (TPilha * p, int chave){
    int i;
    for (i = p->topo; i >= 0; i--){
        if (p->dados[i] == chave)
           return i;
    }
    return -1;
}

void pop(TPilha * p){
    if (p->topo == -1){
        printf("\n\npilha limpa\n\n");
        return;
    }
    (p->topo)--;
}


int main(int argc, char** argv) {

    int leitura,key;
    pilha.topo = -1;

    while (1){
        printf("Informe o valor: ");
        scanf("%d",&leitura);

        if (leitura == 0)
            break;
        
        push(&pilha,leitura,SIZE);
    }

    listar(&pilha);
    pop(&pilha);
    pop(&pilha);
    listar(&pilha);
    printf("\nInforme a chave da busca: ");
    scanf("%d",&key);

    int posicao = buscar(&pilha,key);
    if (posicao == -1)
        printf("Chave da busca não encontrada na pilha\n\n");
    else
        printf("Chave encontrada na posição: %d\n\n", posicao);
        
    return (EXIT_SUCCESS);
}