#include <stdio.h>
#include <string.h>

int main(){
 int res=1, i=0;
 char delet[10];

   typedef struct Sagenda
    {
        char nome[10];
        char email[25];
        int num;
       
    }contato;

   contato cadastro[50];

    do
    {
        printf("\nMENU\n");
        printf("|| 0 - Voltar ao menu\n");
        printf("|| 1 - Adicionar um novo contato\n");
        printf("|| 2 - Apresentar os contatos\n");
        printf("|| 3 - Excluir um existente\n");
        printf("|| 4 - Total de contatos\n");
        printf("|| 5 - Sair\n");
        printf("\nO que você deseja fazer? ");
        scanf("%d",&res);

        switch (res)
        {
        case 1:
           printf("==========ADICIONAR============\n");
           while (res==1)
           {
                printf("Nome:");
                scanf("%s", cadastro[i].nome);
                printf("Email:");
                scanf("%s", cadastro[i].email);
                printf("Telefone:");
                scanf("%d", &cadastro[i].num);
                printf("|| Deseja adicionar mais um contato? 0-Não // 1-Sim\n");
                scanf("%d", &res);
                i++;
           }
            break;

            case 2:
            printf("==========LISTA============\n");
            for (int j = 0; j < i; j++)
            {
                printf("Nome: %s\n", cadastro[j].nome);
                printf("Email: %s\n",cadastro[j].email);
                printf("Telefone: %d\n", cadastro[j].num);
            }
            printf("|| Deseja voltar ao menu? 1-Não // 0-Sim\n");
            scanf("%d", &res);
            break;

            case 3:
            printf("==========EXCLUIR============\n");
            printf("Digite o nome:");
            scanf("%s", &delet[10]);

            for (int  j = 0; j < i; j++)
            {
                if (strcmp(delet, cadastro[i].nome)==0)
                {
                    for (int k = j; k < i; k++)
                    {
                    cadastro[k] = cadastro[k+1];
                    }
                   i--;
                   j=i;
                }
                
           }
            printf("|| Deseja voltar ao menu? 1-Não // 0-Sim\n");
            scanf("%d", &res);

            break;
            case 4:
             printf("==========TOTAL============\n");
            printf("%d contatos\n", i);
             printf("|| Deseja voltar ao menu? 1-Não // 0-Sim\n");
            scanf("%d", &res);
            break;

        default:
            break;
        }

    } while (res==0);
    
}