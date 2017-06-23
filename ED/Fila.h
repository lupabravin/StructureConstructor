#pragma once
#pragma once
extern "C" {

	struct fila {
		int info;
		char * ID;
		struct fila *top;
		struct fila *bot;
		struct fila *prox;
		struct fila *prev;
		struct fila *nextfila;
	};

	typedef struct fila Fila;

	//==============================================================================
	Fila* criarFila(Fila* p);
	int filaElement(int value, Fila* p);
	Fila* add(char * ID, int x, Fila* p);
	Fila* searchfila(char* ID, Fila* firstfila);
	Fila* retirar(char* ID, Fila* filaCollection);
	int countfilaElements(Fila* p);
	Fila* removeFila(char* ID, Fila* x);
	Fila* lastElementFila(Fila* l);
	int getOrder(Fila* currentFila);
	Fila* reorder(Fila * filaCollection);
}