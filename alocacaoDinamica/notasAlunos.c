#include<stdio.h>
#include<stdlib.h>

//Assigns n grades to an array and prints the greatest grade and avarage grade 
void * assignsGrades(int n, float *greatestGrade, float *average);

int main(){
    float *grades, greatestGrade=0, average=0;
    int n, i;
    printf("Hoy many grades: ");
    scanf("%d", &n);

    grades = assignsGrades(n, &greatestGrade, &average);

    for(i=0; i<n; i++)
        printf("%.2f ", grades[i]);
    printf("\nAverage: %.2f\nGreatest grade: %.2f", average, greatestGrade);
}

//allocates the array and assigns the values of greatesGrade and mean
void * assignsGrades(int n, float *greatestGrade, float *average){
    int i;
    float *vet;
    
    vet = (float *) calloc(n, sizeof(float));   //dynamics allocation
    printf("Type grades: ");
    for(i=0; i<n; i++){
        scanf("%f", &vet[i]);
        *average += vet[i];
    }
    *average /= n;
    *greatestGrade = vet[0];
    for(i=0; i<n; i++){
        if(*greatestGrade<vet[i])
            *greatestGrade = vet[i];
    }

    return vet;   //returns the array memory addres to main 
}
