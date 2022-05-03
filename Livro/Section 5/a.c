#include <stdio.h>
#include <math.h>
int main() {
    float E;

printf("\n\nUsando FOR\n");
   for(int i = 15; i<=200; i++){
       E=pow(i,2);
        printf("O quadrado de %d é %f \n",i,E);
   }

// int cont=15;

// printf("Usando WHILE\n");
//    while(cont<=200){
//        E = pow(cont,2);
//        printf("O quadrado de %d é %2.f \n",cont,E);
//        cont++;
//    }

// printf("\n\nUsando DO-WHILE\n");
//     do
//     {
//         E = pow(cont,2);
//        printf("O quadrado de %d é %2.f \n",cont,E);
//        cont++;
//     } while (cont<=200);
    
    return 0;
}