#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define TAM 50

typedef struct{
    char nome[60];
    int tel;
    int id;
}TContato;


int excluir(TContato contact,char key[], int *size){
    TContato v[50];
    int tamanho = *size;
    int id=0;

    FILE *leitura = fopen ("agenda.txt", "r");
    while (1){ 
        if(fscanf(leitura, "%s %d %d" ,contact.nome, &contact.tel, &contact.id)!=3)
        break;
        if (strcmp(contact.nome, key)!=0){
            strcpy(v[id].nome,contact.nome);
            v[id].tel=contact.tel;
            v[id].id=id;
            id+=1;
        }
    }
    fclose(leitura);
    
    *size-=1;
    
    FILE *apagar = fopen ("agenda.txt", "w");
    fclose(apagar);
    
    FILE *add = fopen ("agenda.txt", "a");
    for (int i = 0; i < tamanho; i++)
    {
        fprintf(add,"\n %s %d %d", v[i].nome, v[i].tel, v[i].id);
    }
    fclose(add);     
}

void buscar(TContato contact, char key[]){
    FILE * leitura = fopen("agenda.txt", "r");
    
     while (1){ 
        if(fscanf(leitura,"%s %d %d",contact.nome, &contact.tel,&contact.id)!=3)
        break;
        if(strcmp(contact.nome, key)==0){
        printf("\n %d Nome: %s tel: %d",contact.id, contact.nome, contact.tel);
        }
    }
    fclose(leitura);
}

void openMenu(){
    printf("\n==========//==========");
    printf("\nAGENDA TELEFONICA");
    printf("\nDigite uma das opções:");
    printf("\n1 - Adicionar contato");
    printf("\n2 - Listar contatos");
    printf("\n3 - Buscar contato");
    printf("\n4 - Excluir contato");
    printf("\n5 - Sair\n\n");
}

int tamanhoArquivo(TContato contact){
    int quant =0;
    FILE * leitura = fopen("agenda.txt", "r");
    while (1){ 
        if(fscanf(leitura, "%s %d" ,contact.nome, &contact.tel)!=2)
        break;
        
        quant +=1;
    }
    fclose(leitura);
    return quant;
}

void listar(TContato contact){
    FILE * leitura = fopen("agenda.txt", "r");
    if (leitura == NULL){
        printf("ERROR. Arquivo não existe.\n");
        exit(1);
    }
    while (1){ 
        if(fscanf(leitura, "%s %d %d" ,contact.nome, &contact.tel, &contact.id)!=3)
        break;
        printf("\n %d Nome: %s tel: %d",contact.id, contact.nome, contact.tel);
    }
    fclose(leitura);
}

void ordenar(TContato contact, int *size){
    TContato v[50];
    int tamanho = *size;
    char aux[20];
    int auxtel;
    int j;
    int id=0;

    FILE *leitura = fopen ("agenda.txt", "r");
    while (1){ 
        if(fscanf(leitura, "%s %d %d" ,contact.nome, &contact.tel, &contact.id)!=3)
        break;
        strcpy(v[id].nome,contact.nome);
        v[id].tel=contact.tel;
        v[id].id=id;
        id+=1;
    }
    fclose(leitura);

    for (int i = 0; i < tamanho; i++){
       for (j = i; j < tamanho-1; j++){
            if(strcmp(v[i].nome, v[j+1].nome)>0){
                strcpy(aux, v[i].nome);
                strcpy(v[i].nome, v[j+1].nome);
                strcpy(v[j+1].nome, aux);

                auxtel = v[i].tel;
                v[i].tel=v[j+1].tel;
                v[j+1].tel= auxtel;
             }
       }
    }

    FILE *apagar = fopen ("agenda.txt", "w");
    fclose(apagar);
    
    FILE *add = fopen ("agenda.txt", "a");
    for (int i = 0; i < tamanho; i++)
    {
        fprintf(add,"\n %s %d %d", v[i].nome, v[i].tel, v[i].id);
    }
    fclose(add);
}

bool addContact (TContato contact[], int *idArray, int sizeArray){
    int id = *idArray;
    if (id == sizeArray){
        return false;
    }
    FILE*arquivo = fopen("agenda.txt","a");
    printf("%d Informe o nome e numero: ",id);
    scanf("%s %d", contact[id].nome, &contact[id].tel);
    fprintf(arquivo,"\n%s %d %d", contact[id].nome, contact[id].tel, id);
    fclose(arquivo);
    *idArray +=1;

     
    return true;
}

int main(){
    FILE *arq;
    arq = fopen("agenda.txt","r");

    TContato agendaTel[TAM];
    TContato aux[TAM];
    char nome[20];
    int option = 0;
    int quant = tamanhoArquivo(*agendaTel);
    bool verify = false;


    while (option != 5)
    {
         openMenu();
         scanf("%d", &option);

         switch (option)
         {
         case 1:
              verify = addContact(agendaTel, &quant, TAM);
              if (verify)
              {
                  printf("Contato adicionado com sucesso!");
                  ordenar(*agendaTel,&quant);

              }else{
                  printf("Agenda de contatos cheia! Tente excluir agum contato.");
              }
             break;
         case 2:
            listar(*agendaTel);
            break;
         case 3:
            printf("\nDigite o nome que deseja buscar: ");
            scanf("%s",nome);
            buscar(*agendaTel, nome);
            break;
         case 4:
            printf("\nDigite o nome que deseja excluir: ");
            scanf("%s",nome);
            excluir(*agendaTel,nome,&quant);
            break;
         case 5:
            return 0;
         default:
             printf("Essa opção não esta no menu\n");
         }
    }
    
    return 0;
}