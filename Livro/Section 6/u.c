#include <stdio.h>
int main(){
     printf("Ler A[12] e B[12], onde A só aceita valores divisiveis por 2 ou 3. E B valores que não sejam multiplos de 5. Construir C[24]\n");

     int A[12], B[12], C[24];

    printf("Digite valores divisiveis por 2 ou 3\n");
     for (int i = 0; i < 12; i++)
     {
         do
         {
            printf("A[%d]: ",i);
            scanf("%d", &A[i]);
         } while ((A[i]%2!=0)&&(A[i]%3!=0));
     }

      printf("\nDigite valores que não são multiplos de 5\n");
      for (int i = 0; i < 12; i++)
     {
         do
         {
            printf("B[%d]: ",i);
            scanf("%d", &B[i]);
         } while ((B[i]%5==0));
     }
      
 printf("\nMatriz C\n");
    for (int i = 0; i < 12; i++)
    {
        C[i]=A[i];
        C[i+12]=B[i];
    }

    for (int i = 0; i < 24; i++)
    {
        printf("C[%d]: %d\n",i,C[i]);
    }
}