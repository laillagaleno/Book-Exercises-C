#include <stdio.h>

int main(){




    int num;
    long fatorial;
    long soma=0;

    // printf("SOMATORIO DO FATORIAL DE 15 VALORES\n");
    // for (int i = 1; i <=15; i++)
    // {
    //     printf("Informe um numero:");
    //     scanf("%d",&num);
    //     for (fatorial=1; num>1; num--)
    //     {
    //         fatorial=fatorial*num;
    //     }
    //     soma+=fatorial;
    // }
    // printf("A soma de todos os fatoriais é: %ld", soma);    


for (int i = 1; i <+15; i++)
{
        printf("Informe um numero:");
        scanf("%d",&num);
//programação defensiva
        if(num<0){
            printf("Os valores não pode ser negativo");
            i--;
            continue;
        }
        fatorial =1;
        for (int j=num; j>1; j--)
        {
            fatorial *=j;
        }
        soma +=fatorial;
}
    printf("A soma de todos os fatoriais é: %ld", soma);    


// int cont=1, f=1;
// printf("LAÇO WHILE");
// while (cont<=15)
// {
//         printf("%d° numero:", cont);
//         scanf("%d", &num);
//         while (num>1)
//         {
//             f=f*num;
//             num--;
//         }
//         soma=soma+f;
//         f=1;
//         cont++;
// }
//    printf("SOMA: %f", soma);


// do
// {
//     printf("%d° numero:", cont);
//     scanf("%d", &num);
//     do
//     {
//         f=f*num;
//         num--;
//     } while (num>1);
       
//     soma=soma+f;
//     f=1;
//     cont++;
// } while (cont<=15);
//   printf("SOMA: %f", soma);

return 0;
}