#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dados{
    char nome[30], endereco[30];
    int tel;
};

void entradaDados(struct dados *dadosPessoais, int n);
void apresentaDados(struct dados *dadosPessoais, int n);
void ordenaDados(struct dados *dadosPessoais, struct dados temp, int n);

int main(){
    struct dados dadosPessoais[3], temp;

    entradaDados(dadosPessoais, 3);
    ordenaDados(dadosPessoais, temp, 3);
    apresentaDados(dadosPessoais, 3);
}

void entradaDados(struct dados *dadosPessoais, int n){
    int i;
    for(i=0; i<n; i++){
        gets(dadosPessoais[i].nome);
        fflush(stdin);
        gets(dadosPessoais[i].endereco);
        fflush(stdin);
        scanf("%d", &dadosPessoais[i].tel);
        fflush(stdin);
    }
}

void ordenaDados(struct dados *dadosPessoais, struct dados temp, int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(dadosPessoais[i].nome, dadosPessoais[j].nome)>0){
                temp = dadosPessoais[i];
                dadosPessoais[i]=dadosPessoais[j];
                dadosPessoais[j]=temp;
            }
        }
    }
}

void apresentaDados(struct dados *dadosPessoais, int n){
    int i;
    for(i=0; i<n; i++)
        printf("\nNome: %s\nEndereco: %s\nTelefone: %d\n",
        dadosPessoais[i].nome, dadosPessoais[i].endereco, dadosPessoais[i].tel);
}