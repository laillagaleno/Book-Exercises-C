#include<stdio.h>
#define TAM 10

int vetor[TAM]={5,6,5,2,1};

void bubbleSort(int v[], int tamanho){
    int temp, i, j;

    for (j = 0; j < tamanho - 1; j++)
    {
        for (i = 0; i < tamanho - 1; i++)
        {
            if(v[i]>v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1]=temp;
            }
        }
        
    }
    
}

void listar(int v[], int tamanho){
    printf("\n");

    for (int i = 0; i < tamanho; i++)
        {
            printf("%d ", v[i]);
        }
}

int main(){
    listar(vetor,TAM);
    bubbleSort(vetor,TAM);
    listar(vetor,TAM);
    
    
    //Metodo/algoritmo da Bolha
    // bubbleSoot
    /*
    muito lento pra um vetor muito grande
    usa pouca memoria

        se eu tenho uma coleção de dados
        um vetor: 0 1 2 3 4 
                  5|4|8|9|1
                  pega o maior numero e leva pra ultima posição
                  depois no novamente
                  ele testa de par em par: se o 5 for maior q 4, eles n estao ordenados entre si
                  dai eles trocam
                  depois o 5 compara-se com o 3, e ha a troca novamente
                  no final fica: 
                  4 5 8 1 9
                  4 5 1 8 9
                  4 1 5 8 9
                  1 4 5 8 9
    */



}