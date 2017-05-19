Practica:	main.o Arquitectura.o Escultura.o Literatura.o ObrasArte.o Pintura.o 
	g++ main.o Arquitectura.o Escultura.o Literatura.o ObrasArte.o Pintura.o -o main

main.o: 	main.cpp Arquitectura.h Escultura.h Literatura.h ObrasArte.h Pintura.h
	g++ -c main.cpp

ObrasArte.o: 	ObrasArte.cpp ObrasArte.h
	g++ -c ObrasArte.cpp

Arquitectura.o: 	Arquitectura.cpp Arquitectura.h ObrasArte.h
	g++ -c Arquitectura.cpp

Escultura.o: 	Escultura.cpp Escultura.h ObrasArte.h
	g++ -c Escultura.cpp

Literatura.o: 	Literatura.cpp Literatura.h ObrasArte.h
	g++ -c Literatura.cpp

Pintura.o: 	Pintura.cpp Pintura.h ObrasArte.h
	g++ -c Pintura.cpp

clean:
	rm -f *.o main
























