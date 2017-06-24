#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"
//revisar tipo de lista
extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	
	if(lista == NULL){
		return -1;		
	}
	ElementoLista *elem= (ElementoLista*)malloc(sizeof(ElementoLista));
	elem->objeto = objeto;
	if(lista->numeroElementos == 0){
		elem->siguiente = lista->ancla;
		elem->anterior = lista->ancla;
		lista->numeroElementos += 1;
		return 0;
	}
	else{
		ElementoLista *primero=Lista_Primero(lista);
		elem->siguiente = primero;
		elem->anterior = lista->ancla;
		lista->ancla.siguiente=elem;
		primero->anterior = elem;
		lista->numeroElementos += 1;
		return 0;
	}
	return -1
}

//Falta ver correcciones
