#include<stdio.h>
int main(){
    printf("Armazenar temperaturas em °C e apresentar a maior, menor e a media.\n");
    float A[20], maior, menor, media;
    for (int i = 0; i < 20; i++)
    {
        printf("Digite uma temperatura em °C: ");
        scanf("%f",&A[i]);
    }
    maior=A[0];
    menor=A[0];

       for (int j = 1; j < 20; j++) 
       {
           if (maior>A[j])
           {
               if (menor>A[j]) 
               {
                   menor=A[j];  
               }
           }else{
               maior=A[j]; 
           }   
       }

    for (int i = 0; i < 20; i++) 
    { 
      media+=A[i]; 
    }

    printf("Maior: %2.f\n",maior);
    printf("Menor: %2.f\n",menor);
    printf("Média: %2.f", media/20);
}