#include <stdio.h>
int main() {
int a,b,c,d,e, Maior,menor;
printf("Informe cinco números inteiros: \n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
Maior=a;
if(Maior<b){ Maior=b;}
if(Maior<c){ Maior=c;}
if(Maior<d){ Maior=d;}
if(Maior<e){ Maior=e;}
    
menor=a;
if(menor>b){ menor=b;}
if(menor>c){ menor=c;}
if(menor>d){ menor=d;}
if(menor>e){ menor=e;}
printf("O número maior é: %d \nO número menor é: %d", Maior, menor);
return 0;
		}