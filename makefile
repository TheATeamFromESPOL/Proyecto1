SRC = $(wildcard src/*.c)

all: prueba

libmilista.so: $(SRC)
	gcc -Wall -shared -fPIC $(SRC) -o $@


