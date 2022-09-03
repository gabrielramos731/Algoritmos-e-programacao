#include<stdio.h>
#include<stdlib.h>

struct horario{
    int hora, minutos, segundos;
};
struct data{
    int dia, mes, ano;
};
struct compromisso{
    struct horario horario_comp;
    struct  data data_comp;
    char texto[100];
};

int main(){

    struct compromisso agenda[2];
    int i;

    for(i=0;i<2;i++){
        gets(agenda[i].texto);
        scanf("%d", &agenda[i].data_comp.dia);
        scanf("%d", &agenda[i].data_comp.mes);
        scanf("%d", &agenda[i].data_comp.ano);
        scanf("%d", &agenda[i].horario_comp.hora);
        scanf("%d", &agenda[i].horario_comp.minutos);
        scanf("%d%*c", &agenda[i].horario_comp.segundos);
        
    }
    for(i=0;i<2;i++){
        printf(agenda[i].texto);
        printf("\n%d", agenda[i].data_comp.dia);
        printf("\n%d", agenda[i].data_comp.mes);
        printf("\n%d", agenda[i].data_comp.ano);
        printf("\n%d", agenda[i].horario_comp.hora);
        printf("\n%d", agenda[i].horario_comp.minutos);
        printf("\n%d", agenda[i].horario_comp.segundos);
    }
}