/*
25-01-2022
Scrivere un programma in linguaggio C per la rappresentazione del triangolo di Floyd. Il
triangolo di Floyd è un triangolo rettangolo che contiene numeri naturali, definito riempiendo le righe del triangolo con numeri consecutivi e partendo da 1 nell’angolo in alto a
sinistra.
Si consideri ad esempio il caso N=5. Il triangolo di Floyd e’ il seguente:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Il programma riceve da tastiera un numero intero N. Il programma visualizza le prime
N righe del triangolo di Floyd.
Suggerimento. Si osserva che il numero di valori in ogni riga corrisponde all’indice della
riga: 1 valore sulla prima riga, 2 sulla seconda, 3 sulla terza.

*/


#include<stdio.h>
#include<stdlib.h>

int main(){
	int lato; 				
	int riga, colonna, a=1;; 		
							
	printf("Inserisci il lato del quadrato: ") ;
	scanf("%d",&lato) ;
	
	if ( lato <= 0 )
		printf("Errore, il lato deve essere maggiore di zero\n") ;
	else{
		riga = 0 ;
		while ( riga < lato ){
			colonna = 0 ;
			while ( colonna <= riga ){
				printf("%d ", a) ;
				a++;
				colonna = colonna + 1 ;
			}
			printf("\n") ;
			riga = riga + 1 ;
		}
	}
exit(0) ;
}

