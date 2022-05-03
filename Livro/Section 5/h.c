#include <stdio.h>

int main(){
    int B, E;
    float res=1;

    printf("\nInforme o valor da base:");
    scanf("%d",&B);
    printf("\nInforme o valor do expoente:");
    scanf("%d", &E);

    for (int i = 1; i <=E; i++)
    {
    res=B*res;
    }
    printf("\n%d^%d = %2.lf", B,E,res);


// int cont=1;
// printf("LAÇO WHILE\n");
// while (cont<=E)
// {
//     res=B*res;
//     cont++;
// }
// printf("\n%d^%d = %2.lf", B,E,res);

// printf("LAÇO DO-WHILE\n");
// do
// {
//   res=B*res;
//     cont++;
// } while (cont<=E);
// printf("\n%d^%d = %2.lf", B,E,res);



    return 0;
}