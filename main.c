#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

int main()
{
    //Programa teste
    TipoArvore *tree;
    char *frase1 = "Binary Tree RPG Game";
    char *frase2 = "Left node";
    char *frase3 = "Right node";


    CriaArvore(&tree);
    CriaNo(&tree, frase1);
    Visita(tree);

    InsereEsquerda(tree, frase2);
    InsereDireita(tree, frase3);
    VisitaDireita(tree);
    VisitaEsquerda(tree);

    return 0;
}
