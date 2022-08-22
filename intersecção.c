#include<stdio.h>

void ordena(int *vet1, int tamanho);
void intersec(int *vet1, int *vet2, int *vet_intersec, int *k, int tamanho);

int main(){
    int vet1[5]={5,4,2,3,2,1}, vet2[5]={4,3,2,4,2,2}, vet_intersec[5];
    int i,k=0;

    ordena(vet1,5);
    intersec(vet1,vet2,vet_intersec,&k,5);
    for(i=0;i<k;i++)
        printf("%d ", vet_intersec[i]);
}

//ordena o vet1
void ordena(int *vet1, int tamanho){
    int i, j, temp;
    for(i=0;i<tamanho-1;i++)
        for(j=i+1;j<tamanho;j++)
            if(vet1[i]>vet1[j]){
                temp=vet1[i];
                vet1[i]=vet1[j];
                vet1[j]=temp;
            }
}

//faz a intersecção dos vetores
void intersec(int *vet1, int *vet2, int *vet_intersec, int *k, int tamanho){
    int i, j;   //controladores de vet1 e vet2
    for(i=0;i<tamanho;i++){   //trava um valor de vet1
        for(j=0;j<tamanho;j++){   //percorre o vet2
            if(vet1[i]==vet1[i-1])   //evitar valor repetido no primeiro vetor
                break;
            if(vet1[i]==vet2[j]){
                vet_intersec[*k]=vet1[i];
                *k+=1;   //'k' é o contador e tamanho de vet_intersec
                break;   //evitar valor repetido do segundo vetor
            }
        }
    }
}

