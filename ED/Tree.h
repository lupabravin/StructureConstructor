#pragma once

extern "C" {
#include "Fila.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>


	/* Cada nó armazena três informações:
	nesse caso um número (num),
	ponteiro para subárvore à direita (sad)
	e ponteiro para subárvore à esquerda (sae).*/
	typedef struct tree
	{
		int num;
		char * ID;
		char printStatus[500];
		struct tree* sad;
		struct tree* sae;
		struct tree* root;
		struct tree* nextTree;
	} Tree;

	/* Função que cria uma árvore */
	Tree* createTree();


	/* Função que verifica se uma árvore é vazia */
	int treeIsEmpty(Tree* t);


	/* Função que mostra a informação da árvore */
	void showTree(Tree* t);


	/* Função que insere um dado na árvore */
	void insertTree(char* ID, int num, Tree** t, Tree* root);


	/* Função que verifica se um elemento pertence ou não à árvore */
	int isInTree(Tree* t, int num);

	int countTreeElements(Tree *t);
	Tree* searchTree(char* ID, Tree* x);
	void removeNode(Tree **ab, int valor);
	char removeChildNodes(Tree **ab);
	void changeTree(Tree **ab, Tree **maisesq);
	Tree * reorderTree(Tree * treeCollection);
	void updateTreeRoot(Tree* ab, Tree* newRoot);
	int searchTreeIndex(char* ID, Tree* x);
	Tree* removeTree(char * ID, Tree * treeCollection);
	void freeTree(Tree** x);
	Tree* changeIndex(Tree* firstTree, int index, Tree *t);
	void printTreeStatus(Tree *ab, int h, int height);
	int treeHeight(Tree *ab);


}