#include <stdio.h>

void pastel_ord(int *vet, int tamanho);
void batata_rep(int *vet, int *vet_rep, int *k);
int busca(int valor, int *vet_rep, int k);

int main()
{
              //1,2,2,3,3,3
    int vet[6]={2,1,3,3,2,3}, vet_rep[6];
    int i, k=0;   //contador de vet_intersec

    pastel_ord(vet,6);
    batata_rep(vet,vet_rep,&k);

    for(i=0;i<6;i++)
        printf("%d ", vet[i]);
    printf("\nrepetidos: ");
    for(i=0;i<k;i++)
        printf("%d ", vet_rep[i]);

}

//ordena o vetor
void pastel_ord(int *vet, int tamanho){
    int i,j,temp;
    for(i=0;i<tamanho-1;i++){
        for(j=i+1;j<tamanho;j++){
            if(vet[i]>vet[j]){
                temp=vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
        }
    }
}

//adiciona os valores repetidos em vet_rep
void batata_rep(int *vet, int *vet_rep, int *k){
    int i, j;
    for(i=0;i<6;i++){
        if(vet[i]==vet[i-1] && busca(vet[i],vet_rep,*k)==0){   //compara o valor com o valor anterior e verifica se é repetido
            vet_rep[*k]=vet[i];   //adiciona ao vetor de repetidos
            *k+=1;   //posição e tamanho de vet_rep   
        }
    }
}

//verifica se vet[i] já está em vet_inrsec
int busca(int valor, int *vet_rep, int k){
    int i;
    for(i=0;i<k;i++){
        if(valor==vet_rep[i])
            return 1;
    }
    return 0;
}
