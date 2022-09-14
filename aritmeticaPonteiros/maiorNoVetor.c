#include<stdio.h>

int main(){
    float vet[10] = {4,2,6,2,8,7,3,9,2,3};
    float maior = *(vet);

    for(int i=0; i<10; i++){
        if(*(vet+i)>maior)
            maior = *(vet+i);
    }
    printf("%.0f", maior);
}