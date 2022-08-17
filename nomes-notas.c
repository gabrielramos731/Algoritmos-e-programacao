#include <stdio.h>

void func(char nomes[][20], float *notas, int *idade, int *aprovado);

int main(){

    char nomes[3][20];
    float notas [3]={70,55,80};
    int idade[3]={18,20,17};
    int aprovado[3];
    int i, j;

    for(i=0; i<3; i++)
            scanf("%s",&nomes[i]);
    func(nomes, notas, idade, aprovado);
}

void func(char nomes[][20], float *notas, int *idade, int *aprovado){

    int i, j;
    for(i=0; i<3; i++){
        if(notas[i]>=70){
            aprovado[i]=1;
            printf("%s APROVADO!\n", nomes[i]);
        }
        else
            aprovado[i]=0;
    }
    for(i=0;i<3;i++){
        if(idade[i]>=18)
            printf("\n%s MAIOR DE IDADE", nomes[i]);
    }
}
