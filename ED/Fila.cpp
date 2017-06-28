
extern "C" {
#include "Fila.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
}


int countfilaElements(Fila* p)
{
	Fila * aux = p;
	if (aux == NULL) return 0;

	int count = 1;
	while (aux->prox != NULL)
	{
		count++;
		aux = aux->prox;
	}

	return count;
}

int filaElement(int value, Fila* p)
{
	Fila* aux;
	int count = 0;

	if (p == p->top)
		aux = p;
	else
		aux = p->top;

	for (count; count < value; count++)
		aux = aux->prox;

	return aux->info;
}

Fila* searchfila(char* ID, Fila* x)
{
	Fila* p = x;

	while (strcmp(p->ID, ID) != 0)
		p = p->nextfila;

	return p;
}

void freefila(Fila* x)
{
	Fila * aux = x->top;
	Fila * toDelete;

	while (aux->prox != NULL)
	{
		toDelete = aux;
		aux = aux->prox;
		free(toDelete);
		toDelete = NULL;
	}

	free(x);
	x = NULL;
}

Fila* removeFila(char* ID, Fila* filaCollection)
{
	filaCollection = reorder(filaCollection);
	if (filaCollection == NULL) return NULL;

	Fila* p = filaCollection;
	Fila* last = NULL;
	Fila* aux;

	while (strcmp(p->ID, ID) != 0)
	{
		last = p;
		p = p->nextfila;
	}

	if (last == NULL && p->nextfila != NULL) { // caso seja o primeiro e tenha próximo
		aux = p->nextfila;
		freefila(p);
		p = NULL;
		return aux;
	}

	else if (last == NULL && p->nextfila == NULL) // caso seja o único elemento
		return NULL;

	else if (last != NULL && p->nextfila != NULL) // caso esteja no meio da lista
	{
		last->nextfila = p->nextfila;
		freefila(p);
		p = NULL;
		return filaCollection;
	}

	else				 // caso seja o último
	{
		last->nextfila = NULL;
		freefila(p);
		p = NULL;
		return filaCollection;
	}
	
}

Fila* criarFila(Fila* p)
{
	p = NULL;
	return p;
}

Fila* lastElementFila(Fila* f)
{
	Fila* aux = f;

	if (aux != NULL)
	{
		while (aux->prox != NULL)
			aux = aux->prox;
	}

	return aux;
}

int getOrder(char * ID, Fila * currentFila)
{
	int count = 0;
	Fila* p = currentFila;

	while (strcmp(p->ID, ID) != 0)
		count++;

	return count;
}

Fila* add(char * ID, int x, Fila* p)
{
	Fila* pont = (Fila*)malloc(sizeof(Fila));
	pont->info = x;
	pont->ID = ID;
	pont->prox = p;
	pont->top = pont;
	pont->bot = lastElementFila(p);

	if(p != NULL)
		p->prev = pont;

	return pont;
}

Fila * reorder(Fila * filaCollection)
{
	Fila * aux = filaCollection;
	Fila * last;

	if (filaCollection == NULL) return NULL;

	if (filaCollection->nextfila == NULL)
	{
		filaCollection = filaCollection->top;
		filaCollection->nextfila = NULL;
	}
	else
	{
		while (aux->nextfila != NULL)
		{
			aux->nextfila->top->nextfila = aux->nextfila->nextfila;
			aux->nextfila = aux->nextfila->top;
			aux = aux->nextfila;
		}
	}

	return filaCollection;
}

Fila* retirar(char* ID, Fila* filaCollection)
{

	Fila * currentFila = searchfila(ID, filaCollection)->top;
	Fila * lastElement = lastElementFila(currentFila);

	lastElement->prev->prox = NULL;
	currentFila->bot = lastElement->prev;
	free(lastElement);
	lastElement = NULL;

	return currentFila;
};


