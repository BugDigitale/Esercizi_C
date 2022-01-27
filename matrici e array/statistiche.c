/*
27-01-2022
Si scriva un programma in C che acquisisca da tastiera un testo libero, composto da più
righe (max 1000) di un numero di caratteri non superiore a 100 ciascuna. L’inserimento
termina quando l’utente inserirà una riga uguale a FINE.
Al termine dell’acquisizione del testo, il programma dovrà stampare le seguenti statistiche:
1. il numero totale di righe inserite;
2. il numero totale di caratteri inseriti;
3. il numero totale di caratteri alfanumerici inseriti;
4. il numero totale di parole inserite.

ANALISI E SPECIFICA
-dati in input: un testo libero
-precondizione: composto da più righe (massimo 1000) di un numero di caratteri non superiore a 100
-dati in output: il numero di righe inserite. Il numero totale di caratteri inseriti. Il numero
 totale di caratteri alfanumerici inseriti. Il numero totale di parole inserite.
-postcondizione: il programma si ferma quando viene inserita la parola FINE

NOME			TIPO		DESCRIZIONE
i				int			variabile intermedia usata come indice
j				int			variabile intermedia usata come indice
num_caratteri	int			variabile contente il numero di caratteri del testo
num_alfa		int			variabile contente il numero di caratteri alfanumeri del testo
num_parole		int			variabile contente il numero di parole del testo
end				int			variabile di flag
righe_inser		int			variabile contente il numero di righe
somma_car		int			variabile contente la somma di tutti i caratteri
mat				char		vettore di caratteri contente il testo inserito
riga			char		vettore di caratteri contente le righe inserite

*/

#include<stdio.h>
#include<stdlib.h>
#define max 1000
#define lun 100
#include<string.h>

int main(){
	int i, j, num_caratteri=0, num_alfa=0, num_parole=0, end=0, righe_inser=0, somma_car=0;
	char mat[max][lun+1], riga[300];
	
	printf("Inserisci il testo:\n") ;
	do{
		gets(riga) ;

		if ( strlen(riga) > lun )
			printf("Errore: riga troppo lunga (max %d caratteri)\n", lun) ;
		else if ( strcmp( riga, "FINE" )==0 )
			end = 1 ;
		else{
			strcpy( mat[righe_inser], riga ) ;
			righe_inser++ ;
		}

	}while(end==0 && righe_inser<max);
	
	for(i=0;i<righe_inser;i++){
		num_caratteri= strlen(mat[i]);
		somma_car=somma_car+ num_caratteri;
	}
	
	for(i=0;i<righe_inser;i++){
		for(j=0;mat[i][j]!=0; j++){
			if(isalnum(mat[i][j])){
				num_alfa++;
			}
		}
	}
	
	for(i=0;i<righe_inser;i++){
		for(j=0;mat[i][j]!=0; j++){
			if(isalpha(mat[i][j]) && ((j==0)) || !isalpha(mat[i][j-1])){
				num_parole++;
			}
		}
	}
	
	
	printf("\n\n");
	printf("Il numero di righe e' di: %d", righe_inser);
	
	printf("\n\nIl numero di caratteri e': %d", somma_car);
	
	printf("\n\nIl numero di caratteri alfanumeri e': %d", num_alfa);
	
	printf("\n\nIl numero di parole e' di: %d", num_parole);
}
