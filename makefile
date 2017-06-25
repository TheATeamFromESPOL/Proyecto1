
INCLUDE = -Iinclude/
LIBS = -Llib/
SRC = $(wildcard src/*.c)

prueba: objetos libmilista.so
	gcc -Wall $(LIBS) $(INCLUDE) obj/*.o -lm -lmilista -o ./$@

libmilista.so:src/Lista*c
	gcc -Wall $(INCLUDE) $(LIBS) -fPIC -shared -o src/Lista*.c -o lib/$@

objetos:src/*.c
	gcc -Wall -c $(INCLUDE) src/*.c 
	mv *.o obj/

clean:
	rm -rf obj/* lib/* prueba
