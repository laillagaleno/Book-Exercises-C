//Capitulo 3, letra d

#include <stdio.h>
// function
float calculateDistance (float * t,float * v){
     float d = *t * *v;
     return d;
}
float calculateLiter (float d){
     return d/12;
}


int main(){
    float T, V;
    printf("Informe o tempo gasto: ");
    scanf("%f", &T);
    printf("Informe a velocidade média: ");
    scanf("%f", &V);

    printf("Velocidade média: %.2f", V);
    printf("\nTempo gasto: %.2f", T);
    float d = calculateDistance(&T,&V);
    printf("\nDistância percorrida: %.2f", d);
  float l= calculateLiter(calculateDistance(&T,&V));
  printf("\nQuantidade de litros utilizado: %.2f",l);

    return 0;
}