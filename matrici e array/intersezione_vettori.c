/*
26-01-2022
Siano dati due vettori di interi inseriti da tastiera. La lunghezza dei due vettori è inserita
dall’utente da tastiera. I due vettori possono avere lunghezze diverse, ma possono contenere al massimo 30 numeri.
Si scriva un programma in linguaggio C per generare un terzo vettore che contiene l’intersezione tra due vettori. 
Tale vettore deve contenere i numeri presenti in entrambi i vettori dati.
Ad esempio, si assuma che siano stati inseriti i due vettori:
1 6 15 20 25
2 20 18 6
Il programma deve visualizzare la sequenza 6 20.
*/

#include<stdio.h>
#include<stdlib.h>
#define N 30

int main(){
	int primo[N], secondo[N], terzo[N], i, controllo=0, n1=0, n2=0, n3=0, j, k;
	
	printf("Quanti numeri vuoi nel primo vettore? (massimo 30)\n");
	scanf("%d", &n1);
	
	printf("\nQuanti numeri vuoi nel secondo vettore? (massimo 30)\n");
	scanf("%d", &n2);
	
	printf("\n\nInserisci i numeri nel primo vettore:\n");
	for(i=0;i<n1;i++){
		scanf("%d", &primo[i]);
	}
	printf("\nInserisci i numeri nel secondo vettore:\n");
	for(i=0;i<n2;i++){
		scanf("%d", &secondo[i]);
	}
	
	printf("\nI numeri nel primo vettore e nel secondo vettore sono:\n");
	printf("Primo: ");
	for(i=0;i<n1;i++){
		printf("%d\t", primo[i]);
	}
	printf("\n");
	printf("Secondo: ");
	for(i=0;i<n2;i++){
		printf("%d\t", secondo[i]);
	}
	if(n1>n2 || n1==n2){
		for(i=0;i<n1;i++){
			for(j=0;j<n1;j++){
				if(primo[j]==secondo[i]){
				n3++;
				}
			}
		}
	}
	if(n1<n2){
		for(i=0;i<n2;i++){
			for(j=0;j<n2;j++){
				if(primo[j]==secondo[i]){
				n3++;
				}
			}
		}
	}
	printf("\n\nL'intersezione tra primo e secondo e':\n");
	if(n1>n2 || n1==n2){
		for(i=0;i<n1;i++){
			for(j=0;j<n1;j++){
				controllo=0;
				if(primo[i]==secondo[j]){
					controllo=1;
					if(controllo==1){
						terzo[k]=secondo[j];
						k++;
					}
				}
			}
		}
	}
	if(n1<n2){
		for(i=0;i<n2;i++){
			for(j=0;j<n2;j++){
				if(primo[i]==secondo[i]){
					controllo=1;
					if(controllo==1){
						terzo[k]=primo[i];
						k++;
					}
				}
			}
		}
	}
	for(i=0;i<n3;i++){
		printf("%d\t", terzo[i]);
	}
	
}
