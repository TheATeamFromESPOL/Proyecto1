#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL|| elemento==NULL){
		return NULL;		
	}	 
	ElementoLista *primero = Lista_Primero(lista);
	ElementoLista *ultimo = Lista_Ultimo(lista);
	while(primero!=ultimo){
		if(elemento==primero){
			return elemento->siguiente;
		}
		primero=primero->siguiente;
	}
	//no se puede usar el for :V
	/*for (elem = Lista_Primero(lista); elem->objeto != NULL; elem = Lista_Siguiente(lista, elem)){
		if(elem==elemento){
			siguiente = elem->siguiente;
			return siguiente;
		}
	}*/
	return NULL;
}

//Falta ver correcciones
