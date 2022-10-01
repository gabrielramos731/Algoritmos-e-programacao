#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * lerAposta(int quantApostas);

int main(){
    int *valoresApostados;
    int quantApostas;

    printf("Quantos numeros deseja apostar: ");
    scanf("%d", &quantApostas);

    valoresApostados = lerAposta(quantApostas);
}

int * lerAposta(int quantApostas){
    int *vetApostas;
    int i;

    vetApostas = (int *) calloc(quantApostas, sizeof(int));
    printf("Digite seus numeros: ");
    for(i=0; i<quantApostas; i++)
        scanf("%d", &vetApostas[i]);
    return vetApostas;
}