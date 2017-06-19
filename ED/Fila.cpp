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
	}

	free(x);
}

Fila* removeFila(char* ID, Fila* x)
{
	if (x == NULL) return NULL;

	Fila* p = x;
	Fila* last = NULL;
	Fila* aux;

	while (strcmp(p->ID, ID) != 0)
	{
		last = p;
		p = p->nextfila;
	}

	if (last == NULL && p->nextfila != NULL) {
		free(p);
		return p->nextfila;
	}
	else if (p->nextfila == NULL) return NULL;

	aux = p;

	freefila(p);

	last->nextfila = aux->nextfila;

	return x;
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
Fila* retirar(Fila* p)
{
	Fila * aux = lastElementFila(p);
	Fila * liberate;

	if (aux == NULL) return aux;
	liberate = aux;
	liberate->prev->prox = NULL;
	p->top = aux->top;
	p->bot = liberate->prev;
	free(liberate);

	return p;
};


