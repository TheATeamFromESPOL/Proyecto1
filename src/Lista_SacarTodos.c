#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern void Lista_SacarTodos(ListaEnlazada *lista){
	if(lista!=NULL){
		ElementoLista *ancla = lista->ancla;
		if(ancla->siguiente!=NULL && ancla->anterior!=NULL){
			ElementoLista *primero = Lista_Primero(lista);
			ElementoLista *ultimo = Lista_Ultimo(lista);
			ancla->siguiente=ancla;
			ancla->anterior=ancla;
			primero->anterior=NULL;
			ultimo->siguiente=NULL;
			lista->numeroElementos=0;
		}
	}
}

//Falta ver correcciones
