/*
22-01-2022
Memorizzare in un array bidimensionale 10 x 10 dei numeri casuali compresi tra zero e nove,
stamparne il contenuto e dire quanti zeri sono memorizzati all’interno dell’array

ANALISI E SPECIFICA
-dati in input: matrice 10x10 
-precondizione: i numeri dovranno essere casuali e compresi tra 0 e 9
-dati in output: stampa del contenuto
-postcondizione: dire quanti 0 ci sono

NOME          TIPO             DESCRIIZIONE
mat           int              matrice 10x10
i             int              variabile intermedia usata come indice
j             int              variabile intermedia usata come indice
k             int              variabile intermedia usata come costante

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione stampa;

PROGETTAZIONE
funzione main
-richiamo alla funzione stampa

funzione stampa
-stampa della matrice
-conteggio degli 0
-stampa del conteggio

*/

#include<stdio.h>
#define righe 3
#define colonne 3

void stampa(int mat[][colonne]);

int main(){
	int mat[righe][colonne];

	stampa(mat);
}

void stampa(int mat[][colonne]){
	int i, j, k=0;
	
	srand(time(NULL));
	
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			mat[i][j]= rand() % 10;
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			if(mat[i][j]==0){
				k++;
			}
		}
	}
	if(k==1){
		printf("\nC'e' un solo 0");
	} else if(k>1){
		printf("\nGli 0 sono: %d", k);
	} else if(k==0){
		printf("\nNon ci sono 0");
	}
}



