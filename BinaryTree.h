#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct{
    char texto1[1300], texto2[1200], texto3[1200];
    int pos;
    int evento;
}No;

typedef No Arvore[1000];

void LeArquivo(No *historia);
bool NoFolha(No *historia, int num);
void Imprime(No *historia, int num);

#endif // BINARY_TREE_H
