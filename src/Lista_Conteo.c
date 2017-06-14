#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_Conteo(ListaEnlazada *lista){
	int num = (*lista).numeroElementos;
	return num;
}
