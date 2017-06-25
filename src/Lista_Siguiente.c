#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL){
		return NULL;		
	}
	if(elemento == NULL){
		return NULL;		
	}
	ElementoLista *elem = NULL;
	ElementoLista *siguiente = NULL;
	for (elem = Lista_Primero(*lista); elem->objeto != NULL; elem = Lista_Siguiente(*lista, *elem)){
		if(elem==elemento){
			siguiente = elem->siguiente;
			return siguiente;
		}
	}
	return NULL;
}

//Falta ver correcciones
