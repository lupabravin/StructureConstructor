#pragma once

extern "C" {
#include "Fila.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>


	/* Cada n� armazena tr�s informa��es:
	nesse caso um n�mero (num),
	ponteiro para sub�rvore � direita (sad)
	e ponteiro para sub�rvore � esquerda (sae).*/
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

	/* Fun��o que cria uma �rvore */
	Tree* createTree();


	/* Fun��o que verifica se uma �rvore � vazia */
	int treeIsEmpty(Tree* t);


	/* Fun��o que mostra a informa��o da �rvore */
	void showTree(Tree* t);


	/* Fun��o que insere um dado na �rvore */
	void insertTree(char* ID, int num, Tree** t, Tree* root);


	/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
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