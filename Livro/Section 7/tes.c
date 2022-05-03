#include <stdio.h>
#define TAM 30
#include <stdbool.h>
#include <string.h>
#include <math.h>

int A[TAM], B[TAM];

void read(int v[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d valor: ",i);
        scanf("%d", &v[i]);
    }
}

void cubo(int v1[], int v2[], int tamanho){
 for (int i = 0; i < tamanho; i++)
 {
     v2[i]= pow(v1[i],3);
     printf("%d ", v2[i]);
 }
}


void search(int v[], int tamanho){
    int num;
    char res[3]="S";
    
    
    while (strcmp(res,"S") == 0)
    {   
        bool achou = false;
        printf("\nInforme o numero que deseja: ");
	      scanf("%i",&num);
        // num = 512;


        for (int i = 0; i < tamanho; i++)
        {
            if (num == v[i])
            {
                achou = true;
                break;
            } 
       
      
        }
        
        if (achou == true)
        {
             printf("\nNúmero encontrado");
        }else{
             printf("\nNúmero não encontrado");
        }

        printf("\nDeseja pesquisar outro valor? [S/N] ");
        scanf("%s",res);
    }
}

int main(){
    // read(A,TAM);
    for(int i = 0; i < 30; i++){
      A[i] = i;
    }
    cubo(A,B,TAM);
    search(B,TAM);
   return 0;
}