#include <stdio.h>

int main (){

    float F;
    printf("CELSIUS PARA FAHRENHEIT\n");

    for (int i = 10; i <=100; i+=10)
    {
        F=(9*i+160)/5;
        printf("%d °C = %2.f °F\n",i,F);
    }
    
    // float F, C=10;
    // printf("LAÇO WHILE\n");
    // while (C<=100)
    // {
    //     F=(9*C+160)/5;
    //     printf("%2.f °C = %2.f °F\n", C,F);
    //     C+=10;
    // }

    // printf("LAÇO DO WHILE\n");
    // do
    // {
    //     F=(9*C+160)/5;
    //     printf("%2.f °C = %2.f °F\n", C,F);
    //     C+=10;
    // } while (C<=100);
    
    

}