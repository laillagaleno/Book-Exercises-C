#include <stdio.h>
#include<math.h>

int main() {
    int R;
    printf("POTENCIAS DO 3\n");
  
  for (int i = 0; i <=15; i++)
  {
      R=pow(3,i);
        printf("3^%d = %d\n",i,R);
  }
  
//int cont =0;

//  printf("LAÇO WHILE\n");
//     while(cont<=15){
//         R=pow(3,cont);
//         printf("3^%d = %d\n",cont,R);
//         cont++;
//     }

// printf("LAÇO DO-WHILE\n");
// do
// {
//     R=pow(3,cont);
//     printf("3^%d = %d\n",cont,R);
//     cont++;
// } while (cont<=15);

    return 0;
}