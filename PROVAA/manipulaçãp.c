/*
MANIPULAÇÃO DE ARQUIVOS
-> É a manipulação (criação, edição, leitura) de arquivos durante a programação para alcançar um determinado objetivo
-> o principal motivo da utilização de arquivos na programação é para a persistencia de dados

1. Principais funções:
    1.1 Fopen: abertura/criar um arquivo. 
        use a biblioteca : stdlib.h
        MODO DE ABERTURA(DEVOLVE O ENDEREÇO ONDE O ARQUIVO ESTA): 
            FILE * arquivo Fopen(ENDEREÇO, MODO_ABERTURA)
        guarda o enderença da memoria onde o arquivo foi copiado
        1.1.1 Modo de abertura
            'r' -> somente leitura
            'w' -> escrita, ele cria o arquivo caso não exista e limpa o conteudo
            'a' -> escrita, ele cria o arquivo caso não exista e insere o curso no final do arquivo, sem apagar nada
    
    1.2 Fscanf: quando voce quer ler uma informação no arquivo
        Fscanf(arquivo, FORMATO, VARIAVEIS);

    1.3 Fprint: quando voce quer listar o arquivo
        fprint(arquivo, FORMATO, VARIAVEIS)

    1.4 FClose: 
        fclose(arquivo)
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

   typedef struct{
    char nome[60];
    int tel;
}TContato;
TContato agenda[50];
TContato aux[60];


//     FILE * arquivo = fopen ("dados.data", "a");
// printf("Informe o nome e idade:");
// scanf("%s %d", nome, &idade);
//     fprintf(arquivo,"%d %s\n", idade,nome);
//     fclose(arquivo);
    

FILE * leitura = fopen("dados.data", "r");
printf("\n\n dados\n\n");
while (1)
{

    if(fscanf (leitura, "%d %s", &agenda->tel, agenda->nome) != 2)
    break;
   
}

fclose(leitura);


return 0;
}