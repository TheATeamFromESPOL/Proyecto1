#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista == NULL||objeto == NULL){
		return NULL;		
	}	
	ElementoLista *elem=NULL;
	for(elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
		if(elem->objeto==objeto){
			return elem;
		}
	}
	return NULL;
}
//Falta ver correcciones
