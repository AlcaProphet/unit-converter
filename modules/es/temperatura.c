#include <stdio.h>
#include <stdlib.h>

float temp=0, r=0;
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
	while(getchar()!='\n');

}

void conversion_temp(){
	switch(opt1){
		case 'c': case 'C':
			switch(opt2){
				case 'f': case 'F':
					r = ((temp*1.8)+32);
					printf("Resultado: %.4f\n", r);
					break;
				case 'k': case 'K':
					r = (temp+273.15);
					printf("Resultado: %.4f\n", r);
					break;
			}
		break;
		case 'f': case 'F':
			switch(opt2){
				case 'c': case 'C':
					r = ((temp-32) / 1.8);
					printf("Resultado: %.4f\n", r);
					break;
				case 'k': case 'K':
					/* la division debe ser con numeros flotantes, de lo contrario
					dara como resultado 0 */
					r = ((5.0/9.0) * (temp-32) + 273.15);
					printf("Resultado: %.4f\n\n", r);
					break;
			}
		break;
		case 'k': case 'K':
			if(opt2=='c' || opt2=='C'){
				r = (temp - 273.15);
				printf("Resultado: %.4f\n\n", r);
				break;
			} else if(opt2=='f' || opt2=='F'){
					r = ((1.8) * (temp - 273.15) + 32);
					printf("Resultado: %.4f\n\n", r);
					break;
			}


	}
}
