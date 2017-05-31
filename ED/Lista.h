#pragma once

extern "C" {


	typedef struct lista
	{
		int info;
		char* ID;
		struct lista* prox;
		struct lista* first;
		struct lista* nextList;
	} Lista;

	//==============================================================================

	int countListElements(Lista* p);

	int listElement(int value, Lista* p);

	Lista* lastElement(Lista* p);

	Lista* updateListCollection(char* ID, Lista* l, Lista* firstList);

	Lista* searchList(char* ID, Lista* x);

	void freeList(Lista* x);

	Lista* removeList(char* ID, Lista* x);

	Lista* criarLista(Lista* p);

	Lista* addElement(char * ID, int x, Lista* p);

	Lista* removeElementAt(Lista* p, int index);

	Lista* findElementByPos(int index, Lista* p);

	void changeOrder(Lista* p, int from, int to);
	
}