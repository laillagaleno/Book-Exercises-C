/*

Referencia: modalidade de variavel que armazena endereços de memoria(ponteiro)
int valor; 4bytes;
char nome; 1 bytes;

declaração de referencia: tipo * nome;
int * valor; 8 bytes -> ponteiros -> endereços memoria 
char *nome; 8 bytes -> ponteiros -> endereços memoria

o tipo é importante na declatação de referencia, para apontar seu valor




*/

#include<stdio.h>


int soma(int * a,int * b){
    *a=*a+50;
    return *a + *b;
}

int main(){
    // int * valor;
    // int numero =8;

    // valor=&numero; //ta armazenando o endereço de memoria em q a var numero está
    // *valor=20; //armazena o valor 

    // printf("valor:%d;\n valor:%d;\n endereço:%d endereço:%d", numero, *valor, &numero, valor);

int num=10, num2=60;
int r = soma(&num, &num2);
printf("%d->%d", num, r);

}