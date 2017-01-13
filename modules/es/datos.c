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
	scanf("%i", &opt2);
	while(getchar()!='\n'); 
}

void convertir_datos()
{
	switch(opt1)
	{
		case 1: dato = dato; break;
		case 2: dato = dato * 8; break;
		case 3: dato = dato * 8192; break;
		case 4: dato = dato * 8388608; break;
		case 5: dato = dato * 8589934592; break;
		case 6: dato = dato * 8796093022208; break;
		case 7: dato = dato * 9.007199254741; break;
	}

	switch(opt2)
	{
		case 1: res = dato; break;
		case 2: res = dato / 8.00; break;
		case 3: res = dato / 8192.00; break;
		case 4: res = dato / 8388608.00; break;
		case 5: res = dato / 8589934592.00; break;
		case 6: res = dato / 8796093022208.00; break;
		case 7: res = dato / 9.007199254741; break;
	}

	printf("El resultado es: %f\n", res);
}