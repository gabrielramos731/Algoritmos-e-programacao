#include<stdio.h>

int main(){

    int vet[7]={2,4,6,8,10,12,14};
    int val=14,i=0;
    int l=0,r=7;
    int mid=(l+r)/2;   //arredonda para baixo
    
    while(l<r){
        mid=(l+r)/2;
        if(vet[mid]==val){
            printf("posicao %d, valor %d encontrado", mid, vet[mid]);
            return 1;
        }
        else if(vet[mid]<val)
            l=mid+1;
        else if(vet[mid]>val)
            r=mid-1;
    }
    printf("-1");
}
