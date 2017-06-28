extern "C" {
#include "Tree.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
#define MAX(a,b) ((a > b)?a:b)
}



/* A estrutura da �rvore � representada por um ponteiro
para o n� raiz. Com esse ponteiro, temos acesso aos
demais n�s. */

/* Fun��o que cria uma �rvore */
Tree* createTree()
{
	/* Uma �rvore � representada pelo endere�o do n� raiz,
	essa fun��o cria uma �rvore com nenhum elemento,
	ou seja, cria uma �rvore vazia, por isso retorna NULL. */
	return NULL;
}

/* Fun��o que verifica se uma �rvore � vazia */
int treeIsEmpty(Tree* t)
{
	/* Retorna 1 se a �rvore for vazia e 0 caso contr�rio */
	return t == NULL;

}

/* Fun��o que insere um dado na �rvore */
void insertTree(char* ID, int num, Tree** t, Tree* root)
{
	if (root == NULL) // Se estiver vazia
	{
		*t = (Tree*)malloc(sizeof(Tree));
		(*t)->sae = NULL; 
		(*t)->sad = NULL; 
		(*t)->num = num;
		(*t)->ID = ID;
		(*t)->root = *t;
	}

	if (*t == NULL)
	{
		*t = (Tree*)malloc(sizeof(Tree)); /* Aloca mem�ria para a estrutura */
		(*t)->sae = NULL; /* Sub�rvore � esquerda � NULL */
		(*t)->sad = NULL; /* Sub�rvore � direita � NULL */
		(*t)->num = num; /* Armazena a informa��o */
		(*t)->ID = ID;
		(*t)->root = root;
		(*t)->nextTree = root->nextTree;
	}
	else {
		if (num < (*t)->num) /* Se o n�mero for menor ent�o vai pra esquerda */
		{
			/* Percorre pela sub�rvore � esquerda */
			insertTree( ID,num, &(*t)->sae, root);
		}
		if (num >(*t)->num) /* Se o n�mero for maior ent�o vai pra direita */
		{
			/* Percorre pela sub�rvore � direita */
			insertTree(ID, num, &(*t)->sad, root);
		}
	}
}
/* Fun��o que verifica se um elemento pertence ou n�o � �rvore */
int isInTree(Tree* t, int num) {

	if (treeIsEmpty(t)) { /* Se a �rvore estiver vazia, ent�o retorna 0 */
		return 0;
	}

	/* O operador l�gico || interrompe a busca quando o elemento for encontrado */
	return t->num == num || isInTree(t->sae, num) || isInTree(t->sad, num);
}

int countTreeElements (Tree *t)
{
	if (t != NULL)
		return(1 + countTreeElements(t->sae) + countTreeElements(t->sad));
	else
		return(0);
}

Tree* searchTree(char* ID, Tree* x)
{
	Tree* p = x;

	while (strcmp(p->ID, ID) != 0)
		p = p->nextTree;

	return p;
}

void removeNode(Tree **ab, int valor)
{
	Tree *aux;

	if ((*ab) != NULL) {
		if ((*ab)->num != valor) {
			if ((*ab)->num < valor) {
				removeNode(&((*ab)->sad), valor);
			}
			else {
				removeNode(&((*ab)->sae), valor);
			}
		}
		else { /* (*ab)->info == valor */
			if (removeChildNodes(ab) == 0) /* Remove no de grau 2 */
				changeTree(ab, &((*ab)->sad));
		}
	}
}

char removeChildNodes(Tree **ab)
{
	Tree *aux;

	if ((*ab)->sae == NULL) { /* (*ab) eh folha ou tem unico filho */
		aux = (*ab);

		if (aux == aux->root)
		{
			updateTreeRoot(*ab,(*ab)->sad);
		}

		(*ab) = (*ab)->sad;
		free(aux);
		aux = NULL;
	}
	else {
		if ((*ab)->sad == NULL) { /* (*ab) eh folha ou tem unico filho */
			aux = (*ab);

			if (aux == aux->root)
				updateTreeRoot(*ab, (*ab)->sae);

			(*ab) = (*ab)->sae;

			free(aux);
			aux = NULL;
		}
		else {
			return(0);
		}
	}

	return(1);
}

void updateTreeRoot(Tree* ab, Tree* newRoot)
{
		Tree* root = newRoot;
		Tree* aux = ab;
		aux->root = newRoot;

		if (ab->sad != NULL)
		updateTreeRoot(ab->sad, newRoot);

		if (ab->sae != NULL)
		updateTreeRoot(ab->sae, newRoot);
}


int searchTreeIndex(char* ID, Tree* x)
{
	Tree* p = x;
	int count = 0;

	while (strcmp(p->ID, ID) != 0)
	{
		p = p->nextTree;
		count++;
	}
	return count;
}

/* Substitui o valor de um no, cujo valor esta sendo removido, pelo
valor do menor sucessor deste no, e remove o no do menor
sucessor. Auxilia RemoveValor. */

void changeTree(Tree **ab, Tree **maisesq)
{
	Tree *aux;

	if ((*maisesq)->sae == NULL) {
		(*ab)->num = (*maisesq)->num; /* substitui valor */
		removeChildNodes(maisesq); /* remove no */
	}
	else { /* busca sucessor */
		changeTree(ab, &((*maisesq)->sae));
	}
}

Tree * reorderTree(Tree * treeCollection)
{
	Tree * aux = treeCollection;
	Tree * last;

	if (treeCollection == NULL) return NULL;

	if (treeCollection->nextTree == NULL)
	{
		treeCollection = treeCollection->root;
		treeCollection->nextTree = NULL;
	}
	else
	{
		while (aux->nextTree != NULL)
		{
			aux->nextTree->root->nextTree = aux->nextTree->nextTree;
			aux->nextTree = aux->nextTree->root;
			aux = aux->nextTree;
		}
	}

	return treeCollection;
}

Tree* removeTree(char* ID, Tree* treeCollection)
{
	treeCollection = reorderTree(treeCollection);
	if (treeCollection == NULL) return NULL;

	Tree* p = treeCollection;
	Tree* last = NULL;
	Tree* aux;

	while (strcmp(p->ID, ID) != 0)
	{
		last = p;
		p = p->nextTree;
	}

	if (last == NULL && p->nextTree != NULL) { // caso seja o primeiro e tenha pr�ximo
		aux = p->nextTree;
		freeTree(&p);
		p = NULL;
		return aux;
	}

	else if (last == NULL && p->nextTree == NULL) // caso seja o �nico elemento
		return NULL;

	else if (last != NULL && p->nextTree != NULL) // caso esteja no meio da lista
	{
		last->nextTree = p->nextTree;
		freeTree(&p);
		p = NULL;
		return treeCollection;
	}

	else				 // caso seja o �ltimo
	{
		last->nextTree = NULL;
		freeTree(&p);
		p = NULL;
		return treeCollection;
	}

}

void freeTree(Tree** x)
{
	while ((*x) != NULL)
		removeNode(x, (*x)->num);
}

Tree* changeIndex(Tree* firstTree, int index, Tree *t)
{
	int count = 0;
	Tree* aux = firstTree;
	Tree* last = NULL;

	while (count < index)
	{
		last = aux;
		aux = aux->nextTree;
		count++;
	}

	if (last == NULL) // Caso seja a primeira fila
		firstTree = t;

	else
	{
		last->nextTree = t;
		t->nextTree = aux->nextTree;
	}

	return firstTree;
}

int treeHeight(Tree *ab)
{
	if (ab != NULL)
		return(1 + MAX(treeHeight(ab->sae), treeHeight(ab->sad)));
	else
		return(0);
}




/* Fun��o que mostra a informa��o da �rvore */
void showTree(Tree* t)
{
	/* Essa fun��o imprime os elementos de forma recursiva */

	printf("<"); /* nota��o para organizar na hora de mostrar os elementos */
	if (!treeIsEmpty(t)) /* se a �rvore n�o for vazia... */
	{
		/* Mostra os elementos em pr�-ordem */
		printf("%d ", t->num); /* mostra a raiz */
		showTree(t->sae); /* mostra a sae (sub�rvore � esquerda) */
		showTree(t->sad); /* mostra a sad (sub�rvore � direita) */
	}
	printf(">"); /* nota��o para organizar na hora de mostrar os elementos */
}

void printTreeStatus(Tree *ab, int h, int height)
{
	int i;
	char number[10];

	if (ab != NULL) {

		printTreeStatus(ab->sad, h + 1, height);
		for (i = 0; i < h; i++)
			strcat((ab->root->printStatus), "   ");

		itoa(ab->num, number, 10);

		strcat(ab->root->printStatus, number);

		for (i = 0; i < height - h; i++)
			strcat((ab->root->printStatus), "---");

		strcat((ab->root->printStatus), "\n");
		printTreeStatus(ab->sae, h + 1, height);
	}
}


