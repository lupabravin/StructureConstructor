#pragma once
extern "C" {

	struct pilha {
		int info;
		char * ID;
		struct pilha *top;
		struct pilha *prox;
		struct pilha *nextPile;
	};

	typedef struct pilha Pilha;

	//==============================================================================
	Pilha* criar(Pilha* p);
	int pileElement(int value, Pilha* p);
	Pilha* push(char * ID, int x, Pilha* p);
	Pilha* searchPile(char* ID, Pilha* firstPile);
	Pilha* pop(Pilha* p);
	int countPileElements(Pilha* p);
	Pilha* removePile(char* ID, Pilha* x);
}