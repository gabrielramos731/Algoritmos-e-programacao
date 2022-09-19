#include<stdio.h>
#include<stdlib.h>

void * func(int n);

int main(){
    int n, i, *vet;
    
    printf("How many numbers do you want to store: ");
    scanf("%d", &n);

    vet = func(n);

    for(i=0; i<n; i++)
        printf("%d ", vet[i]);
    free(vet);
}

void * func(int n){
    int *vet, i;

    vet = (int *) calloc(n, sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
    return vet;
}