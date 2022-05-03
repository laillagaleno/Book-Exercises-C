#include <stdio.h>
int main(){

unsigned q1=1,soma=0, q2;

printf("SOMATORIO DO NUMERO DE GRÃOS\n");
for (int i = 1; i <=64; i++)
{
    soma+=q1;
    q2=q1*2;
    q1=q2;
}
printf("Somatorio do n° de grão: %u\n", soma);


// int cont=1;
// printf("LAÇO WHILE\n");
// while (cont<=64)
// {
//     soma+=q1;
//     q2=q1*2;
//     q1=q2;
//     cont++;
// }
// printf("Somatorio do n° de grão: %u\n", soma);



// printf("LAÇO DO-WHILE\n");
// do
// {
//     soma+=q1;
//     q2=q1*2;
//     q1=q2;
//     cont++;
// } while (cont<=64);
// printf("Somatorio do n° de grão: %u\n", soma);

    return 0;
}