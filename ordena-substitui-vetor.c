#include<stdio.h>

void func(float vet[5]);
void ordena(float vet[5]);

int main(){
    int i;
    float vet[5]={4,-3,6,-9,30};   //vetor original

    func(vet);
    ordena(vet);
    for(i=0; i<5; i++)
        printf("%.2f ", vet[i]);

}
//substitui os negativos por 0
void func(float vet[5]){
    int i;
    for(i=0; i<5; i++)   
        if(vet[i]<0)
            vet[i]=0;   //substituiu os negativos
}

//ordena o vetor
void ordena(float vet[5]){
    int i, j, temp;
    for(i=0; i<4; i++)
        for(j=i+1; j<5; j++)
            if(vet[i]>vet[j]){   //ordena o vetor (selection sort)
                temp=vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
    while(vet[0]==0){   //coloca os 0's no final do vetor
        for(i=0;i<4;i++){
            temp=0;
            vet[i]=vet[i+1];
        }
        vet[4]=temp;
    }
}
