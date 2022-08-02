#include<stdio.h>

int main(){

    int vet[5]={4,2,1,3,0};
    int i, j, temp;

    for(i=0; i<4; i++)   //fixa em um valor do array
        for(j=i+1; j<5; j++)   //vai comparando os valores seguintes com o fixado
            if(vet[j]<vet[i]){   //caso menor, é feito a troca
                temp=vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
    for(i=0; i<5; i++)
        printf("%d ", vet[i]);
}
/*O contador 'i' pode ir só até a penúltima casa e comparar com o último
O valor em vet[i] irá mudar sempre que vet[j]<vet[i], mas o 'i' só muda quando 'j' chega ao fim*/
