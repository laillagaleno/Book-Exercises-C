#include <stdio.h>
int main() {
int A,B,C,D;
int AsB,AsC,AsD,BsC,BsD,CsD;
int AmB,AmC,AmD,BmC,BmD,CmD;
printf("FAZER A ADIÇÃO E MULTIPLICAÇÃO ENTRE OS NUMEROS \n\n");
printf("Informe quatro valores:");
scanf("%d %d %d %d", &A,&B,&C,&D);
AsB = A+B;
AsC = A+C;
AsD = A+D;
BsC = B+C;
BsD = B+D;
CsD = C+D;
AmB = A*B;
AmC = A*C;
AmD = A*D;
BmC = B*C;
BmD = B*D;
CmD = C*D;
printf("AS SOMAS DISTRIBUTIVAS SÃO:\n");
printf("A+B = %d\n", AsB);
printf("A+C = %d\n", AsC);
printf("A+D = %d\n", AsD);
printf("B+C = %d\n", BsC);
printf("B+D = %d\n", BsD);
printf("C+D = %d\n", CsD);
printf("AS MULTPLICAÇÕES DISTRIBUTIVAS SÃO:\n");
printf("A*B = %d\n", AmB);
printf("A*C = %d\n", AmC);
printf("A*D = %d\n", AmD);
printf("B*C = %d\n", BmC);
printf("B*D = %d\n", BmD);
printf("C*D = %d\n", CmD);
return 0;
}