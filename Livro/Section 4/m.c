#include <stdio.h>
#include <string.h>

int main() {
	char nome[50];
	char sexo[10];
	printf("Informe o nome: ");
	scanf("%s",nome);
	printf("Informe o sexo(M/F): ");
	scanf("\n%s",sexo);

    if(strcmp(sexo,"M")==0||strcmp(sexo,"F")==0){
	    if (strcmp(sexo,"M") == 0){
	    	printf("Ilmo Sr. %s",nome);
    	}else { 
	    	printf("Ilmo Sra. %s",nome);
    	}   
    }

	return 0;
}