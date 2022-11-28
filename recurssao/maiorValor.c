#include<stdio.h>

int main(){

  int vet[10] = {1,2,3,15,5,6,7,11,9,10};
  int cont = 0;
  int maior = vet[0];
  int TAM = 10;
  int i;
  
  maior = encontraMaior(vet, TAM, cont, maior);

  printf("%d", maior);  //15
}

int encontraMaior(int *vet, int tam, int cont, int maior){

  if(cont == tam)
    return maior;

  else if(vet[cont] > maior)
    maior = vet[cont];
  
  return encontraMaior(vet, tam, cont+1, maior);
}
