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