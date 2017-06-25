#include <stdlib.h>
#include "miLista.h"

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista!=NULL && elemento!=NULL &&lista->numeroElementos!=0){
		if(lista->numeroElementos==1){
			lista->ancla.siguiente=&(lista->ancla);
			lista->ancla.anterior=&(lista->ancla);
		}
		else {
			if(Lista_Primero(lista)==elemento){
				ElementoLista *siguiente = elemento->siguiente;
				siguiente->anterior=&(lista->ancla);
				lista->ancla.siguiente=siguiente;
			}
			else if(Lista_Ultimo(lista)==elemento){
				ElementoLista *anterior = elemento->anterior;	
				anterior->siguiente=&(lista->ancla);
				lista->ancla.anterior=anterior;
			}
			else{
				ElementoLista *elem = NULL;
				for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)) {
					if(elem==elemento){
						ElementoLista *siguiente = elemento->siguiente;
						ElementoLista *anterior = elemento->anterior;
						siguiente->anterior=anterior;
						anterior->siguiente=siguiente;
					}
				}
			}
		}
		lista->numeroElementos-=1;	
	}
}

//Falta ver correcciones
