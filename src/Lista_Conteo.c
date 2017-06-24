#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_Conteo(ListaEnlazada *lista){
	if(lista == NULL){
		return -1;		
	}
	int num = lista->numeroElementos;
	return num;
}

//Falta ver correcciones
