#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1, n2, i;
    int *vet1, *vet2, *vetUni;

    printf("Quantidade vet1 e vet2: ");
    scanf("%d %d", &n1, &n2);

    vet1 = (int *) calloc(n1, sizeof(int));
    vet2 = (int *) calloc(n2, sizeof(int));
    printf("Primeiro vetor:\n");
    for(i=0; i<n1; i++)
        scanf("%d", &vet1[i]);
    printf("Segundo vetor:\n");
    for(i=0; i<n2; i++)
        scanf("%d", &vet2[i]);
    

}
