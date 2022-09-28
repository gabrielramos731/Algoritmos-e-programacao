#include<stdio.h>
#include<stdlib.h>

const int L = 3, C = 2;

float **alocaMatriz(int L, int C);
void freeMatriz(float **mat, int L);

int main(){
    float **mat;
    int i, j;
    
    mat = alocaMatriz(L,C);
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            scanf("%f", &mat[i][j]);
        }
    }
    for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
    freeMatriz(mat,L);
}

float **alocaMatriz(int L, int C){
   int i;
   float **mat;
   
   mat = (float **) calloc(L,sizeof(float *));
   for(i=0; i<L; i++){
        mat[i] = (float *) calloc(C, sizeof(float));
   }
   return mat;
}

void freeMatriz(float **mat, int L){
    int i;

    for(i=0; i<L; i++){
        free(mat[i]);
    }
    free(mat);
}
