#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL){
		void *objeto = elemento->objeto;
		if(Lista_Buscar(lista,objeto)!=NULL){
			ElementoLista *siguiente = Lista_Siguiente(lista,elemento);
			ElementoLista *actual = Lista_Buscar(lista,objeto);
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
			nuevo->objeto = objeto;
			nuevo->anterior = actual;
			nuevo->siguiente = siguiente;
			siguiente->anterior = nuevo;
			actual->siguiente = nuevo;
			lista->numeroElementos+=1;
			return 0;
		}
	}
	return -1;
}

//Falta ver correcciones
