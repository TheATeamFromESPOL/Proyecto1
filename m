

prueba: pruebaLista libreria
	gcc -Wall -Llib/ -Iinclude/ obj/prueba.o -lmilista -o bin/prueba

pruebaLista: src/pruebaLista.c
	gcc -Wall -Iinclude/ -c -g src/pruebaLista.c

libreria:objects
	gcc -Wall -share -fPIC obj/Lista*.o -o lib/libmilista.so
	#LD_LIBRARY_PATH=./lib
	#export LD_LIBRARY_PATH

objects:
	gcc -Wall -FPIC -c -g -Iinclude/ src/Lista*.c
	mv *.o obj/

.PHONY:clean

clean:
	rm lib/* obj/*.o bin/*
