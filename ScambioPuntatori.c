/*
20-01-2022
Scrivete una funzione con prototipo void scambia( int *p, int *q ) che scambi i valori delle due variabili puntate
da p e q.
*/

#include<stdio.h>

void scambia( int *p, int *q);

int main(){
	int a, b;
	int* p; 
	int* q;
	
	printf("Inserire la prima variabile: ");
	p= &a;
	scanf("%d", p); 
	printf("\nInserire la seconda variabile: ");
	q= &b;
	scanf("%d", q);
	
	printf("\n\nIl primo numero: %d", *p);
	printf("\n\nIl secondo numero: %d", *q);
	
	scambia(p, q);
}

void scambia( int *p, int *q){
	int* i;
	int j;
	
	j= &i;
	
	*i= *p;
	*p= *q;
	*q= *i;
	
	printf("\n\n\nOra il primo numero e': %d", *p);
	printf("\n\nIl secondo e': %d", *q);	
}
