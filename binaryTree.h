#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct Node *TipoApontador;

typedef struct Node {
	char *frase;
	struct Node *esq, *dir;
} Node;

typedef TipoApontador TipoArvore;

void CriaArvore(TipoArvore *A);
void CriaNo(TipoArvore *A, char* f);
void Visita(TipoArvore A);

void InsereDireita(TipoArvore A, char* f);
void InsereEsquerda(TipoArvore A, char* f);
void VisitaDireita(TipoArvore A);
void VisitaEsquerda(TipoArvore A);

#endif // BINARY_TREE_H
