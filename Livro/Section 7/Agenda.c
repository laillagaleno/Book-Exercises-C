#include <stdio.h>
int main(){

int res=1, total=0, i=0, delet;

typedef struct Sagenda{
        char nome[10];
        char email[30];
       int tel; 
     }func;

func contatos[50];

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
      scanf("%s", &contatos[i].nome[10]);
       printf("Email:");
      scanf("%s", &contatos[i].email[30]);
      printf("Telefone:");
      scanf("%d", &contatos[i].tel);
     
      
      printf("Deseja adicionar mais um contato?\n");
      printf("0 - Não\n");
      printf("1 - Sim\n");
      scanf("%d", &res);
     if (res==1)
     {
       i++;
     }
     total++;
    }
    break;
  case 2:
    printf("==========CONTATOS============\n");
    for (int j = 0; j < total; j++)
    {
      printf("Nome: %s\n", contatos[j].nome);
      printf("Email: %s\n",contatos[j].email);
      printf("Telefone: %d\n", contatos[j].tel);
      
    }
      printf("Deseja voltar ao menu?\n");
      printf("0 - Sim\n");
      printf("1 - Não\n");
      scanf("%d", &res);
    break;
//   case 3:
//     printf("==========EXCLUIR============\n");
//     printf("Qual contato deseja excluir?");
//     scanf("%d", &delet);

// for (int j = 0; j < total; j++)
// {
//   if (delet==j)
//       {
//         for (int k = j; k < total; k++)
//         {
//             contatos[k] = contatos[k+1];
//             printf("ECXLUIR\n");
//         }
//         total--;
//         i--;
//         j=total;
//       }
// }


//     printf("Deseja voltar ao menu?\n");
//     printf("0 - Sim\n");
//     printf("1 - Não\n ");
//     scanf("%d", &res);
//     break;
  case 4:
    printf("\nTotal de contatos cadastrados: %d\n", total);
    printf("Deseja voltar ao menu?\n");
    printf("0 - Sim\n");
    printf("1 - Não\n ");
    scanf("%d", &res);
    break;

  default:
    break;
  }

} while (res==0);

}