#include<stdio.h>
#include<stdlib.h>

struct aluno{
    char nome[30];
    int idade;
    float nota;
};

void ordena(struct aluno *dados_aluno, struct aluno temp, int n);

int main(){
    struct aluno dados_aluno[3], temp;   //'temp' precisa ser do mesmo tipo de 'dados_aluno' para poder fazer atribuição
    int i;

    for(i=0;i<3;i++){
        gets(dados_aluno[i].nome);
        scanf("%d%*c", &dados_aluno[i].idade);
        scanf("%f%*c", &dados_aluno[i].nota);
    }

    ordena(dados_aluno, temp, 3);

    for(i=0;i<3;i++){
        printf("Aluno: %s\nIdade: %d\nNota: %.2f\n", dados_aluno[i].nome, dados_aluno[i].idade, dados_aluno[i].nota);
        if(dados_aluno[i].nota>=6)
            printf("APROVADO!\n\n");
        else
            printf("REPROVADO!\n\n");
    }
}

//ordena o vetor 'dados_aluno' do tipo struct pela nota
void ordena(struct aluno *dados_aluno, struct aluno temp, int n){
    int i, j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(dados_aluno[i].nota>dados_aluno[j].nota){
                temp = dados_aluno[i];
                dados_aluno[i] = dados_aluno[j];
                dados_aluno[j] = temp;
            }
        }
    }
}
