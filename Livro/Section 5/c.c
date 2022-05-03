#include <stdio.h>
int main() {
   
    int S=0;
    printf("SOMA DOS 100 PRIMEIROS NUMEROS\n");
    for(int i=1; i<=100;i++){
        S+=i;
    }
    printf("A soma é %d", S);


// int cont=1;
// printf("\n\nUsando WHILE\n");
//    while(cont<=100){
//        S +=cont;
//        cont++;
//    }
//    printf("A soma é %d", S);

// printf("\n\nUsando DO-WHILE\n");
//     do
//     {
//         S+=cont;
//         cont++;
//     } while (cont<=100);
//     printf("A soma é %d", S);

    return 0;
}