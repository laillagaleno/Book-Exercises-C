#include <stdio.h>
#include <math.h>

int main(){

    int vetor[10];
    printf("Ler 10 elementos de uma matriz tipo vetor e apresentá-los\n");

    for(int i =0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Vetor:\n");
    for(int i =0; i<10;i++){
        printf("%d\n",vetor[i]);
    }
}