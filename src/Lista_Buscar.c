#include "miLista.h"

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista == NULL || objeto == NULL || lista->numeroElementos==0){
		return NULL;		
	}	
	ElementoLista *elem=NULL;
<<<<<<< HEAD

	for (elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
=======
	for(elem = Lista_Primero(lista); elem != NULL; elem = Lista_Siguiente(lista, elem)){
>>>>>>> 786511c018b35bd269600176d855de58d4e44bd3
		if(elem->objeto==objeto){
			return elem;
		}
	}
	return NULL;
}
