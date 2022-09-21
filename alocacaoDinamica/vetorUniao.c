#include<stdio.h>
#include<stdlib.h>

void * uniao(int *vet1, int n1, int *vet2, int n2);

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
    
    vetUni = uniao(vet1, n1, vet2, n2);
    for(i=0; i<n1+n2; i++)
        printf("%d ", vetUni[i]);

}

void * uniao(int *vet1, int n1, int *vet2, int n2){
        int i, j;
        int *vetUniF;

        vetUniF = (int *) realloc(vet1, (n1+n2)*sizeof(int));
        for(i=n1, j=0; j<n2; i++, j++){
            vetUniF[i] = vet2[j];
        }
        return vetUniF;
}
