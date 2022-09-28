#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[30];
    float *notas;
} dadosAlunos;

//Assigns n grades to an array and prints the greatest grade and avarage grade 
int main(){
    int quantAlunos, quantNotas, i, j;
    dadosAlunos *aluno;

    printf("Quantos alunos: ");
    scanf("%d", &quantAlunos);
    printf("Quantas notas cada aluno: ");
    scanf("%d", &quantNotas);

    aluno = (dadosAlunos *) calloc(quantAlunos, sizeof(dadosAlunos));
    for(i=0; i<quantAlunos; i++){
        aluno[i].notas = (float *) calloc(quantNotas, sizeof(float));
        for(j=0; j<quantNotas; j++){
            scanf("%f", &aluno[i].notas[j]);
        }
    }
}

