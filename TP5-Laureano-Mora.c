#include <stdio.h>
int main (void){

    int max = 0, min = 0, est = 0; 
    float promedio = 0.0 , maxx = -1.0 , minn = 101.0 , suma = 0.0 , nota = 0.0;

do{
        printf("Ingrese la cantidad de estudiantes:");
        scanf("%d", &est);

        if( est <= 0){printf("ERROR: el numero debe ser positivo.\n");}

    } while( est <= 0);

for(int i = 1 ; i <= est ; i++){

    do{
        printf("ingrese la nota del %d° estudiante:", i );
        scanf("%f", &nota);
    
    }while( nota < 0 || nota > 100);

    suma += nota; 
   
    if(nota > maxx ){
       maxx = nota; 
    }
   
    if(nota < minn){
       minn = nota; 
    }
}

promedio = suma / est;


printf("Calificacion promedio: %.2f\n", promedio);
printf("Calificacion Maxima: %.f\n", maxx);
printf("calificacion Minima: %.f\n", minn);

// https://github.com/LauM05/Info-1
    return 0;
}
