#include <stdio.h>
#include <stdlib.h>
#include "headers/magnitudes.h"

void convertir();

int main(){
	system("clear");
	printf("\t.:: Bienvenido al conversor de unidades ::.\n");
	convertir();

	return 0;
}

void convertir(){
	int opt;

	printf("\nMagnitudes disponibles: \n\n");
	printf("1) Longitud\n");
	printf("2) Temperatura\n");
	printf("\nTu seleccion > ");
	scanf("%i", &opt);
	putchar('\n');
	system("clear");
	while(getchar()!='\n');

	switch (opt) {
		case 1:
			menu_long();
			conversion_long();
			break;
		case 2:
			menu_temp();
			conversion_temp();
			break;

	}
}
