#include<stdio.h>

void func(int tamanho, int *vet, int *maior, int *quant_pares, int *sum_imp, int *div_5);

int main(){

    int vet[6]={1,2,3,4,5,6};
    int maior, quant_pares=0, sum_imp=0, div_5=0;

    func(6,vet,&maior,&quant_pares,&sum_imp,&div_5);
    printf("%d %d %d %d",maior, quant_pares, sum_imp, div_5);

}

void func(int tamanho, int *vet, int *maior, int *quant_pares, int *sum_imp, int *div_5){
    int i;
    *maior=vet[0];
    for(i=0; i<tamanho; i++){
        if(vet[i]>*maior)
            *maior=vet[i];
        if(vet[i]%2==0)
            *quant_pares+=1;
        else
            *sum_imp+=vet[i];
        if(vet[i]%5==0)
            *div_5+=1;
    }
}