#include <stdio.h>

void pastel_ord(int *vet, int tamanho);
void batata_rep(int *vet, int *vet_rep, int *k);

int main()
{
              //1,2,2,3,3,3
    int vet[6]={2,1,3,3,2,3}, vet_rep[6];
    int i, k=0;

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
    int i, j, cont=0;
    for(i=0;i<6;i++){
        if(vet[i]==vet[i-1]){   //compara o valor com o valor anterior
            for(j=0;j<*k;j++){   //varre o vetor de repetidos verificando se vet[i] já esta contido nos repetidos
                if(vet[i]==vet_rep[j])
                    cont++;
            }
            if(cont==0){
                vet_rep[*k]=vet[i];   //adiciona ao vetor de repetidos
                *k+=1;   //posição e tamanho de vet_rep
            }
            cont=0;
        }
    }
}
