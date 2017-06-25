
INCLUDE = -Iinclude/
LIBS = -Llib/
SRC = $(wildcard src/*.c)

prueba: objetos libmilista.so
<<<<<<< HEAD
	gcc -Wall $(LIBS) $(INCLUDE) obj/*.o -lm -lmilista -o ./$@
=======
	gcc -Wall $(LIBS) $(INCLUDE) obj/*.o -lm -lmilista -o $@
>>>>>>> 786511c018b35bd269600176d855de58d4e44bd3

libmilista.so:src/Lista*c
	gcc -Wall $(INCLUDE) $(LIBS) -fPIC -shared -o src/Lista*.c -o lib/$@

objetos:src/*.c
	gcc -Wall -c $(INCLUDE) src/*.c 
	mv *.o obj/

clean:
	rm -rf obj/* lib/* prueba
