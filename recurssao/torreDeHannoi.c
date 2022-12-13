#include<stdio.h>

int main(){

  int n = 4;
  int quantPassos;

  quantPassos = moverDiscos(n);
  printf("%d", quantPassos);
}

int moverDiscos(int n){    

  if(n == 1)
    return 1;
  else
    return 1 + (2*moverDiscos(n-1));
}
