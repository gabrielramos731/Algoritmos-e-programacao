#include<stdio.h>
#include<stdlib.h>

struct aluno{
    char nome[30];
    int idade;
    float nota;
};

int main(){
    struct aluno dados_aluno[3];
    int i;

    for(i=0;i<3;i++){
        gets(dados_aluno[i].nome);
        scanf("%d%*c", &dados_aluno[i].idade);
        scanf("%f%*c", &dados_aluno[i].nota);
    }
    for(i=0;i<3;i++){
        printf("Aluno: %s\nIdade: %d\nNota: %.2f\n", dados_aluno[i].nome, dados_aluno[i].idade, dados_aluno[i].nota);
        if(dados_aluno[i].nota>=6)
            printf("APROVADO!\n");
        else
            printf("REPROVADO!\n");
    }
}
