#include<stdio.h>

int main(){

  int vet[10] = {1,2,3,15,5,6,7,11,9,10};
  int maior = vet[0];
  int TAM = 10;
  
  maior = encontraMaior(vet, TAM, maior);

  printf("%d", maior);  //15
}

int encontraMaior(int *vet, int tam, int maior){

  if(tam == 0)
    return maior;

  else if(vet[tam] > maior)
    maior = vet[tam];
  
  return encontraMaior(vet, tam-1, maior);
}
