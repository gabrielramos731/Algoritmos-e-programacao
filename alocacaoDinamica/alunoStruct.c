#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[20];
    int idade;
} aluno;

aluno * recebeDados(int n);

int main(){
    aluno *vetAlunos;
    int n, i;

    scanf("%d", &n);
    vetAlunos = recebeDados(n);

    for(i=0; i<n; i++){
        printf("%s ", vetAlunos[i].nome);
        printf("%d anos\n", vetAlunos[i].idade);
    }

    free(vetAlunos);
}

//aloca e preenche o vetor de struct
aluno * recebeDados(int n){
    int i;
    aluno *vetAlunos;

    vetAlunos = (aluno *) calloc(n, sizeof(aluno));
    for(i=0; i<n; i++){
        scanf("%d%*c", &vetAlunos[i].idade);
        gets(vetAlunos[i].nome);
    }

    return vetAlunos;
}
