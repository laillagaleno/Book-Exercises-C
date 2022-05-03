#include <stdio.h>
int main() {
    
   float num,R;
    printf("TABUADA\n");
   printf("Informe um numero:");
   scanf("%f",&num);

//printf("\n\nUsando  FOR\n");
for (int i = 1; i <=10; i++)
{
      R = i*num;
       printf("%2.f x %d = %2.f\n",num,i,R);
}

 //int cont=1;
//  printf("\n\nUsando WHILE\n");
//    while(cont<=10){
//        R = cont*num;
//        printf("%2.f x %d = %2.f\n",num,cont,R);
//        cont++;
//    }

// printf("\n\nUsando DO-WHILE\n");
//     do
//     {
//         R = cont*num;
//        printf("%2.f x %d = %2.f\n",num,cont,R);
//        cont++;
//     } while (cont<=10);

        return 0;
    }