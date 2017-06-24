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
		elem->siguiente = lista->ancla;
		elem->anterior = lista->ancla;
		lista->numeroElementos += 1;
		return 0;
	}
	else{	
		ElementoLista *ante = lista->ancla.anterior;
		ancla->anterior=elem;
		ante->siguiente=elem;
		elem->siguiente=lista->ancla;
		elem->anterior=ante;
	}
	return -1;
}

