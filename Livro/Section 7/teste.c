#include<stdio.h>
//HETEROGENEAS: TIPOS DE DADOS DIFERENTES EM UMA MSM VARIAVEL
//Declaração um registro/estrutura
//Sintaxe da declaração de um registro 
// struct nome{
    //campos de registro
//}; //é a chave de abertura de uma declação de um estrutura

struct SAlunfo
{
    int matricula;
    char nome[50];
    float nota;    
} aluno1;

//declaração de variaveis apartir de registros
// struct nomeDoStruct nomeVariavel
struct Saluno aluno2;

//opção de criar um tipo(derivados)

typedef int lailla;
lailla numeros;

typedef float notas;


typedef struct  SAluno TAluno;

typedef struct  SAluno{
    int mar;

}TAluno;

int main(){

    scanf("%d",&aluno1.matricula);
    
}
