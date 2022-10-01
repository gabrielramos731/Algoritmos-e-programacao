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
    printf("Digite seus numeros (entre 0 e 100): ");
    for(i=0; i<quantApostas;){
        scanf("%d", &vetApostas[i]);
        if(vetApostas[i]<0 || vetApostas[i]>100){
            printf("Valor invalido\n");
            continue;
        }
        i++;
    }
    return vetApostas;
}
