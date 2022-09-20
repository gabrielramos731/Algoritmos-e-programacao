#include<stdio.h>
#include<stdlib.h>

void * multiplos(int *vet, int n, int *cont);

int main(){
    int n, i, cont = 0;
    int *vet, *vetMult;

    printf("Quantos valores? ");
    scanf("%d", &n);

    vet = (int *) calloc(n, sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);

    vetMult = multiplos(vet, n, &cont);
    for(i=0; i<cont; i++)
        printf("%d ", vetMult[i]);
}

void * multiplos(int *vet, int n, int *cont){
    int i;
    int *vetMultF;
    
    vetMultF = (int *) calloc(*cont, sizeof(int));
    for(i=0; i<n; i++){
        if(vet[i]%3 == 0 && vet[i]%5 == 0){
            vetMultF[*cont] = vet[i];
            *cont+=1;
        }
    }
    
    return vetMultF;
}
