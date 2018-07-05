#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

void CriaArvore(TipoArvore *A) {
	*A = NULL;
}

void CriaNo(TipoArvore *A, char* f) {
    *A = (TipoArvore) malloc(sizeof(Node));
    (*A)->dir = NULL;
    (*A)->esq = NULL;
    (*A)->frase = f;
}

void InsereDireita(TipoArvore A, char* f) {
    CriaNo(&A->dir, f);
}

void InsereEsquerda(TipoArvore A, char* f) {
    CriaNo(&A->esq, f);
}

void VisitaDireita(TipoArvore A) {
    Visita(A->dir);
}

void VisitaEsquerda(TipoArvore A) {
    Visita(A->esq);
}

void Visita(TipoArvore A) {
    printf("%s\n", A->frase);
}
