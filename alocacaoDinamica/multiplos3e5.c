/*
    Recebe um valor n e preenche um vetor com n posições,
    imprimindo os múltiplos simultâneos de 3 e 5.
*/
#include<stdio.h>
#include<stdlib.h>


void * multiplos(int *vet, int n, int *cont);

int main(){
    int n, i, cont = 0;   //posicao e contador de vetMult
    int *vet, *vetMult;   //ponteiros dos vetores de valores e múltiplos

    printf("Quantos valores? ");
    scanf("%d", &n);   //tamanho do vetor

    vet = (int *) calloc(n, sizeof(int));   //vetor de valores passados pelo usuário
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);

    vetMult = multiplos(vet, n, &cont);   //recebe o vetor de múltiplos de 3 e 5
    for(i=0; i<cont; i++)
        printf("%d ", vetMult[i]);
}
//retorna o vetor de multiplos
void * multiplos(int *vet, int n, int *cont){   //passa o vetor de valores, a quantidade, um contador do vetor de múltiplos
    int i;
    int *vetMultF;   //ponteiro do vetor de multiplos
    
    vetMultF = (int *) calloc(*cont, sizeof(int));   //aloca o vetMultF
    for(i=0; i<n; i++){
        if(vet[i]%3 == 0 && vet[i]%5 == 0){
            vetMultF[*cont] = vet[i];
            *cont+=1;   //contador e posicao de vetMultF
        }
    }

    return vetMultF;   //retorna o ponteiro de vetMultF
}
