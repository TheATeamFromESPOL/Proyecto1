
#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL){
		void *objeto = elemento->objeto;
		if(Lista_Buscar(lista,objeto)!=NULL){
			ElementoLista *anterior = Lista_Anterior(lista,elemento);
			ElementoLista *siguiente = Lista_Siguiente(lista,elemento);
			ElementoLista *actual = Lista_Buscar(lista,objeto);
			anterior->siguiente = siguiente;
			siguiente->anterior = anterior;
			actual->siguiente = NULL;
			actual->anterior = NULL;
			lista->numeroElementos-=1;
		}	
	}
}

//Falta ver correcciones
