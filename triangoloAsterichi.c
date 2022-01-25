/*
24-01-2022
Si realizzi una variante del programma per visualizzare un triangolo isoscele rettangolo di lato N (vedi esempio con N = 5).
*
**
***
****
*****
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	

CASO 3:
	int lato; 				
	int riga, colonna ; 		
							
	printf("Inserisci il lato del quadrato: ") ;
	scanf("%d",&lato) ;
			
	if ( lato <= 0 )
		printf("Errore, il lato deve essere maggiore di zero\n") ;
	else{
		riga = 0 ;
		while ( riga < lato ){
			colonna = 0 ;
			while ( colonna <= riga ){
				printf("*") ;
				colonna = colonna + 1 ;
			}
			printf("\n") ;
			riga = riga + 1 ;
		}
	}
exit(0) ;
}


