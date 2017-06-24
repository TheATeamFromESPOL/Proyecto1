#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	ElementoLista *elem = NULL;
	ElementoLista *anterior = NULL;
	for (elem = Lista_Primero(*lista); elem->objeto != NULL; elem = Lista_Siguiente(*lista, *elem)){
		if(elem==elemento){
			anterior = elem->anterior;
			return anterior;
		}
	}
	return NULL;
}
