#include<stdio.h>

void conta12(int *M[][4], int *vetCont);

int main(){

    int M[4][4]={3,12,6,1,13,5,56,12,2,12,0,12,16,5,8,2};
    int vetCont[4]={0,0,0,0};
    int i;

    conta12(M,vetCont);

    for(i=0;i<4;i++)
        printf("%d ",vetCont[i]);
}

void conta12(int *M[][4], int *vetCont){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(M[i][j]==12){
                vetCont[i]+=1;
            }
        }
    }
}