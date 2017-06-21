#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista){
	*lista = (ListaEnlazada*)malloc(sizeof(ListaEnlazada));
	lista->numeroElementos = 0;
	ElementoLista *ancla = (ElementoLista*)malloc(sizeof(ElementoLista));
	ancla->*objeto=NULL
	ancla->*siguiente=*ancla
	ancla->*anterior=*ancla
	lista->ancla=ancla
	return 0;
}
