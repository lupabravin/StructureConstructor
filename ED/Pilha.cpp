extern "C" {
#include "Pilha.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
}


int countPileElements(Pilha* p)
{
	Pilha * aux = p;
	if (aux == NULL) return 0;

	int count = 1;
	while (aux->prox != NULL)
	{
		count++;
		aux = aux->prox;
	}

	return count;
}

int pileElement(int value, Pilha* p)
{
	Pilha* aux = p->top;
	int count = 0;
	for (count; count < value; count++)
	{
		aux = aux->prox;
	}

	return aux->info;
}

Pilha* searchPile(char* ID, Pilha* x)
{
	Pilha* p = x;

	while (strcmp(p->ID,ID) != 0)
		p = p->nextPile;

	return p;
}

void freePile(Pilha* x)
{
	free(x);
}

Pilha* removePile(char* ID, Pilha* x)
{
	if (x == NULL) return NULL;

	Pilha* p = x;
	Pilha* last = NULL;
	Pilha* aux;

	while (strcmp(p->ID, ID) != 0)
	{	
		last = p;
		p = p->nextPile;
	}

	if (last == NULL && p->nextPile != NULL) {
		free(p); 
		return p->nextPile;
	}
	else if (p->nextPile == NULL) return NULL;

	aux = p;

	freePile(p);

	last->nextPile = aux->nextPile;

	return x;
}

Pilha* criar(Pilha* p)
{
	p = NULL;
	return p;
}

Pilha* push(char * ID, int x, Pilha* p)
{
	Pilha* pont;
	if ((pont = (Pilha*) malloc(sizeof(Pilha))) == NULL)
		printf("Memoria insulficiente\n");
	else {
		pont->info = x;
		pont->ID = ID;
		pont->prox = p;
		pont->top = pont;
	}
	return pont;
}
Pilha* pop(Pilha* p)
{
	Pilha * aux = p->top;
	if (aux == NULL) return aux;

	p->top = p->top->prox;
	p = p->top;
	return p;
};


