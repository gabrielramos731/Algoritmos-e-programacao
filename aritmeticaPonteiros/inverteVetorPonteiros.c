#include<stdio.h>

int main(){
    int vet[8] = {4,7,8,2,3,4,1,3};
    int temp, i, j;

    for(i=0, j=7; i<j; i++, j--){
        temp = *(vet+i);
        *(vet+i) = *(vet+j);
        *(vet+j) = temp;
    }

    for(i=0; i<8; i++)
        printf("%d ", *(vet+i));
}
