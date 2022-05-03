#include <stdio.h>
int main(){
printf("NUMEROS PARES DE 50-70\n");
int soma=0, q=0, media;

for (int i = 50; i <=70; i+=2)
{
    soma+=i;
    q+=1;
}
media=soma/q;
printf("Soma: %d\n", soma);
printf("Media: %d", media);

// int cont =50;
// printf("LAÇO WHILE\n");
// while (cont<=70)
// {
//     soma+=cont;
//     q+=1;
//     cont+=2;
// }
// media=soma/q;
// printf("Soma: %d\n", soma);
// printf("Media: %d", media);

// printf("LAÇO DO-WHILE");
// do
// {
//     soma+=cont;
//     q+=1;
//     cont+=2;
// } while (cont<=70);
// media=soma/q;
// printf("Soma: %d\n", soma);
// printf("Media: %d", media);

    return 0;
}