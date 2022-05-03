#include <stdio.h>
int main(){
    float num, soma, media;
    for (int i = 1; i <=10; i++)
    {
        printf("%d° numero: ", i);
        scanf("%f", &num);
        soma+=num;
    }
    media=num/10;
    printf("Somatorio: %2.f\n",soma);
    printf("Média: %2.f",media); 


// int cont=1;
// printf("LAÇO WHITE\n");
// while (cont<=10)
// {
//     printf("%d° numero: ", cont);
//     scanf("%f", &num);
//     soma+=num;
//     cont++;
// }
// media=num/10;
// printf("Somatorio: %2.f\n",soma);
// printf("Média: %2.f",media); 


// printf("LAÇO DO-WHITE\n");
// do
// {
//     printf("%d° numero: ", cont);
//     scanf("%f", &num);
//     soma+=num;
//     cont++;
// } while (cont<=10);
// media=num/10;
// printf("Somatorio: %2.f\n",soma);
// printf("Média: %2.f",media); 

    return 0;
}

