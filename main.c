#include <stdio.h>
#include <stdlib.h>
#include "headers/magnitudes.h"

void menu_principal();

int main(){
	system("clear");
	printf("\t.:: Bienvenido al conversor de unidades ::.\n");
	menu_principal();

	return 0;
}

void menu_principal(){
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
			if (menu1_temp()=='r')
			{
				system("clear");
				menu_principal();
				break;
			}

			else
			{
				menu2_temp();
				conversion_temp();
			}

			break;


	}
}
