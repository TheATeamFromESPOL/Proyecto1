INCLUDE = -Iinclude/
LIBS = -Llib/
SRC = $(wildcard src/*.c)

prueba: objs libmilista.so
	gcc -Wall $(LIBS) $(INCLUDE) obj/*.o -lm -lmilista -o ./$@

libmilista.so:src/Lista*c
	mkdir -p lib
	gcc -Wall $(INCLUDE) $(LIBS) -fPIC -shared -o src/Lista*.c -o lib/$@

objs:$(SRC)
	mkdir -p obj
	gcc -Wall $(INCLUDE) -c src/Lista_Anterior.c -o obj/Lista_Anterior.o
	gcc -Wall $(INCLUDE) -c src/Lista_Buscar.c -o obj/Lista_Buscar.o
	gcc -Wall $(INCLUDE) -c src/Lista_Conteo.c -o obj/Lista_Conteo.o
	gcc -Wall $(INCLUDE) -c src/Lista_Inicializar.c -o obj/Lista_Inicializar.o
	gcc -Wall $(INCLUDE) -c src/Lista_InsertarAntes.c -o obj/Lista_InsertarAntes.o
	gcc -Wall $(INCLUDE) -c src/Lista_InsertarDespues.c -o obj/Lista_InsertarDespues.o
	gcc -Wall $(INCLUDE) -c src/Lista_InsertarFin.c -o obj/Lista_InsertarFin.o
	gcc -Wall $(INCLUDE) -c src/Lista_InsertarInicio.c -o obj/Lista_InsertarInicio.o
	gcc -Wall $(INCLUDE) -c src/Lista_Primero.c -o obj/Lista_Primero.o
	gcc -Wall $(INCLUDE) -c src/Lista_Sacar.c -o obj/Lista_Sacar.o
	gcc -Wall $(INCLUDE) -c src/Lista_Siguiente.c -o obj/Lista_Siguiente.o
	gcc -Wall $(INCLUDE) -c src/Lista_SacarTodos.c -o obj/Lista_SacarTodos.o
	gcc -Wall $(INCLUDE) -c src/Lista_Ultimo.c -o obj/Lista_Ultimo.o
	gcc -Wall $(INCLUDE) -c src/Lista_Vacia.c -o obj/Lista_Vacia.o
	gcc -Wall $(INCLUDE) -c src/pruebaLista.c -o obj/pruebaLista.o
	
clean:
	rm -rf obj/* lib/* prueba
	rmdir obj lib
