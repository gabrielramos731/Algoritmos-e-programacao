#include<stdio.h>
#include<stdlib.h>

void * uniao(int *vet1, int n1, int *vet2, int n2);
void ordena(int *vet, int tam);
void repetidos(int *vet, int tam, int *vetSemRep, int *j);

int main(){
    int n1, n2, i, tamVetUni, j = 0;
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
    
    tamVetUni = n1+n2;
    vetUni = uniao(vet1, n1, vet2, n2);
    ordena(vetUni, tamVetUni);
    int vetSemRep[tamVetUni];
    repetidos(vetUni, tamVetUni, vetSemRep, &j);

    printf("Vetor uniao: \n");
    for(i=0; i<j; i++)
        printf("%d ", vetSemRep[i]);
    free(vetUni);   //desaloca vetUni
}

//cria e retorna o vetor uniao
void * uniao(int *vet1, int n1, int *vet2, int n2){
        int i, j;
        int *vetUniF;

        vetUniF = (int *) realloc(vet1, (n1+n2)*sizeof(int));   //realoca e preenche vetUniF
        for(i=n1, j=0; j<n2; i++, j++)
            vetUniF[i] = vet2[j];
        free(vet2);   //desaloca vet2
        return vetUniF;
}

//ordena o vetor uniao
void ordena(int *vet, int tam){
    int temp, i, j;
    
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
            if(vet[i]>vet[j]){
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

void repetidos(int *vet, int tam, int *vetSemRep, int *j){
    int i;

    for(i=0; i<tam; i++){
        if(vet[i]==vet[i-1]){
            continue;
        }
        else{
            vetSemRep[*j] = vet[i];
            *j+=1;
        }
    }

}