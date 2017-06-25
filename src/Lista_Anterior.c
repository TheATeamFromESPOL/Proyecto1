#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL|| elemento==NULL){
		return NULL;		
	}
	ElementoLista *elem = NULL;
	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
		if(elem==elemento){
			return elem->anterior;
		}
	}
	return NULL;
}

