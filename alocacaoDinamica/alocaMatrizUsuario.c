#include<stdio.h>
#include<stdlib.h>

float **alocaMatriz(int linhas, int colunas);
void preencheMatriz(float **mat, int linhas, int colunas);
void freeMatriz(float **mat, int linhas);

int main(){
    int linhas, colunas;
    int i, j;
    float **mat;

    printf("Quantas linhas: ");
    scanf("%d", &linhas);
    printf("Quantas colunas: ");
    scanf("%d", &colunas);

    mat = alocaMatriz(linhas,colunas);
    preencheMatriz(mat, linhas, colunas);

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }

    freeMatriz(mat,linhas);
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

void freeMatriz(float **mat, int linhas){

    int i;

    for(i=0; i<linhas; i++)
        free(mat[i]);
    free(mat);
}

