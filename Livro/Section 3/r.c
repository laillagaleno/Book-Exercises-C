#include <stdio.h>
#include <math.h>
int main() {printf("VOTOS EM UMA ELEIÇÃO\n\n");
int A,B,C,VN,VB,VE;
float PV,PA,PB,PC,PVN,PVB;
printf("Informe a quantidade de votos do cantidato A, B e C:");
scanf("%d %d %d",&A,&B,&C);
printf("Informe a quantidade de votos nulos:");
scanf("%d",&VN);
printf("Informe a quantidade de votos brancos:");
scanf("%d",&VB);
VE=A+B+C+VN+VB;
PV=(A+B+C)*100/VE;
PA=A*100/VE;
PB=B*100/VE;
PC=C*100/VE;
PVN=VN*100/VE;
PVB=VB*100/VE;
printf("Quantidade de eleitores: %d", VE);
printf("\nPorcentual dos votos válidos: %.2f%%", PV);
printf("\nPorcentual dos votos do candidato A: %.2f%%", PA);
printf("\nPorcentual dos votos do candidato B: %.2f%%", PB);
printf("\nPorcentual dos votos do candidato C: %.2f%%", PC);
printf("\nPorcentual dos votos nulos: %.2f%%", PVN);
printf("\nPorcentual dos votos do em branco: %.2f%%", PVB);
return 0;
}