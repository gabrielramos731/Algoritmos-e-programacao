#include<stdio.h>
#include<stdlib.h>

void **alocaMatrizAssimetrica(int *vet, int tamanhoVet);

int main(){
    int *vet, tamanhoVet;
    int **mat;
    int i, j;

    printf("Qual o tamanho do vetor (num. de linhas): ");
    scanf("%d", &tamanhoVet);

    vet = (int *) calloc(tamanhoVet, sizeof(int));
    printf("Preencha o vetor (colunas por linha): ");
    for(i=0; i<tamanhoVet; i++)
        scanf("%d", &vet[i]);
    mat = alocaMatrizAssimetrica(vet,tamanhoVet);

    //preenche a matriz
    for(i=0; i<tamanhoVet; i++){
        for(j=0; j<vet[i]; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    //imprime a matriz
    for(i=0; i<tamanhoVet; i++){
        for(j=0; j<vet[i]; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
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
