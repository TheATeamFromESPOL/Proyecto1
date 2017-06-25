#include "miLista.h"
#include <stdlib.h>

int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL){
		if(lista->numeroElementos==0||elemento==Lista_Ultimo(lista)){
			Lista_InsertarFin(lista,objeto);
		}
		else{
			ElementoLista *nuevo= (ElementoLista*)malloc(sizeof(ElementoLista));
			if(nuevo==NULL){
				return -1;
			}
			nuevo->objeto=objeto;
			ElementoLista *siguiente=elemento->siguiente;
			elemento->siguiente=nuevo;
			siguiente->anterior=nuevo;
			nuevo->siguiente = siguiente;			
			nuevo->anterior = elemento;
			lista->numeroElementos+=1;
			return 0;
		}

	}
	return -1;
}

