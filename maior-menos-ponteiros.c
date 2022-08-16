#include <stdio.h>

void func(float vet[3], float *ma, float *me, float *med);

int main()
{
    float vet[3]={1,2,2};
    float maior, menor, media;
    func(vet, &maior, &menor, &media);
    printf("%.2f %.2f %.2f", maior, menor, media);
}

void func(float vet[3], float *ma, float *me, float *med){
    int i;
    *ma=*me=vet[0];
    for(i=0; i<3;i++){
        if(vet[i]>*ma)
            *ma=vet[i];
        else if(vet[i]<*me)
            *me=vet[i];
        *med=*med+vet[i];
    }
    *med = *med/i;
}
