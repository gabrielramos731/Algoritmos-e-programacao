#include<stdio.h>
#include<stdlib.h>

void * func(int n);

//recive the lenght of vector, alocattes and assign the vector
int main(){
    int n, i, *vet;
    
    printf("How many numbers do you want to store: ");
    scanf("%d", &n);

    vet = func(n);

    for(i=0; i<n; i++)
        printf("%d ", vet[i]);
    free(vet);   //deallocates the memory
}


//allocates the vector and return to main
void * func(int n){
    int *vet, i;

    vet = (int *) calloc(n, sizeof(int));   //allocates vector dinamically
    for(i=0; i<n; i++)
        scanf("%d", &vet[i]);
    return vet;   //return the vector memory address to main
}
