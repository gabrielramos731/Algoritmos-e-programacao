#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * lerAposta(int quantApostas);
int * sorteiaValores(int quantApostas);
int * comparaAposta(int *valoresApostados, int quantApostas, int *valoresSorteados, int n, int *contAcertos);

int main(){
    int *valoresApostados, *valoresSorteados, contAcertos = 0, *vetAcertos;
    int quantApostas, i;

    printf("Quantos numeros deseja apostar: ");
    scanf("%d", &quantApostas);

    valoresApostados = lerAposta(quantApostas);
    valoresSorteados = sorteiaValores(20);
    vetAcertos = comparaAposta(valoresApostados,quantApostas,valoresSorteados,20,&contAcertos);

    printf("Voce acertou %d valor(es)!\n", contAcertos);

    for(i=0; i<contAcertos; i++)
        printf("%d ", vetAcertos[i]);
    free(vetAcertos);
}

int * lerAposta(int quantApostas){
    int *vetApostas;
    int i;

    vetApostas = (int *) calloc(quantApostas, sizeof(int));
    printf("Digite seus numeros (entre 0 e 100): ");
    for(i=0; i<quantApostas; ){
        scanf("%d", &vetApostas[i]);
        if(vetApostas[i]<0 || vetApostas[i]>100){
            printf("Valor invalido\n");
            continue;
        }
        i++;
    }
    return vetApostas;
}

int * sorteiaValores(int n){
    int *vetSorteados;
    int i, j, valor, cont = 0;

    srand(time(NULL));
    vetSorteados = (int *) calloc(n, sizeof(int));
    for(i=0; i<n; ){
        valor = rand()%101;
        for(j=0; j<i; j++){
            if(valor==vetSorteados[j]){
                cont++;
                break;
            }
        }
        if(cont==0){
            vetSorteados[i] = valor;
            i++;
        }
        cont = 0;
    }
    return vetSorteados;
}

int * comparaAposta(int *valoresApostados, int quantApostas, int *valoresSorteados, int n, int *contAcertos){
    int *vetAcertos;
    int i, j;

    vetAcertos = (int *) calloc(n, sizeof(int));
    for(i=0; i<quantApostas; i++){
        for(j=0; j<n; j++){
            if(valoresApostados[i]==valoresSorteados[j]){
                vetAcertos[*contAcertos] = valoresApostados[i];
                *contAcertos+=1;
                break;
            }
        }
    }
    vetAcertos = (int *) realloc(vetAcertos, *contAcertos*sizeof(int));
    free(valoresApostados);
    free(valoresSorteados);

    return vetAcertos;
}
