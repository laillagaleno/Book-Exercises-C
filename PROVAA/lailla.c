#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define TAM 50

typedef struct {
  char nome[50];
  char telefone[11];
} TContato;

void adicionar(){
//   1. abrir ou criar o arquivo fopen
//   2. ler os dados scanf
//   3. Imprimir no arquivo fprintf
//   4. Chamar a função que irá ordenar os dados

}

void ordenar(){
  TContato listaContatos[10];
//   1. abrir arquivo no modo leitura
//   2. usando fscanf ler os ddados do arquivo e colocar no vetor listaContatos
//   3. Ordenar usando algum método de ordenação Bubblesort 
//   4. abrir o arrquivo no modo de escrita "W" e usando fprint inserir os dados dentro do arquivo  
}

void buscar(){
  TContato listaContatos[10];
//   1. abrir arquivo no modo leitura
//   2. usando fscanf ler os ddados do arquivo e colocar no vetor listaContatos
//   3. Ler o nome que será buscado
//   4. Buscar usando a busca sequencial o contato
//   5. Apresentar os dados.
}

int excluir(){
  TContato listaContatos[10];
//   1. abrir arquivo no modo leitura
//   2. usando fscanf ler os ddados do arquivo e colocar no vetor listaContatos
//   3. Ler o nome que será buscado
//   4. Buscar usando a busca sequencial o contato
//   5. remover o elemento encontrado do vetor
//   6. abrir o arquivo no modo de escrita "W" e usando fprint inserir os dados dentro do arquivo  
}




int main(){ 

	FILE *arq;
	char string[100];
	int quantLinhas = 0;
	char **linhas;
	arq = fopen("agenda.txt","r");
	linhas = (char**) malloc(sizeof(char*));
	if(arq){
		while(fgets(string,sizeof(string),arq)){
			quantLinhas++;
			linhas = (char**) realloc(linhas,sizeof(linhas) * quantLinhas); 
			linhas[quantLinhas-1] = (char*) malloc(sizeof(char) * 100);
			strcpy(linhas[quantLinhas-1],string);	
			printf("%s\n",linhas[quantLinhas-1]);
		}
	}
	fclose(arq);
	free(*linhas);
	free(linhas);
	return 0;

}