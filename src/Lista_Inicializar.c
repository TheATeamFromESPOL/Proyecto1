#include "miLista.h"
#include <stdlib.h>

int Lista_Inicializar(ListaEnlazada *lista){
	if(lista == NULL){
		return -1;		
	}
	lista = (ListaEnlazada*)malloc(sizeof(ListaEnlazada));
	lista->numeroElementos = 0;
	ElementoLista *ancla = (ElementoLista*)malloc(sizeof(ElementoLista));
	ancla->objeto=NULL;
	ancla->siguiente=ancla;
	ancla->anterior=ancla;
	lista->ancla=*ancla;
	return 0;
}



//Falta ver correcciones
