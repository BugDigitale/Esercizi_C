/*
25-01-2022
Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore. 
Il numero N viene inserito dall’utente ed è minore di 20. Il programma deve generare un secondo vettore 
che compatta i numeri contenuti nel primo vettore. In particolare:
• ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta
nel secondo vettore
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo
vettore.
Il programma deve visualizzare il contenuto del secondo vettore.
Ad esempio, si supponga N=8 e si consideri la sequenza di numeri 1 18 3 0 24 3 6 0
inseriti da tastiera. Il programma deve visualizzare 1 18 3 24 6.
*/


#include <stdio.h>
#include <stdlib.h>
#define MAXN 20

int main(void){ 
	int vet[MAXN] ; 
	int compatto[MAXN] ; 
	int N ; 
	int N_compatto ; 
	int i, j ; 
	int trovato ; 


	do{
		printf("Quanti numeri saranno inseriti? ") ;
		scanf("%d",&N) ;
		if ( N > MAXN || N <=0 )
			printf("Errore: il numero deve essere compreso tra %d e 0\n", MAXN) ;
	}
	while ( N > MAXN || N <=0 ) ;
	
	printf("Inserisci una sequenza di %d numeri\n", N) ;
	for ( i=0; i<N; i++ ){
		printf("Elemento %d: ", i+1) ;
		scanf("%d", &vet[i]) ;
	}
	printf("\n") ;
	
	printf("La sequenza inserita e' la seguente\n") ;
	for ( i=0; i<N; i++ )
		printf("%d\n", vet[i]) ;
	printf("\n") ;


	N_compatto = 0 ;
	for ( i=0; i< N; i++ ){
		if ( vet[i] != 0 ){
			trovato=0;
			for ( j=0; j < N_compatto && trovato == 0; j++ ){
				if ( compatto[j] == vet[i] )
					trovato=1 ;
			}
			if ( trovato == 0 ){
				compatto[N_compatto] = vet[i] ;
				N_compatto = N_compatto + 1 ;
			}
		}
	}
	printf("Stampa del vettore risultante\n");
	if (N_compatto == 0)
		printf("Il vettore risultante non contiene nessun elemento \n") ;
	else{
		printf("Il vettore risultante contiene %d elementi \n", N_compatto) ;
		for ( i=0; i< N_compatto; i++ )
			printf("%d\n", compatto[i]) ;
		printf("\n") ;
	}
	exit(0) ;
}

