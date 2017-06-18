#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista == NULL){
		return NULL;		
	}	
	return lista->ancla;
}
