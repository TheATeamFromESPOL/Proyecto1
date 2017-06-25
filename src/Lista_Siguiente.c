#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista == NULL|| elemento==NULL){
		return NULL;		
	}	 
	ElementoLista *primero = Lista_Primero(lista);
	ElementoLista *ultimo = Lista_Ultimo(lista);
	if(elemento==ultimo){
		return NULL;
	}
	while(primero!=ultimo){
		if(elemento==primero){
			return elemento->siguiente;
		}
		primero=primero->siguiente;
	}
	
	return NULL;
}
//Falta ver correcciones
