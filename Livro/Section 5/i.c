#include <stdio.h>

int main(){

int num=1, pos, ant=0;
printf("SÉRIE DE FIBONACCI\n");

for (int i = 1; i <=15; i++)
{
    printf("%d, ",num);
    pos=ant+num;
    ant=num;
    num=pos;
}

// int cont=1;

// printf("LAÇO WHILE\n");
// while (cont<=15)
// {
//     printf("%d, ",num);
//     pos=num+ant;
//     num=pos;
//     ant=num;
//     cont++;
// }

// printf("LAÇO DO-WHILE");
// do
// {
//     printf("%d, ",num);
//     pos=num+ant;
//     num=pos;
//     ant=num;
//     cont++;
// } while (cont<=15);


    return 0;
}