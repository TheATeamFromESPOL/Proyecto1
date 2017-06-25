INCLUDE = -Iinclude/
LIBS = -Llib/
SRC = $(wildcard src/*.c)

prueba: objetos libmilista.so
	gcc -Wall $(LIBS) $(INCLUDE) obj/*.o -lm -lmilista -o ./$@

libmilista.so:src/Lista*c
	mkdir -p lib
	gcc -Wall $(INCLUDE) $(LIBS) -fPIC -shared -o src/Lista*.c -o lib/$@

objetos:$(SRC)
	mkdir -p obj
	gcc -Wall -c $(INCLUDE) $(SRC) 
	mv *.o obj/

clean:
	rm -rf obj/* lib/* prueba
	rmdir obj lib
