/*
25-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
numeri, il programma deve verificare se gli elementi del vettore sono tutti uguali tra loro.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n, dim=0, i, controllo=0, j;
	
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
		
		printf("\nI numeri inseriti sono:");
		for(i=0;i<dim;i++){
			printf("\n");
			printf("%d", n[i]);
		}
		
		for(i=0;i<dim;i++){
				if(n[0]==n[i]){
					controllo++;
				}
		}
		
		if(controllo==dim){
			printf("\nTutti i numeri sono uguali!");
		}else{
			printf("\nI numeri non sono tutti uguali!");
		}
	}
	
}
