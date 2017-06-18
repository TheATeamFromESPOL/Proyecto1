#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista == NULL){
		return NULL;		
	}
	//como lista circular
	return lista->ancla->anterior;
	//como lista normal
	ElementoLista *elem=NULL 
}
