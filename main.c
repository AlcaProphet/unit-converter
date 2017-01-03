#include <stdio.h>
#include <stdlib.h>
#include "headers/magnitudes.h"

void menu_principal();

int main()
{
	system("clear");
	printf("\t.:: Bienvenido al conversor de unidades ::.\n");
	menu_principal();

	return 0;
}

void menu_principal()
{
	int opt;

	printf("\nMagnitudes disponibles: \n\n");
	printf("1) Longitud\n");
	printf("2) Temperatura\n");
	printf("3) Tiempo\n");
	printf("\nTu seleccion > ");
	scanf("%i", &opt);
	putchar('\n');
	system("clear");
	while(getchar()!='\n');

	switch (opt)
	{
		case 1:
			if (menu1_long()==0)
			{
				system("clear");
				menu_principal();
			}

			else
			{
				menu2_long();
				conversion_long();
			}
			break;

		case 2:
			if (menu1_temp()=='r')
			{
				system("clear");
				menu_principal();
			}

			else
			{
				menu2_temp();
				conversion_temp();
			}
			break;

		case 3:
			if (menu1_tiempo()==0)
			{
				system("clear");
				menu_principal();
			}
			
			else
			{
				menu2_tiempo();
				//conversion_tiempo();
			}
			break;
	}
}
