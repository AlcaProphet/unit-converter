#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int opt1, opt2;
float dato, res;

int menu1_tiempo()
{
	printf("1) Nanosegundo\n");
	printf("2) Microsegundo\n");
	printf("3) Milisegundo\n");
	printf("4) Segundo\n");
	printf("5) Minuto\n");
	printf("6) Hora\n");
	printf("7) Dia\n");
	printf("8) Semana\n");
	printf("9) Mes\n");
	printf("10) Año\n");
	printf("11) Decada\n");
	printf("12) Siglo\n");
	printf("\n(Escribe 0 para regresar al menu principal)\n");

	printf("\nConvertir esta unidad... > ");
	scanf("%i", &opt1);
	while(getchar()!='\n'); //limpiando el buffer
	return opt1;
}

void menu2_tiempo()
{
	printf("\tIngresa el dato: ");
	scanf("%f", &dato);
	while(getchar()!='\n');

	printf("\n\nA esta unidad: ");
	scanf("%i", &opt2);
	while(getchar()!='\n');
}

void conversion_tiempo()
{
	// se convierten los datos a su unidad principal de medida
	switch(opt1)
	{
		case 1:
			dato = dato / 1000000000;
			break;
		case 2:
			dato = dato / 1000000;
			break;
		case 3:
			dato = dato / 1000;
			break;
		case 4: 
			dato = dato;
			break;
		case 5: 
			dato = dato * 60;
			break;
		case 6: 
			dato = dato * 3600;
			break;
		case 7: 
			dato = dato * 86400;
			break;
		case 8: 
			dato = dato * 604800;
			break;
		case 9:
			dato = dato * 2628000;
			break; 
		case 10: 
			dato = dato * 31540000;
			break;
		case 11: 
			dato * 315400000;
			break;
		case 12: 
			dato * 3154000000;
			break;
	}

}