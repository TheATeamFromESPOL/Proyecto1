
#include "miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista == NULL){
		return NULL;		
	}
	ElementoLista *hue = lista->ancla.siguiente;
	return hue;
}

//Falta ver correcciones
