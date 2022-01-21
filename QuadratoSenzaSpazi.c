/*
21-10-2021
scrivere una funzione che prende in input un int n e stampa
un quadrato di lato n con il centro del quadrato vuoto
*/



#include<stdio.h>

void quadrato_asterischi (int n){
	int a, j;
	
	for(a=0;a<n;a++){
		for(j=0;j<n;j++){
			if((a==0 || j==0) || (a==n-1 || j==n-1)){
				printf("*");
			}else
				printf(" ");
			
		}
		printf("\n");
		
	}
}

main(){
	
	int n;
	printf("inserisci la lunghezza del quadrato: ");
	scanf("%d",&n);
	quadrato_asterischi(n);
}

