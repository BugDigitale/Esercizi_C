/*
22-01-2022
Memorizzare in un array bidimensionale 5 per 5 tutti zeri tranne nelle celle della diagonale principale dove 
memorizzare uno ovvero:
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1

ANALISI E SPECIFICA
-dati in input: una matrice 5x5 
-precondizione: la matrice ha tutti 0
-dato in output: una matrice 5x5 con 1 nella diagonale principale
-postcondizione:

NOME        TIPO          DESCRIZIONE
mat         int           matrice 5x5
i           int           variabile intermedia usata come indice
j           int           variabile intermedia usata come indice
a           int           variabile intermedia usata come costante
b           int           variabile intermedia usata come costante

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione diagonale

PROGETTAZIONE
funzione main
-richiamo alla funzione diagonale

funzione diagonale
-inserimento degli 0 nella matrice
-inserimento della diagonale =1 
-stampa della matrice finale

*/

#include<stdio.h>
#define righe 5
#define colonne 5

void diagonale(int mat[][colonne]);

int main(){
	int mat[righe][colonne];
	
	diagonale(mat);
}

void diagonale(int mat[][colonne]){
	int i, j, a=0, b=0;
	
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			mat[i][j]=0;
			if(i==j){
				mat[a][b]=1;
				printf("%d ", mat[i][j]);
				a++;
				b++;
			}else{
				printf("%d ", mat[i][j]);
			}
		}
		printf("\n");
	}
}
