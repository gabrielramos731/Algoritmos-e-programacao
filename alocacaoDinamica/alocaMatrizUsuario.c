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
