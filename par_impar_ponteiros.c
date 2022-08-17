#include <stdio.h>

void par_impar(int *vet, int *vet_p, int *vet_i,int *tamanho_p, int *tamanho_i);

int main()
{

    int vet[5]={1,2,3,4,5}, vet_p[5], vet_i[5];
    int i, tamanho_p=0, tamanho_i=0;   //tamananho do vetor de pares e ímpares

    par_impar(vet,vet_p,vet_i,&tamanho_p,&tamanho_i);

    for(i=0;i<tamanho_p;i++)
        printf("%d ", vet_p[i]);
    printf("\n");
    for(i=0;i<tamanho_i;i++)
        printf("%d ", vet_i[i]);
}
void par_impar(int *vet, int *vet_p, int *vet_i, int *tamanho_p, int *tamanho_i){
    int i, j;
    for (i=0;i<5;i++){
        if(vet[i]%2==0){
            vet_p[*tamanho_p]=vet[i];
            *tamanho_p+=1;
        }
        else{
            vet_i[*tamanho_i]=vet[i];
            *tamanho_i+=1;
        }
    }
}
