/*
Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera, calcoli e stampi:
1. l'area del quadrato di lato D
2. l'area del cerchio di diametro D
3. l'area del triangolo equilatero di lato D

ANALISI E SPECIFICA
dati in input: numero inserito dall'utente
precondizione: il numero è un numero reale
dati in output: area del quadrato, area del cerchio e area del triangolo equilatero
postcondizione: utilizzare le formule geometriche per calcolare le tre aree

NOME        TIPO      DESCRIZIONE
D           float     numero reale inserito dall'utente 
areaQuad    float     risultato dell'area del quadrato
areaCer     float     risualto dell'area del cerchio
areaTri     float     risulato dell'area del triangolo equilatero
P           float     costante del pi greco

Come posso divere il programma?
-Funzione main
-Funzione AreaQuadrato
-Funzione AreaCerchio
-Funzione AreaTriangolo

ANALISI E SPECIFICA FUNZIONE main
dati in input: numero D inserito dall'utente
precondizone: il numero è un numero reale

NOME    TIPO      DESCRZIONE
D       float     numero reale inserito dall'utente e in questo caso anche lato

ANALISI E SPECIFICA FUNZIONE AreaQuadrato
dati in input: D ricavato dal main
dati in output: risultato del calcolo dell'area del quadrato
postcondizione: risultato ottenuto con la regola geometrica del calcolo dell'area del quadrato 

NOME       TIPO     DESCRIZIONE
areaQuad   float    risualtato del calcolo per l'area del quadrato


ANALISI E SPECIFICA FUNZIONE AreaCerchio
dati in input: D ricavato dal main
dati in output: risultato del calcolo dell'area del cerchio
postcondizione: risultato ottenuto con la regola geometrica del calcolo dell'area del cerchio

NOME       TIPO     DESCRIZIONE
areaCer    float    risualtato del calcolo per l'area del cerchio


ANALISI E SPECIFICA FUNZIONE AreaTriangolo
dati in input: D ricavato dal main
dati in output: risultato del calcolo dell'area del triangolo equilatero
postcondizione: risultato ottenuto con la regola geometrica del calcolo dell'area del triangolo equilatero

NOME       TIPO     DESCRIZIONE
areaTri    float    risualtato del calcolo per l'area del triangolo equilatero


PSEUDOCOFIDICA/PROGETTAZIONE
funzione AreaQuadrato
	calcolare l'area del quadrato
	stampare il risultato
fine funzione

funzione AreaCerchio
	calcolare l'area del cerchio
	stampare il risultato
fine funzione

funzione AreaTriangolo
	calcolare l'area del triangolo equilatero
	stampare il risultato
fine funzione

far inserire dall'utente un numero reale d
inizializzare d

richiamo alla funzione AreaQuadrato
richiamo alla funzione AreaCerchio
richiamo alla funzione AreaTriangolo


*/

#include<stdio.h>
#include<math.h>
#define P 3.14159

float AreaQuadrato(float d){
	float areaQuad=0;
	areaQuad= d*d;
	return areaQuad;
}

float AreaCerchio(float d){
	float areaCer=0;
	areaCer= (d/2)*(d/2)*P;
	return areaCer;
}

float AreaTriangolo(float d){
	float areaTri=0;
	areaTri= (sqrt(3)/4)*d*d;
	return areaTri;
}
 


main(){
	float D=0;
	
	printf("Inserire la grandezza del lato: ");
	scanf("%f",&D);
	
	printf("L'area del quadrato e': %.2f", AreaQuadrato(D));
	printf("\nL'area del cerchio e': %.2f", AreaCerchio(D));
	printf("\nL'area del triangolo equilatero e': %.2f", AreaTriangolo(D));
}
