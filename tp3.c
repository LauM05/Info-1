#include <stdio.h>

int main(int argc, char *argv[]) {
	
float peso=0, altura=0, imc=0;	
do{
printf("ingrese su peso:");
scanf("%f", &peso);
	if(peso <= 0){ 
		printf("ERROR: Peso negativo\n");}
}while (peso <= 0);
do{
printf("ingrese su altura (m):");
scanf("%f", &altura);
	if(altura <= 0){
		printf("ERROR: Altura negativa\n");}
}while(altura <= 0);

	imc= peso/(altura*altura);

printf("su indice de masa corporal es: %.2f\n",imc);

if( imc > 18.5){
	if(imc > 24.9){
		if(imc > 29.9){
			printf("Usted tiene Sobrepeso");}
	
	}else{printf("Usted tiene un peso normal");}	

}else{printf("Ustede tiene bajo peso");}
	
	
	return 0;
}

