#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL){
		void *objeto = elemento->objeto;
		if(Lista_Buscar(objeto)!=NULL){
			ElementoLista *anterior = Lista_Anterior(lista,elemento);
			ElementoLista *actual = Lista_Buscar(objeto);
			ElementoLista *nuevo = (ElementoLista *)malloc(sizeof(ElementoLista));
			nuevo->objeto = objeto;
			nuevo->anterior = anterior;
			nuevo->siguiente = actual;
			actual->anterior = nuevo;
			anterior->siguiente = nuevo;
			lista->numeroElementos+=1;
			return 0;
		}
	}
	return -1;
}
