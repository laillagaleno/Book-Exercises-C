#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct { 
    int topo; 
    int dados[SIZE];
} TPilha;

TPilha pilha;

               
int push(int info, int tamanho){
    if (pilha.topo == tamanho - 1){
        printf("\nPilha cheia\n\n");
        return ; 
    }

    pilha.dados[++(pilha.topo)] = info;
}

void listar(){
    int i;
    
    for (i = pilha.topo; i >= 0; i--){
            printf("%d \n",pilha.dados[i]);
    }
}

void pop(){
    pilha.dados[pilha.topo]=0;

}

// void pop(){
//     int i;
//     for(i = pilha.topo; i>=0; i--){
//         pilha.dados[i]=0;
//     }
// }

// void pop(int p[], int tamanho){
//     int i;
//     for (i = tamanho - 1;i >= 0;i--){
//         if (p[i] != 0){
//             p[i] = 0;
//             return;
//         }   
//     }
// }

// void push(TPilha * p, int info, int tamanho){
//     if (p->topo == tamanho - 1){
//         printf("\nPilha cheia\n\n");
//         return; 
//     }

//     p->dados[++(p->topo)] = info;
// }

// void listar(TPilha * p){
//     int i;
//     printf("\n\nListando\n");
//     for (i = p->topo; i >= 0; i--){
//             printf("%d \n",p->dados[i]);
//     }
// }

// int buscar(int p[], int tamanho, int chave){
//     int i;
//     for (i = tamanho - 1; i >= 0; i--){
//         if (p[i] == chave)
//            return i;
//     }
//     return -1;
// }


void openMenu(){
    printf("\n==========//==========");
    printf("\n1 - ADICIONAR");
    printf("\n2 - LISTAR");
    printf("\n3 - DELETAR");
    printf("\n5 - Sair\n\n");
}

int main(int argc, char** argv) {

    int leitura,option;
    pilha.topo = -1;

    while (option!=5)
    {
        openMenu();
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        while (1){

               

                printf("Informe o valor: ");
                scanf("%d",&leitura);
            
                if (leitura == 0)
                    break;
                
                push(leitura,SIZE);
        }

            break;
        case 2:
            printf("\n\nListando\n");
             listar();
             break;

        case 3:
            pop();
            printf("\nElemento deletado com sucesso!\n");
                break;

         case 5:
            return 0;
         default:
             printf("Essa opção não esta no menu\n");
         }
    }

    

    // pop(pilha, SIZE);
    // pop(pilha, SIZE);
    // listar(pilha, SIZE);
    // printf("\nInforme a chave da busca: ");
    // scanf("%d",&key);

    // int posicao = buscar(pilha, SIZE,key);
    // if (posicao == -1)
    //     printf("Chave da busca não encontrada na pilha\n\n");
    // else
    //     printf("Chave encontrada na posição: %d\n\n", posicao);


    return (EXIT_SUCCESS);
}