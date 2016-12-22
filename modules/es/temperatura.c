#include <stdio.h>
#include <stdlib.h>

float temp=0.0, r=0.0;
char opt1, opt2;

void menu_temp(){
	printf("C) Celcius\n");
	printf("F) Fahrenheit\n");
	printf("K) Kelvin\n");
	printf("\nQuiero convertir esta escala: ");
	scanf("%c", &opt1);
	while(getchar()!='\n');

	printf("\tIngresa la temperatura: ");
	scanf("%f", &temp);
	while(getchar()!='\n');

	printf("\n\nA esta escala: ");
	scanf("%c", &opt2);

}

void conversion_temp(){
	switch(opt1){
		case 'c':
		case 'C':
			switch(opt2){
				case 'f':
				case 'F':
					r = ((temp*1.8)+32);
					printf("Resultado: %.4f\n", r);
					break;
				case 'k':
				case 'K':
					r = (temp+273.15);
					printf("Resultado: %.4f\n", r);
					break;
			}
			break;
	}
}
