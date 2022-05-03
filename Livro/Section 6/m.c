#include <stdio.h>

int main(){
    printf("Tabuada de um numero qualquer. Construir um vetor com os resultados\n");

    int num; 
    char op;
    long cal[10];

    printf("Qual a operação?(+ ,- , * ou / ) ");
    scanf("%s",&op);
    printf("De qual número?");
    scanf("%d",&num);
   
   printf("Tabuada: \n");

switch (op)
{
    case '+':
    for (int i = 1; i <= 10; i++)
        {
            cal[i]=num+i;
            printf("%d + %d = %li\n", num, i, cal[i]);
        }
        break;
    case '-':
        for (int i = 1; i <= 10; i++)
        {
            cal[i]=num-i;
            printf("%d + %d = %li\n", num, i, cal[i]);
        }
        break;

    case '*':
        for (int i = 1; i <= 10; i++)
        {
            cal[i]=num*i;
            printf("%d + %d = %li\n", num, i, cal[i]);
        }
        break;

    case '/':
        for (int i = 1; i <= 10; i++)
        {
            cal[i]=num/i;
            printf("%d + %d = %li\n", num, i, cal[i]);
        }
        break;

    default:
    printf("Você não digitou um operador");
        break;
}   

printf("\nMatriz B\n");
for (int i = 1; i <= 10; i++)
{
    printf("B[%d] = %li\n", i, cal[i]);
}

}