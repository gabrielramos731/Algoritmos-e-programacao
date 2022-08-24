#include<stdio.h>

int busca(int *vet, int valor);

int main(){

    int vet[16]={4,7,9,13,16,19,23,30,45,56,59,60,69,89,96,99};
    int valor;
    scanf("%d",&valor);

    printf("%d",busca(vet,valor));
}

int busca(int *vet, int valor){
    int i;
    for(i=0;i<16;i++){
        if(valor==vet[i])
            return i;
    }
    return -1;
}