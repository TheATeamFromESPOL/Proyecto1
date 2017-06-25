#include "miLista.h"

ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL|| elemento==NULL ||lista->numeroElementos == 0){
		return NULL;		
	}	 
	
	ElementoLista *primero = Lista_Primero(lista);
	if(elemento==primero){
		return NULL;
	}
	return elemento->anterior;
}

