#include<stdio.h>
#include<stdlib.h>

struct dados{
    char nome[30];
    int matricula;
    float nota1, nota2, nota3;
};

int main(){
    struct dados dados_alunos[3];

    entrada_dados(dados_alunos, 3);

}

void entrada_dados(struct dados *dados_alunos, int n){
    int i;
    for(i=0;i<n;i++){
        gets(dados_alunos[i].nome);
        scanf("%d", &dados_alunos[i].matricula);
        scanf("%f %f %f%*c", &dados_alunos[i].nota1, &dados_alunos[i].nota2, &dados_alunos[i].nota3);
    }
}