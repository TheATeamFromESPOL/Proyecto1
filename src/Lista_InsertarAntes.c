#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista == NULL){
		return NULL;		
	}
	if(elemento == NULL){
		return NULL;		
	}
	ElementoLista *nuevo=(ElementoLista *)malloc(sizeof(ElementoLista));
	
}
