#include <stdio.h>

int main() {
float N1,N2,N3,N4, media, NE;
printf("Informe suas quatro notas:");
scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

media = (N1+N2+N3+N4)/4;
if(media>=7){
    printf("Aprovado \nMedia: %.2f", media);
}else{
    printf("Informe a nota de exame:");
    scanf("%f", &NE);
    
    float NovaMedia = (media+NE)/2;
    
    if(NovaMedia >= 5){
        printf("Aprovado em exame \nMedia: %.2f", NovaMedia);
    }else{
        printf("Reprovado \nMedia: %.2f", NovaMedia);
    }
}
    return 0;
}