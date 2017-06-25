#include "miLista.h"
#include <stdlib.h>

int Lista_Vacia(ListaEnlazada *lista){
	int num = lista->numeroElementos;
	if(num == 0){
		return TRUE;
	}
	return FALSE;
}

//Falta ver correcciones
