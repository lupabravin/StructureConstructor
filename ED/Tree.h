#pragma once

extern "C" {
#include "Fila.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>


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

	Tree* createTree();

	int treeIsEmpty(Tree* t);

	void insertTree(char* ID, int num, Tree** t, Tree* root);
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