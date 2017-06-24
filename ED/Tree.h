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
	void insertTree(Tree** t, int num);
	

	/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
	int isInTree(Tree* t, int num);

}