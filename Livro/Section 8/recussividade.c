//Faça em C um exemplo de recursividade direta e outro de recursividade indireta.
#include <stdio.h> 

double fatorial(int n);


int main(){  
       int numero;
      double f;
      
      printf("Digite o numero que deseja calcular o fatorial: ");
      scanf("%d",&numero);
      
      f = fatorial(numero);
       printf("Fatorial de %d = %.0lf",numero,f);
return 0;
}

int indireta(int num){
    double r;
   r=num*fatorial(num-1);
  
    return(r);
}

double fatorial(int n){
    if (n<=1)
    {
        return 1;
    }else{
        indireta(n);
    }
}

// void teste();
// // indireta   
// void outra(){
//     teste();
// }


// int contador =1;
// // direta
// void teste(){
   
//     if(contador==10)
//         return;
//     printf("%d", contador);
//     contador++;
//     // teste();
//     outra();
// }


