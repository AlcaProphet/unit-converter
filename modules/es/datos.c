#include <stdio.h>

int opt1, opt2;
float dato, res;

int menu1_datos()
{
	printf("1) Bit\n");
	printf("2) Byte\n");
	printf("3) Kilobyte\n");
	printf("4) Megabyte\n");
	printf("5) Gigabyte\n");
	printf("6) Terabyte\n");
	printf("7) Petabyte\n");
	printf("\n(Escribe 0 para regresar al menu principal)\n");

	printf("\nConvertir esta unidad... > ");
	scanf("%i", &opt1);
	while(getchar()!='\n'); //limpiando el buffer
	return opt1;
}

void menu2_datos()
{
	printf("\tIngresa el dato: ");
	scanf("%f", &dato);
	while(getchar()!='\n'); //limpiando el buffer

	printf("\nA esta unidad... > ");
	scanf("%f", &opt2);
}