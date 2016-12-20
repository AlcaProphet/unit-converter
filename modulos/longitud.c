#include <stdio.h>
#include <stdlib.h>
void mostrarUnidades();

int opt1, opt2;

void menuLongitud(){
	mostrarUnidades();
	printf("\nConvertir esta unidad... > ");
	scanf("%i", &opt1);
	while(getchar()!='\n'); //limpiando el buffer

	system("clear");

	mostrarUnidades();
	printf("\nA esta otra unidad... > ");
	scanf("%i", &opt2);
	while(getchar()!='\n');
}

void mostrarUnidades(){
	printf("1) Kilometro\n");
	printf("2) Metro\n");
	printf("3) Centimetro\n");
	printf("4) Milimetro\n");
	printf("5) Micrometro\n");
	printf("6) Nanometro\n");
	printf("7) Milla\n");
	printf("8) Yarda\n");
	printf("9) Pie\n");
	printf("10) Pulgada\n");
	printf("11) Nanometro\n");
	printf("12) Milla nautica\n");
}
