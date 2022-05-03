#include <stdio.h>
int main() {
    
    int res;
    printf("NUMEROS DIVISIVEIS POR 4 ENTRE 1-200\n");
  
  for (int i = 1; i < 200; i++)
  {
      res=i%4;
      if (res==0)
      {
            printf("%d é divisivel por 4\n", i);
      }
  }
  
// printf("LAÇO WHILE\n");

//   int cont=1;
//     while(cont<200){
//         if(cont%4==0){
//             printf("%d é divisivel por 4\n", cont);
//         };
//         cont++;
//     }

// printf("LAÇO DO-WHILE");
// do
// {
//     if(cont%4==0){
//         printf("%d é divisivel por 4\n",cont);
//     }
//     cont++;
// } while (cont<200);

    return 0;
}