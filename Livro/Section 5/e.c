#include <stdio.h>
int main() {
    int res;
    printf("NUMEROS IMPARES ENTRE 1-20\n");
  
  for (int i = 0; i <=20; i++)
  {
      res=i%2;
      if(res==0){
          printf("%d\n",i);
      }
  }
  
//   int cont=0;

//   printf("LAÇO WHILE \n");
//     while(cont<=20){
//         if(cont%2!=0){
//             printf("%d\n", cont);
//         };
//         cont++;
//     }

//     printf("LAÇO DO-WHILE \n");
//     do
//     {
//          if(cont%2!=0){
//             printf("%d\n", cont);
//         };
//         cont++;
//     } while (cont<=20);
    
    return 0;
}