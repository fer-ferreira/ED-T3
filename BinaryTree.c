#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "BinaryTree.h"

//void LeArquivo(Arvore *historia){
void LeArquivo(No *historia){
    FILE *nos;
    nos = fopen("nos.txt","r");

    No noA;

    for(int i=0; i<42; i++){
        fgets(noA.texto1, sizeof(noA.texto1), nos);
	fgets(noA.texto2, sizeof(noA.texto2), nos);
	fgets(noA.texto3, sizeof(noA.texto3), nos);
        fscanf(nos, "%d\n", &(noA.pos));
        fscanf(nos, "%d\n", &(noA.evento));

        historia[noA.pos].pos = noA.pos;
        strcpy(historia[noA.pos].texto1, noA.texto1);
	strcpy(historia[noA.pos].texto2, noA.texto2);
	strcpy(historia[noA.pos].texto3, noA.texto3);
        historia[noA.pos].evento = noA.evento;
    }

}

//bool NoFolha(Arvore *historia, int num){
bool NoFolha(No *historia, int num){
    if(strcmp(historia[num*2+1].texto1, "0")==0 && strcmp(historia[num*2].texto1, "0")==0)
        return true;
    else
        return false;
}

//void Imprime(Arvore *historia, int num){
void Imprime(No *historia, int num){
    printf("%s\n%s\n%s\n", historia[num].texto1, historia[num].texto2, historia[num].texto3);

}

