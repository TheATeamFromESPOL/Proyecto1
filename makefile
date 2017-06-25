SRC = $(wildcard ./src/*.c)
OBJS = $(wildcard ./obj/*.c)
OBJ = $(wildcard *.o)
INCLUDE = -Iinclude/
LIBS = -Llib/

prueba: $(OBJ) libmilista.so
	gcc  $(LIBS) $(OBJS) -lm -led -o bin/$@

libmilista.so: $(SRC)
	gcc -Wall -c $(INCLUDE) -shared -fPIC src/miLista.c -o ./lib/$@

pruebaLista.o: ./src/miLista.c
	gcc -Wall -c $(INCLUDE) ./src/pruebaLista.c -o obj/$@

Lista_Anterior.o: ./src/Lista_Anterior.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Anterior.c -o obj/$@

Lista_Buscar.o: ./src/Lista_Buscar.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Buscar.c -o obj/$@

Lista_Conteo.o: ./src/Lista_Conteo.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Conteo.c -o obj/$@

Lista_Inicializar.o: ./src/Lista_Inicializar.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Inicializar.c -o obj/$@

Lista_InsertarAntes.o: ./src/Lista_InsertarAntes.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_InsertarAntes.c -o obj/$@

Lista_InsertarDespues.o: ./src/Lista_InsertarDespues.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_InsertarDespues.c -o obj/$@

Lista_InsertarFin.o: ./src/Lista_InsertarFin.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_InsertarFin.c -o obj/$@

Lista_InsertarInicio.o: ./src/Lista_InsertarInicio.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Anterior.c -o obj/$@

Lista_Primero.o: ./src/Lista_Primero.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Primero.c -o obj/$@

Lista_Sacar.o: ./src/Lista_Sacar.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Sacar.c -o obj/$@

Lista_SacarTodos.o: ./src/Lista_SacarTodos.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_SacarTodos.c -o obj/$@

Lista_Siguiente.o: ./src/Lista_Siguiente.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Siguiente.c -o obj/$@

Lista_Ultimo.o: ./src/Lista_Ultimo.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Ultimo.c -o obj/$@

Lista_Vacia.o: ./src/Lista_Vacia.c
	gcc -Wall -c $(INCLUDE) ./src/Lista_Vacia.c -o obj/$@

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*
