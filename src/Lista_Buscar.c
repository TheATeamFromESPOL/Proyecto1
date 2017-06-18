#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"
//revisar tipo de lista
extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	ElementoLista *elem=NULL;
	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
		if(elem->objeto==objeto){
			return elem;
		}
	}
	return NULL;
}

