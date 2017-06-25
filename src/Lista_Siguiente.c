#include <stdlib.h>
#include "miLista.h"

ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL|| elemento==NULL ||lista->numeroElementos == 0){
		return NULL;		
	}	 
	
	ElementoLista *ultimo = Lista_Ultimo(lista);
	if(elemento==ultimo){
		return NULL;
	}
	return elemento->siguiente;
/*
	ElementoLista *primero = Lista_Primero(lista);
	while(primero!=ultimo){
		if(elemento==primero){
			return primero->siguiente;
		}
		primero=primero->siguiente;
	}*/
}
//Falta ver correcciones
