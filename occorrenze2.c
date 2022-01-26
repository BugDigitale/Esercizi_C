/*
26-01-2022
Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore.
Il numero N viene inserito dall'utente ed è massimo di 20. Il programma deve visualizzare, per ogni cifra
contenuta nel vettore, il numero di occorrenze. Ad esempio, si supponga N=7 e si consideri la sequenza di
numeri 1 6 15 6 2 15 15. Il programma deve visualizzare:
numero 1 occorrenze 1
numero 6 occorrenze 2
numero 15 occorrenze 3
numero 2 occorrenze 1
*/

#include<stdio.h>
#include<stdlib.h>

void occorrenze(int *n, int dim);

int main(){
	int *n, i, j, k=0, controllo=0, dim=0;
	
	printf("Quanti numeri vuoi nel vettore? (massimo 20)\n");
	scanf("%d", &dim);
	
	if(dim<=0){
		printf("\nInserire almeno un numero!");
	}else{
		n=malloc(dim*sizeof(int));
		printf("\n\nInserisci i numeri nel vettore:\n");
		for(i=0;i<dim;i++){
			scanf("%d", &n[i]);
		}
		printf("\nI numeri inseriti sono:\n");
		for(i=0;i<dim;i++){
			printf("%d\n", n[i]);
		}
		occorrenze(n, dim);
	}
}

void occorrenze(int *n, int dim){
	int i, j, controllo=0, k=0;

	for(i=0;i<dim;i++){
		for(j=0;j<i;j++){
			controllo=0;
			if(n[i]==n[j]){
				controllo=1;
			}
		}
		if(controllo==0){
			k=0;
			for(j=0;j<dim;j++){
				if(n[i]==n[j]){
					k++;
				}
			}
			printf("\nnumero %d occorrenze %d", n[i], k);
		}
	}	
}
