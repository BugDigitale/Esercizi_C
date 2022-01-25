/*
25-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma
il vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza
di numeri, il programma deve verificare se il vettore contiene una sequenza di numeri
ordinata in modo strettamente crescente.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n, dim=0, i, controllo=0;
	
	printf("Quanti numeri vuoi inserire nel vettore? (massimo 30)\n");
	scanf("%d", &dim);
	
	if(dim==0){
		printf("\nInserisci almeno un numero!");
	}else if(dim<0){
		printf("\nCome pensi di poter inserire %d numeri??", dim);
	}else if(dim>30){
		printf("\nVuoi inserire troppi numeri, abbassa le tue priorita' :D");
	}else{
		n= malloc(dim*sizeof(int));
		printf("\nInserisci i numeri: ");
		for(i=0;i<dim;i++){
			scanf("%d", &n[i]);
		}
		
		printf("\n\nI numeri inseriti sono:\n");
		for(i=0;i<dim;i++){
			printf("\n");
			printf("%d", n[i]);
		}
		
		for(i=0;i<dim;i++){
			if(n[i]>n[i+1]){
				controllo=0;
			}else if(n[i]<n[i+1]){
				controllo++;
			}
		}
		if(controllo==dim){
			printf("\nI numeri sono in ordine crescente!");
		}else{
			printf("\nI numeri non sono in ordine crescente!");
		}
	}
}
