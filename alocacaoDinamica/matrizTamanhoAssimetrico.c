#include<stdio.h>
#include<stdlib.h>

void **alocaMatrizAssimetrica(int *vet, int tamanhoVet);

int main(){
    int *vet, tamanhoVet;
    int **mat;
    int i;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanhoVet);

    vet = (int *) calloc(tamanhoVet, sizeof(int));
    printf("Preencha o vetor: ");
    for(i=0; i<tamanhoVet; i++)
        scanf("%d", &vet[i]);
    mat = alocaMatrizAssimetrica(vet,tamanhoVet);
}

void **alocaMatrizAssimetrica(int *vet, int tamanhoVet){
    int **mat;
    int i;

    mat = (int **) calloc(tamanhoVet, sizeof(int *));
    for(i=0; i<tamanhoVet; i++){
        mat[i] = (int *) calloc(vet[i], sizeof(int));
    }
    return mat;
}