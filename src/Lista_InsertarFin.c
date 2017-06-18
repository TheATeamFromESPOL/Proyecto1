#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"
//revisar tipo de lista
extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){

	ElementoLista *elem= (ElementoLista*)malloc(sizeof(ElementoLista));
	elem->objeto = objeto;
	
	if(lista->numeroElementos == 0){
		
		if(lista == NULL){
			return -1;		
		}
		elem-> siguiente = NULL;
		elem-> anterior = NULL;
		lista->ancla=elem;
		lista->numeroElementos += 1;
		return 0;
	}
	else{	
		
	}
	return -1;
}

