#include <stdio.h>
#include <stdlib.h>

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