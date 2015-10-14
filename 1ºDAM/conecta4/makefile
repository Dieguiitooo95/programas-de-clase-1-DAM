conecta4: main.o comprobaciones.o turno.o tablero.o
	gcc -o conecta4 main.o comprobaciones.o turno.o tablero.o

main.o: main.c tablero.h turno.h comprobaciones.h
	gcc -c main.c

comprobaciones.o: comprobaciones.c comprobaciones.h
	gcc -c comprobaciones.c

turno.o: turno.c turno.h
	gcc -c turno.c

tablero.o: tablero.c tablero.h
	gcc -c tablero.c

clean:
	rm -rf *.o conecta4
