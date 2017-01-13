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

void convertir_datos()
{
	switch(opt1)
	{
		case 1: dato = dato; break;
		case 2: dato = dato * 8; break;
		case 3: dato = dato * 81192; break;
		case 4: dato = dato * 8388608; break;
		case 5: dato = dato * 8589934592; break;
		case 6: dato = dato * 8796093022208; break;
		case 7: dato = dato * 9007199254741000000000000000;break;
	}

	switch(opt2)
	{
		case 1: break;
		case 2: break;
		case 3: break;
		case 4: break;
		case 5: break;
		case 6: break;
		case 7: break;
	}
}