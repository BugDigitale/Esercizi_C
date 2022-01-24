/*
24-01-2022
Si scriva un programma in linguaggio C per poter analizzare una sequenza di numeri.
Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi
risultati:
• quanti sono i numeri positivi, nulli e negativi
• quanti sono i numeri pari e dispari
• se la sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né
decrescente.
Suggerimento. Una sequenza è crescente se ogni numero è maggiore del precedente, decrescente
se ogni numero è minore del precedente, né crescente né decrescente in tutti gli
altri casi.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a, i, positivi=0, negativi=0, pari=0, dispari=0, dim=0, controllo=0, controllo2=0, m=0;
	
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d", &dim);
	
	a=malloc(dim*sizeof(int));
	printf("Inserire una sequenza di numeri:\n");
	for(i=0;i<dim;i++){
		scanf("%d", &a[i]);
	}
	printf("\nI numieri sono:");
	for(i=0;i<dim;i++){
		printf("\n%d", a[i]);
		
		if(a[i]>0){
			positivi++;
		}else if (a[i]<0){
			negativi++;
		}
		
		if(a[i]%2==0){
			pari++;
		}else if(a[i]%2==1){
			dispari++;
		}
	}
	m=a[0];
	for(i=1;i<dim;i++){
		if(m>a[i]){
			m=a[i];
			controllo++;
		}else if(a[0]<a[i]){
			controllo2++;
		}
	}
	printf("\nI numeri positivi sono: %d", positivi);
	printf("\nI numeri negativi sono: %d", negativi);
	
	printf("\n\nI numeri dispari sono: %d", dispari);
	printf("\nI numeri pari sono: %d", pari);
	
	if(dim==1){
		printf("\n\nTroppi pochi numeri per dire l'ordine :(");
		exit(0);
	}
	if(controllo==dim-1){
		printf("\n\nI numeri sono messi in maniera decrescente");
	}else if(controllo2==dim-1){
		printf("\n\nI numeri sono messi in maniera crescente");
	}else{
		printf("\n\nI numeri non sono messi ne in maniera crescente, ne decrescente");
	}

	
	
	
}
