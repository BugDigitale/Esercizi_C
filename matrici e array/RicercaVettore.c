/*
25-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
numeri, l’utente inserisce un valore di riferimento. Il programma deve indicare se tale
valore di riferimento è contenuto nel vettore.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n, i, dim=0, numcerc=0, controllo=0;
	
	printf("Quanti numeri vuoi inserire nel vettore? (massimo 30)\n");
	scanf("%d", &dim);
	
	if(dim==0){
		printf("\nInserisci almeno un numero!");
	}else if(dim<0){
		printf("\nCome pensi di poter inserire %d numeri??", dim);
	}else if(dim>30){
		printf("\nVuoi inserire troppi numeri, abbassa le tue priorita' :D");
	}else{
		n=malloc(dim*sizeof(int));
		printf("\nInserisci i numeri:\n");
		for(i=0;i<dim;i++){
			scanf("%d", &n[i]);
		}
		
		printf("\n\nI numeri inseriti sono: ");
		for(i=0;i<dim;i++){
			printf("\n");
			printf("%d", n[i]);
		}
		
		printf("\n\nInserisci il numero che vuoi cercare nel vettore: ");
		scanf("%d", &numcerc);
		
		for(i=0;i<dim;i++){
			if(numcerc==n[i]){
				controllo=1;
			}
		}
		if(controllo==1){
			printf("\n\nIl numero cercato e' contenuto nel vettore");
		}else{
			printf("\n\nIl numero cercato non e' contenuto nel vettore");
		}
	}
}

