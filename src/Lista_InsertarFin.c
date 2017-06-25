#include <stdio.h>
#include "miLista.h"

int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	if(lista == NULL){
		return -1;		
	}
	ElementoLista *elem= (ElementoLista*)malloc(sizeof(ElementoLista));
	if(elem==NULL){
		return -1;
	}
	elem->objeto = objeto;
	
	if(lista->numeroElementos == 0){
		elem->siguiente = &(lista->ancla);
		elem->anterior = &(lista->ancla);
		lista->ancla.siguiente=elem;
		lista->ancla.anterior=elem;
	}
	else{	
		ElementoLista *ante = Lista_Ultimo(lista);
		ante->siguiente=elem;
		elem->siguiente=&(lista->ancla);
		elem->anterior=ante;
		lista->ancla.anterior=elem;
		
	}
	lista->numeroElementos += 1;
	return 0;
}

