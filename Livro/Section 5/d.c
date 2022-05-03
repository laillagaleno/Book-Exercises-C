#include <stdio.h>
int main() {
    int R, S=0;
  printf("SOMA DOS N° PARES ENTRE 1-500\n");
  
  for (int i = 1; i<=500; i++)
  {
    R= i%2;
       if(R==0){
         S+=i;
       }
  }
  printf("A soma é %d\n", S);


// printf("\n\nUsando WHILE\n");
//  int cont=1; 
//   while(cont<=500){
//         if(cont%2==0){
//             S +=cont;
//         }
//         cont++;
//     }
//     printf("A soma é %d\n", S);


// printf("\n\nUsando DO-WHILE\n");
// do
// {
//   if (cont%2==0)
//   {
//    S +=cont;
//   }
//   cont++;
// } while (cont<=500);
//   printf("A soma é %d\n", S);

    return 0;
}