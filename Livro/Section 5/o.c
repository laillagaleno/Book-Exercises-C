#include <stdio.h>
int main(){

printf("FATORIAL DOS NUMEROS IMPARES ENTRE 1-10");
int num,f;
for (int i = 1; i <=10; i+=2)
{
    num=i;
    for (f=1; num>1; num--)
    {
        f=f*num;
    }
    printf("%d! = %d\n", i,f);
}

// int cont=1;
// printf("LAÇO WHITE\n");
// while (cont<=10)
// {
//     num=cont;
//     f=1;
//     while (num>1)
//     {
//         f=f*num;
//         num--;
//     }    
//     printf("%d! = %d\n", cont,f);
//     cont+=2;
// }

// printf("LAÇO DO-WHILE\n");
// do
// {
//     num=cont;
//     f=1;
//     do
//     {
//         f=f*num;
//         num--;  
//     } while (num>1);   
//     printf("%d! = %d\n", cont,f);
//     cont+=2;
// } while (cont<=10);

    return 0;
}
