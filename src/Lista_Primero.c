#include "miLista.h"

ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista == NULL||lista->numeroElementos==0){
		return NULL;		
	}
	ElementoLista *hue = lista->ancla.siguiente;
	return hue;
}

//Falta ver correcciones
