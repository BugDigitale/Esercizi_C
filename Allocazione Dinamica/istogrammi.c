/*
25-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. Il valore N è inserito dall’utente. I numeri sono memorizzati in un vettore. Terminato l’inserimento della sequenza di numeri, il programma deve visualizzare una riga di
asterischi per ogni numero inserito. Il numero di asterischi nella riga è pari al valore del
numero inserito. Ad esempio, dato il vettore 9 4 6 il programma deve visualizzare:
Elemento 1: 9 *********
Elemento 2: 4 ****
Elemento 3: 6 ******
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a, dim=0, i, controllo=0;
	
	printf("Quanti numeri vuoi inserire nel vettore?\n");
	scanf("%d", &dim);
	
	if(dim==0){
		printf("\nInserisci almeno un numero!");
	}else if(dim<0){
		printf("\nCome pensi di poter inserire %d numeri??", dim);
	}else{
		a=malloc(dim*sizeof(int));
		printf("\nInserisci i numeri:\n");
		for(i=0;i<dim;i++){
			scanf("%d", &a[i]);
		}
		printf("\nI numeri inseriti sono:");
		for(i=0;i<dim;i++){
			printf("\n");
			printf("%d", a[i]);
		}
		
		printf("\n\n");
		for(i=0;i<dim;i++){
			printf("\nElemento %d: %d\t", i+1, a[i]);
			controllo=0;
			while(controllo!=a[i]){
				printf("*");
				controllo++;
			}
		}
	}
}
