#include<stdio.h>

int main(){
    int mat[3][3];
    int i, j, val;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &val);
            *(*(mat+i)+j) = val;
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%2d ", *(*(mat+i)+j));
        }
        printf("\n");
    }
}
