extern "C" {
#include "Tree.h"
#include <stdio.h>  
#include <stdlib.h>
#include <string.h>
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

/* Fun��o que insere um dado na �rvore */
void insertTree(Tree** t, int num)
{
	/* Essa fun��o insere os elementos de forma recursiva */
	if (*t == NULL)
	{
		*t = (Tree*)malloc(sizeof(Tree)); /* Aloca mem�ria para a estrutura */
		(*t)->sae = NULL; /* Sub�rvore � esquerda � NULL */
		(*t)->sad = NULL; /* Sub�rvore � direita � NULL */
		(*t)->num = num; /* Armazena a informa��o */
	}
	else {
		if (num < (*t)->num) /* Se o n�mero for menor ent�o vai pra esquerda */
		{
			/* Percorre pela sub�rvore � esquerda */
			insertTree(&(*t)->sae, num);
		}
		if (num >(*t)->num) /* Se o n�mero for maior ent�o vai pra direita */
		{
			/* Percorre pela sub�rvore � direita */
			insertTree(&(*t)->sad, num);
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

