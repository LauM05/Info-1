#include <stdio.h>

int main(int argc, char *argv[]) {
	int N;
	printf("Ingrese Nota:");
	scanf("%d", &N);
	if (N >=60){
		if (N >= 70){
			if (N >= 80){
				if (N >= 90){
					printf("calificacion: A");
				}else printf("Calificacion: B");
			}else printf("Calificocion: C");
		}else printf("Calificacion: D");
	}else printf("Calificacion: F");
	return 0;
}

