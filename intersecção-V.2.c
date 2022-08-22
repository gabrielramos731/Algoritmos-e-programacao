#include<stdio.h>

int intersec(int *vet1, int *vet2, int *vet_intersec, int tamanho);
int busca(int valor, int *vet_intersec, int tamanho_inters);
void ordena(int *vet_intersec, int cont_inter);

int main(){    //1,2,2,3,4,5          //2,2,2,3,4,4
    int vet1[6]={5,4,2,3,2,1}, vet2[6]={4,3,2,4,2,2}, vet_intersec[6];
    int i, cont_inter;

    cont_inter = intersec(vet1,vet2,vet_intersec,6);
    ordena(vet_intersec,cont_inter);

    for(i=0;i<cont_inter;i++)
        printf("%d ", vet_intersec[i]);
}

//faz a intersecção dos vetores
int intersec(int *vet1, int *vet2, int *vet_intersec, int tamanho){
    int i, j, cont_inter=0;   //controladores de vet1, vet2 e posição de vet_intersec
    for(i=0;i<tamanho;i++){   //trava um valor de vet1
        for(j=0;j<tamanho;j++){   //percorre o vet2
            if((vet1[i]==vet2[j]) && (busca(vet1[i],vet_intersec,cont_inter)==0)){   //verifica se esta na intersecção e se é repetido(já foi adicionado)
                vet_intersec[cont_inter]=vet1[i];
                cont_inter++;
            }
        }
    }
    return cont_inter;   //retorna o tamanho de vet_intersec
}

//verifica se o valor da intersecção já foi adicionado a vet_intersec
int busca(int valor, int *vet_intersec, int tamanho_inters){
    int i;
    for(i=0;i<tamanho_inters;i++){
        if(valor==vet_intersec[i])
            return 1;
    }
    return 0;
}

//ordena vet_intersec
void ordena(int *vet_intersec, int cont_inter){
    int i, j, temp;
    for(i=0;i<cont_inter-1;i++){
        for(j=i+1;j<cont_inter;j++){
            if(vet_intersec[i]>vet_intersec[j]){
                temp=vet_intersec[i];
                vet_intersec[i]=vet_intersec[j];
                vet_intersec[j]=temp;
            }
        }
    }
}
