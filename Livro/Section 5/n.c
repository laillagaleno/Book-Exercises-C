#include<stdio.h>
int main(){

    int num=0, soma=0, q=0;
    float media;
    
    for (int i=1; num>=0; i++)
    {
        printf("Informe um número:");
        scanf("%d", &num);
       
        if (num>=0)
        {
            soma+=num;
            q+=1;
        }
    }
    media=soma/q;
    printf("Total do somátorio: %d\n", soma);
    printf("Média: %f \n", media);
    printf("Total de valores lidos: %d", q);


// printf("LAÇO WHILE\n");
// while (num>=0)
// {
//       printf("Informe um número:");
//         scanf("%d", &num);
       
//         if (num>=0)
//         {
//             soma+=num;
//             q+=1;
//         }
// }
// media=soma/q;
// printf("Total do somátorio: %d\n", soma);
// printf("Média: %f \n", media);
// printf("Total de valores lidos: %d", q);

// printf("LAÇO DO-WHILE\n");
// do
// {
//  printf("Informe um número:");
//         scanf("%d", &num);
       
//         if (num>=0)
//         {
//             soma+=num;
//             q+=1;
//         }
// } while (num>=0);
// media=soma/q;
// printf("Total do somátorio: %d\n", soma);
// printf("Média: %f \n", media);
// printf("Total de valores lidos: %d", q);

    return 0;
}