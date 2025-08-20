#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
float calcularAreaRectangulo(float high , float Long){
return high*Long;
}

float calcularPerimetroRectangulo(float high , float Long){
return 2*(high + Long);
}

float calcularDiagonalRectangulo(float high , float Long){
return sqrt(pow(high,2)+pow(Long,2));
}

float calcularPerimetroCirculo(float radio){
    return 2*PI*radio;
}

float calcularAreaCirculo(float radio){
    return PI*pow(radio,2);
}

void imprimirResultados(int seleccion, float area , float perimetro , float diagonal){
    switch (seleccion)
    {
    case 1:
        printf("Area del rectangulo:%.2f\n", area);
        printf("Perimetro del rectangulo:%.2f\n", perimetro);
        printf("Diagonal del rectangulo:%.2f\n", diagonal);
        break;
   
    case 2:
        printf("Area del circulo:%.2f\n", area);
        printf("Perimetro del circulo:%.2f\n", perimetro);
        break;

    default:
        break;
    }
}

int main (void){

    int selc = 0;
    float h = 0 , l = 0 , r = 0, area = 0 , per = 0 , diag = 0; 
    
    do{
        printf("Ingrese la fijura que desea calcular (1: Rectangulo, 2: Circulo):");
        scanf("%d", &selc);
        
        if(selc < 1 || selc > 2){
            printf("Opcion Incorrecta.\n");}
    }
        while(selc < 1 || selc > 2 );

    switch (selc)
    {
    case 1:
        printf("Rectangulo seleccionado\n");
        
        printf("Ingrese la altura del rectagulo:");
        scanf("%f", &h);

        printf("Ingrese el largo del rectagulo:");
        scanf("%f", &l);

        area = calcularAreaRectangulo(h , l);
        per = calcularPerimetroRectangulo(h , l);
        diag = calcularDiagonalRectangulo(h , l);
        
        break;
    case 2:
        printf("Circulo seleccionado\n");
        
        printf("Ingrese el radio del circulo:");
        scanf("%f", &r);

        area = calcularAreaCirculo(r);
        per = calcularPerimetroCirculo(r);
        
    default:
        break;
    }
    imprimirResultados(selc, area , per , diag );

    return 0;
}