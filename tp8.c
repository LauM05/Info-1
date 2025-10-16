// https://github.com/LauM05/Info-1
#include <stdio.h> 
#include <stdlib.h> 
#define TAM 20

int cuantas_piezas(int); 
int rectificable(float, float); 
int rechazada(float, float); 
void cargar_piezas(float *, int); 
int contar(int (*)(float, float), float, float *, int); 
float* reservar_memoria(int); 
void segregar(int (*)(float, float), float, float *, int, float *); 
void mostrar_piezas(char *, float *, int); 

int main (void) { 

    float diametros[TAM] = {0} ;  
    int n; 
    float max = 12; 
    float min = 10; 
    float *p;
    int (*criterio)(float, float);

    
    n = cuantas_piezas(TAM); 
    p = diametros;
    
cargar_piezas(p, n);

    int n_rectificar = contar(rectificable, max, diametros, n); 
    float *p_rectificables = reservar_memoria(n_rectificar); 

segregar(rectificable, max, diametros, n, p_rectificables); 

    int n_rechazar = contar(rechazada, min, diametros, n); 
    float *p_rechazadas = reservar_memoria(n_rechazar); 

segregar(rechazada, min, diametros, n, p_rechazadas); 

mostrar_piezas("rectificables", p_rectificables, n_rectificar); 
mostrar_piezas("rechazadas", p_rechazadas, n_rechazar);

free(p_rectificables);
free(p_rechazadas);
return 0; 
} 


int cuantas_piezas(int max) { 
int n; 
do { 
printf("Cuántas piezas ingresará? "); 
scanf("%d", &n); 
} while (n < 0 || n > max); 
return n; 
} 

void cargar_piezas(float *p, int n){
for(int i = 0; i < n ; i++){
   do{
    printf("Ingrese el diametro N°%d:", i+1);
    scanf("%f", (p+i));
    if(*(p+i) < 0){
        printf("Los diametros no pueden ser negativos.\n");}
   } while(*(p+i) < 0 );
}}

int contar(int (*criterio)(float ,float), float valor, float *p, int n ){
    int r = 0;
for(int i = 0 ; i < n ; i++){
   r += (*criterio)(*(p+i) , valor);
}return r;}
 

int rectificable(float diametro, float valor) { 
if (diametro > valor) 
return 1; 
else 
return 0; 
} 
int rechazada(float diametro, float valor) { 
if (diametro < valor) 
return 1; 
else 
return 0; 
}

float* reservar_memoria(int a){
    float *p;
    p = malloc(a * sizeof(float));
    if (p == NULL){
        printf("Error de asignacion de memoria.");
        exit(1);
    }
    return p; 
}

void segregar(int (*criterio)(float, float), float valor, float *p, int n, float *q){
    int j = 0;
    for(int i = 0 ; i < n ; i++){
    
        if ((*criterio)(*(p+i) , valor)){
            *(q+j) = (*(p+i));
            j++;
    }}}

void mostrar_piezas(char *c, float *q, int n){
    printf("Piezas %s: \n", c);
    for(int i = 0 ; i < n ; i++){
        printf("Diametro:%.3f\n", *(q+i));
    }
}