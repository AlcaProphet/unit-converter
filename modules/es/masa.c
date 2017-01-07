#include <stdio.h>
#include <stdlib.h>

float dato, res;
int opt1, opt2;

int menu1_masa()
{
	printf("1) Microgramo\n");
	printf("2) Miligramo\n");
	printf("3) Gramo\n");
	printf("4) Kilogramo\n");
	printf("5) Tonelada\n");
	printf("6) Libra\n");
	printf("7) Onza\n");
	printf("\n(Escribe 0 para regresar al menu principal)\n");

	printf("\nConvertir esta unidad... > ");
	scanf("%i", &opt1);
	while(getchar()!='\n'); //limpiando el buffer
	return opt1;
}

void menu2_masa()
{
	printf("\tIngresa el dato: ");
	scanf("%f", &dato);
	while(getchar()!='\n');

	printf("\n\nA esta unidad: ");
	scanf("%i", &opt2);
	while(getchar()!='\n');
}

void convertir_masa()
{
	// convirte a la unidad base
	switch(opt1)
	{
		case 1: dato = dato / 1000000.00; break;
		case 2: dato = dato / 1000.00; break;
		case 3: dato = dato; break;
		case 4: dato = dato * 1000; break;
		case 5: dato = dato * 1000000.00; break;
		case 6: dato = dato / 0.00440925; break;
		case 7: dato = dato / 0.035274; break;
	}

	switch(opt2)
	{
		case 1: res = dato * 1000000; break;
		case 2: res = dato * 1000; break;
		case 3: res = dato; break;
		case 4: res = dato / 1000.00; break;
		case 5: res = dato / 1000000.00; break;
		case 6: res = dato * 0.00440925; break;
		case 7: res = dato * 0.035274; break;
	}

	printf("El resultado es: %.9f\n", res);
}