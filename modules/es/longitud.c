#include <stdio.h>
#include <stdlib.h>

int opt1, opt2;
float dato, resultado;

//muestra menu de unidades
void menu_longitud(){
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
	printf("11) Milla nautica\n");

	printf("\nConvertir esta unidad > ");
	scanf("%i", &opt1);
	while(getchar()!='\n'); //limpiando el buffer
	printf("Ingresa el dato: ");
	scanf("%f", &dato);
	while(getchar()!='\n');

	printf("\nA esta otra unidad > ");
	scanf("%i", &opt2);
	while(getchar()!='\n');
}


void conversion_longitud(){
	//se convierten los datos a metros
	switch (opt1) {
		case 1: dato = dato * 1000; break;
		case 2: dato = dato; break;
		case 3: dato = dato / 100; break;
		case 4: dato = dato / 1000; break;
		case 5: dato = dato / 1000000; break;
		case 6: dato = dato / 1000000000; break;
		case 7: dato = dato * 0.000621371; break;
		case 8: dato = dato * 1.09361; break;
		case 9: dato = dato * 3.28084; break;
		case 10: dato = dato * 39.3701; break;
		case 11: dato = dato * 0.000539957; break;
	}

	switch (opt2) {
		case 1: resultado = dato / 1000; break;
		case 2: resultado = dato; break;
		case 3: resultado = dato * 100; break;
		case 4: resultado = dato * 1000; break;
		case 5: resultado = dato * 1000000; break;
		case 6: resultado = dato * 1000000000; break;
		case 7: resultado = dato / 0.000621371; break;
		case 8: resultado = dato / 1.09361; break;
		case 9: resultado = dato / 3.28084; break;
		case 10: resultado = dato / 39.3701; break;
		case 11: resultado = dato / 0.000539957; break;
	}

	printf("El resultado es: %.4f\n", resultado);
}
