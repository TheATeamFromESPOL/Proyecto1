#include "miLista.h"
#include <stdlib.h>

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista == NULL){
		return NULL;		
	}
	return lista->ancla.anterior; 
}

//Falta ver correcciones
