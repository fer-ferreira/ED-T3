#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "BinaryTree.h"

int main(){

	//Cria��o de vari�veis
	int num = 1;
	char tecla;
	Arvore historia; //Vetor de n�s

	//Inicializa��o do vetor
	for(int n=0; n<1000; n++){
		strcpy(historia[n].texto1,"0");
	}

	//Inicializa��o do jogo
	LeArquivo(historia);


	Imprime(historia, num);
	
	scanf(" %c", &tecla);
	 
	   
	while(true){ //while para percorrer a arvore
		if(tecla=='D' || tecla =='d'){ // vai para o n� da direita
			num = (num*2)+1;
			if(!NoFolha(historia,num))
				Imprime(historia,num);
				
			
		}
		else if(tecla=='E' || tecla =='e'){ // vai para o n� da esquerda
			num = num*2;
			if(!NoFolha(historia,num))
				Imprime(historia,num);
		
			
		}
		if(NoFolha(historia, num)){
			Imprime(historia, num);

			//printf("fim do jogo\n");
			if(historia[num].evento){ //final do jogo
				//printa o primeiro n�
				printf("Escolha uma das opcoes abaixo:\n");
				printf("[A] - Sugz e Carol compactuam o desejo da criacao de um ser soberano que dominara todos os universos. Para tal, estao realizando mutacoes geneticas em seres, afim de alcancarem a evolucao perfeita. Sequestrando planetas inteiros para uma outra dimensao.\n");
				printf("[B] - A religiao Novo Eden determina entre seus adeptos quais tem mais caracteristicas divinas. Estes tem seus planetas sequestrados e levados para uma dimensao alternativa onde espera-se criar um novo universo, habitado apenas por seres divinos.\n");
				printf("[C] - Carol esta buscando gerar um Deus novo realizando experimento em todos os seres adeptos a sua religao. Quando um ser nao responde bem a esses procedimentos toda a raca dele eh expurgada e o planeta eh desintegrado.\n");

				char fim;
				scanf(" %c", &fim);
				fflush(stdin);

				switch(fim){
					case 'A':
						printf("\nParabens voce eh um otimo detetive. Caso solucionado!\n");
						break;
					case 'B':
						printf("\nAcho que voce precisa rever seus conceitos de detetive. Seguir a intuicao nem sempre eh uma boa opcao. Tente novamente mais tarde\n");
						break;
					case 'C':
						printf("\nQue pena, mas a religiao Novo Eden nao eh tao malvada assim. Jah pensou que voce talvez seja um fanatico religioso?\n");
						break;
				}
			}

			break; // sai do while se for n� folha
		}
		scanf(" %c", &tecla);
	}

	return 0;
}
