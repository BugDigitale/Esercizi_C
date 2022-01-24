/*
24-01-2022
Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un
insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed
in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve
stampare il massimo ed il minimo tra i numeri inseriti.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a, i, dim=0, max=0, min=0;
	
	printf("Inserisci il numero di numeri che vuoi nel programma: ");
	scanf("%d", &dim);
	
	if(dim==0){
		printf("\nInserire almeno un numero!");
	}else{
		a=malloc(dim*sizeof(int));
		printf("\nInserire i numeri:\n");
		for(i=0;i<dim;i++){
			scanf("%d", &a[i]);
		}
		min=a[0];
		printf("\n\nI numeri sono:\n");
		for(i=0;i<dim;i++){
			printf("%d\n", a[i]);
			if(max<a[i]){
			max=a[i];
			}
		
			if(min>a[i]){
			min=a[i];
			}
		}
		printf("\nIl numero maggiore e': %d", max);
		printf("\nIl numero minore e': %d", min);
	}	
}
