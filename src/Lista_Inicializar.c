#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista){
	*lista = malloc(sizeof(ListaEnlazada));
	(*lista).numeroElementos = 0;
	(*lista).ancla = malloc(sizeof(ElementoLista));
}
