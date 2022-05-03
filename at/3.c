#include <stdio.h>
//Cap. 4, letra c

float calMedia(float *n1, float *n2, float *n3, float *n4){
    return (*n1+ *n2+ *n3+ *n4)/4;
}
int main() {

float N1,N2,N3,N4, media;
printf("Informe suas quatro notas:");
scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

media = calMedia(&N1,&N2,&N3,&N4);

if(media>=5){
    printf("Aprovado, %.2f", media);
}else{
    printf("Reprovado, %.2f", media);
}

    return 0;
}