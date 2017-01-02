programa: main.o longitud.o temperatura.o tiempo.o
	gcc -o programa main.o longitud.o temperatura.o tiempo.o

main.o: main.c headers/magnitudes.h
	gcc -c main.c

longitud.o: modules/es/longitud.c headers/magnitudes.h 
	gcc -c modules/es/longitud.c

temperatura.o: modules/es/temperatura.c headers/magnitudes.h 
	gcc -c modules/es/temperatura.c

tiempo.o: modules/es/tiempo.c headers/magnitudes.h 
	gcc -c modules/es/tiempo.c