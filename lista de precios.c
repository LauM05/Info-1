#include <stdio.h>
#define TAM 5

int main (void){

float precios[TAM] = {0}, max = 0 , min = 1000000; 
int codigos[TAM] = {0} , a = 0 , b = 0;

printf("Ingrese %d productos, se solicitara el precio y codigo:\n", TAM);



for (int i = 0; i < TAM; i++){
    
    do{
        
        printf("Ingrese el codigo del %d producto:", i + 1);
        scanf("%d", &codigos[i]);
        
        if (codigos[i] < 1 || codigos[i] > 999999999)
        {
            printf("ERROR: El codigo debe estar entre 1-999999999.\n");
        }
        
    }while (codigos[i] < 1 || codigos[i] > 999999999);

    do
    {
        printf("Ingrese el precio del %d producto:", i + 1);
        scanf("%f", &precios[i]);
        
        if (precios[i] < 1)
        {
           printf("ERROR: El precio no puede ser negativo.\n");
        }
        
    } while (precios[i] < 1);

        if (precios[i] > max)
        {
            max = precios[i];
            a = i;
        }
        if (precios[i] < min)
        {
            min = precios[i];
            b = i;
        }
}
     printf("codigos:        Precios:\n");
for (int i = 0; i < TAM; i++)
{
    printf("%9d         %.2f\n", codigos[i] , precios[i]);
}

printf("Mas Caro[%d]:%.2f\n",   codigos[a] , precios[a]);
printf("Mas barato[%d]:%.2f\n", codigos[b] , precios[b]);


return 0; 
}