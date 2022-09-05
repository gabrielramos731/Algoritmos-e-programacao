#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dados{
    char nome[30];
    float nota1, nota2, nota3;
};

void entrada_dados(struct dados *dados_alunos, int n);
void busca(struct dados *dados_alunos, int n, char *nome_maior_p1, char *nome_maior_med, char *nome_menor_med);
void status_aluno(char *nome_aluno, float med);

int main(){
    struct dados dados_alunos[3];
    char nome_maior_p1[30], nome_maior_med[30], nome_menor_med[30];

    entrada_dados(dados_alunos, 3);
    busca(dados_alunos, 3, nome_maior_p1, nome_maior_med, nome_menor_med);
    printf("\nmaior p1: %s\nmaior_med: %s\nmenor_med: %s", nome_maior_p1, nome_maior_med, nome_menor_med);
}

//recebe os valores para 'struct dados'
void entrada_dados(struct dados *dados_alunos, int n){
    int i;
    for(i=0;i<n;i++){
        gets(dados_alunos[i].nome);
        scanf("%f%*c %f%*c %f%*c", &dados_alunos[i].nota1, &dados_alunos[i].nota2, &dados_alunos[i].nota3);
    }
}

//busca os nomes de maior_p1, meir_med, menor_med
void busca(struct dados *dados_alunos, int n, char *nome_maior_p1, char *nome_maior_med, char *nome_menor_med){
    float maior_p1=dados_alunos[0].nota1;
    float menor_med=999; float maior_med=0; float med;

    for(int i=0;i<n;i++){    //'nome' maior nota p1
        if(dados_alunos[i].nota1 >= maior_p1){
            strcpy(nome_maior_p1, dados_alunos[i].nome);   //faz uma copua do nome para 'nome_maior_p1'
            maior_p1=dados_alunos[i].nota1;   //atualiza o valor de maior_p1
        }
        
        med=(dados_alunos[i].nota1 + dados_alunos[i].nota2 + dados_alunos[i].nota3) / n;   //busca maior e menor media
        status_aluno(dados_alunos[i].nome,med);   //apresenta o status do aluno

        if(med>maior_med){   
            strcpy(nome_maior_med, dados_alunos[i].nome);   //faz um copia do nome para 'nome_maior_med'
            maior_med=med;   //atualiza o valor da maior media
        }
        if(med<menor_med){
            strcpy(nome_menor_med, dados_alunos[i].nome);   //faz um copia do nome para 'nome_menor_med'
            menor_med=med;   //atualiza o valor da menor media
        }
    }
}

void status_aluno(char *nome_aluno, float med){
    printf("\nAluno: %s\nMedia: %.2f\n", nome_aluno, med);
    if(med>=6)
        printf("APROVADO!\n");
    else
        printf("REPROVADO\n");
}
