#include <stdio.h>
#include <stdlib.h>

float temp=0;
char opt1, opt2;

void menu_temp(){
	printf("1) Celcius\n");
	printf("2) Fahrenheit\n");
	printf("3) Kelvin\n");
	printf("\nQuiero convertir esta escala: ");
	scanf("%c", &opt1);
	while(getchar()!='\n');

	printf("\n\tIngresa la temperatura: ");
	scanf("%f", &temp);

	printf("\n\nA esta escala: ");
	scanf("%c", &opt2);
}
