#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	if(lista == NULL){
			return -1;		
		}
	ElementoLista *elem= (ElementoLista*)malloc(sizeof(ElementoLista));
	elem->objeto = objeto;
	
	if(lista->numeroElementos == 0){
		lista->ancla.siguiente=elem;
		lista->ancla.anterior=elem;
		elem->siguiente = &(lista->ancla);
		elem->anterior = &(lista->ancla);
		lista->numeroElementos += 1;
		return 0;
	}
	else{	
		ElementoLista *ante = Lista_Ultimo(lista);
		lista->ancla.anterior->anterior=elem;
		ante->siguiente=elem;
		elem->siguiente=&(lista->ancla);
		elem->anterior=ante;
		return 0;
	}
	return -1;
}

//Falta ver correcciones
