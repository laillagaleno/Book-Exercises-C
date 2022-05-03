#include <stdio.h>

int main() {
float N1,N2,N3,N4, media;
printf("Informe suas quatro notas:");
scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

media = (N1+N2+N3+N4)/4;
if(media>=5){
    printf("Aprovado, %f", media);
}else{
    printf("Reprovado, %f", media);
}
    return 0;
}