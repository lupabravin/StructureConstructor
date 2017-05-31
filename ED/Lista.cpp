extern "C" {
#include "Lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}

int countListElements(Lista* p)
{
	Lista * aux = p;
	if (aux == NULL) return 0;

	int count = 1;
	while (aux->prox != NULL)
	{
		count++;
		aux = aux->prox;
	}

	return count;
}

int listElement(int value, Lista* p)
{
	Lista* aux = p;
	int count = 0;
	for (count; count < value; count++)
	{
		aux = aux->prox;
	}

	return aux->info;
}

Lista* searchList(char* ID, Lista* x)
{
	if (x == NULL) return x;
	if (x->first == NULL) return x->first;

	Lista* p = x->first;

	if (p != NULL)
	{
		while (strcmp(p->ID, ID) != 0)
			p = p->nextList;
	}

	return p;
}

/*Lista* updateListCollection(char* ID, Lista* x, Lista* firstList)
{
	Lista* p = searchList(ID,firstList);
	Lista* aux = NULL;

	while (strcmp(p->ID, ID) != 0)
	{
		aux = p;
		p = p->nextList;
		p->first = x;
	}

	if (aux == NULL)
	{
		firstList = NULL;
		return firstList;
	}
	else
	{
		aux->prox = p->prox;
		return aux->first;
	}
}*/

void freeList(Lista* x)
{

	Lista* aux = x;
	Lista* toDelete;

	while (aux->prox != NULL)
	{
		toDelete = aux;
		aux = aux->prox;
		free(toDelete);
	}

	free(x);
}

Lista* removeList(char* ID, Lista* x)
{
	if (x == NULL) return NULL;

	Lista* p = x;
	Lista* last = NULL;
	Lista* aux;

	while (strcmp(p->ID, ID) != 0)
	{
		last = p;
		p = p->nextList;
	}

	if (last == NULL && p->nextList != NULL) {
		aux = p->nextList;
		free(p);
		return aux;
	}
	else if (p->nextList == NULL) return NULL;

	aux = p;

	freeList(p);

	last->nextList = aux->nextList;

	return x;
}

Lista* criarLista(Lista* p)
{
	p = NULL;
	return p;
}

Lista* lastElement(Lista* l)
{
	Lista* aux = l;

	if (aux != NULL)
	{
		while (aux->prox != NULL)
			aux = aux->prox;
	}

	return aux;
}

Lista* addElement(char * ID, int x, Lista* p)
{
	Lista* last;
	Lista* pont = (Lista*)malloc(sizeof(Lista));

	pont->info = x;
	pont->ID = ID;
	pont->prox = NULL;

	if (p == NULL) {
		p = pont;
		p->first = pont;
	}

	else if (p->first == NULL)
	{
		p = pont;
		p->first = pont;
	}

	else
	{
		last = lastElement(p);

		if (last == NULL)
			p = pont;
		else
			last->prox = pont;
	}
	return p;
}

Lista* removeElementAt(Lista* p, int index)
{
	int count = 0;
	Lista * aux = p;
	Lista * prev = NULL;

	if (aux == NULL) return aux;

	if (index == 0)
	{
		if (p->prox == NULL) return NULL;

		aux = p->prox;
		return aux;
	}
	else 
	{
		while (count < index )
		{
			count++;
			prev = aux;
			aux = aux->prox;
		}

		prev->prox = aux->prox;
	}

	return p;
};

Lista* findElementByPos(int index, Lista* p)
{
	int count = 0;
	Lista * aux = p;

	if (aux == NULL) return aux;

	while (count < index)
	{
		count++;
		aux = aux->prox;
	}

	return aux;
}

void changeOrder(Lista* p, int from, int to)
{
	if (from > countListElements(p) || to > countListElements(p))
		return;

	int count = 0;
	Lista * aux = p;

	Lista * pFrom = findElementByPos(from, aux);
	Lista * pFromPrev = findElementByPos(from - 1, aux);
	Lista * pFromNext = findElementByPos(from + 1, aux);

	Lista * pTo = findElementByPos(to, aux);
	Lista * pToPrev = findElementByPos(to - 1, aux);
	Lista * pToNext = findElementByPos(to + 1, aux);

	pFromPrev->prox = pTo;
	pTo->prox = pFromNext;
	pToPrev->prox = pFrom;
	pFrom->prox = pToNext;
};
