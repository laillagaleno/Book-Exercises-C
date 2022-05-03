#include <stdio.h>
#include <string.h> 
 
int main() {
    int A,B,C,temp;
    printf("Informe três números: \n");
    scanf("%d %d %d",&A,&B,&C);
  
  if(A>B){
      temp = A;
      A=B;
      B=temp;
  }
  if(A>C){
      temp=A;
      A=C;
      C=temp;
  } 
  if(B>C){
      temp=B;
      B=C;
      C=temp;
  }
  printf("%d %d %d", A,B,C);
    return 0;
}