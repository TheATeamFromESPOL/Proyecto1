#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista == NULL || lista->numeroElementos==0){
		return NULL;		
	}	
	ElementoLista *elem=NULL;

	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
			
		if(elem->objeto==objeto){
			return elem;
		}
	}
	return NULL;
}
