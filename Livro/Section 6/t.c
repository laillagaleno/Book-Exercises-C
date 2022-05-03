#include <stdio.h>
int main(){
    printf("Ler A[10] e B[10], onde A só aceita valores divisiveis por 2 e 3. E B valores multiplos de 5. Construir C[20]\n");

int A[10], B[10],C[20];

printf("Digite valores divisiveis por 2 e por 3\n");
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d]", i);
        scanf("%d", &A[i]);
        if ((A[i]%2 != 0)||(A[i]%3!=0))
        {
            printf("!ERROR!\n");
           i--;
        }
    }
    printf("Digite valores multiplos de 5\n");
    for (int i = 0; i < 10; i++)
    {
        printf("B[%d]", i);
        scanf("%d", &B[i]);
        if ((B[i]%5 != 0))
        {
            printf("!ERROR!\n");
           i--;
        }
    }
    
    printf("\nMatriz C\n");
    for (int i = 0; i < 10; i++)
    {
        C[i]=A[i];
        C[i+10]=B[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("C[%d]: %d\n",i,C[i]);
    }

}