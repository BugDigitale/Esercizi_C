/*
20-01-2022
Scrivere un programma che chieda in input N numeri interi (con N definito dall'utente) e li memorizzi in un vettore. 
Calcolare la somma dei numeri inseriti usando unicacmente l'aritmetica dei puntatori (non si deve accere al vettore 
con v[i]). Stampare in output il valore della somma degli elementi del vettore
*/

#include<stdio.h>
#define N 50

void calcolo(int *p, int n){
	int i, somma=0;
	
	for(i=0;i<n;i++){
		somma= somma + p[i];		
	}
	printf("\n\nla somma e': %d", somma);
}

int main(){
	int *p;
	int a[N];
	int i, n;
	
	printf("quanti numeri vuoi inserie:");
	scanf("%d", &n);
	
	printf("\n\ninserisci i numeri che vuoi:\n");
	for(i=0;i<n;i++){
		p= a;
		scanf("%d", &p[i]);
	}
	printf("\n\nI numeri sono:\n");
	for(i=0;i<n;i++){
		printf("\n"),
		printf("%d", p[i]);
	}
	calcolo(p, n);
}
