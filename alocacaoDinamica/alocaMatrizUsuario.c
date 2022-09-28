#include<stdio.h>
#include<stdlib.h>

float **alocaMatriz(int linhas, int colunas);

int main(){
    int linhas, colunas;
    float **mat;

    printf("Quantas linhas: ");
    scanf("%d", &linhas);
    printf("Quantas colunas: ");
    scanf("%d", &colunas);

    mat = alocaMatriz(linhas,colunas);
    preencheMatriz(mat, linhas, colunas);
}

float **alocaMatriz(int linhas, int colunas){
    float **mat;
    int i;

    mat = (float **) calloc(linhas, sizeof(float *));
    for(i=0; i<linhas; i++){
        mat[i] = (float *) calloc(colunas, sizeof(float));
    }
    return mat;
}

void preencheMatriz(float **mat, int linhas, int colunas){
    int i, j;

    printf("Digite a matriz: ");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            scanf("%f", &mat[i][j]);
        }
    }
}