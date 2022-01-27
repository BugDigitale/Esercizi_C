/*
27-01-2022
Si scriva un programma in linguaggio C che riceva in ingresso due parole inserite da tastiera.
Si consideri che ciascuna parola può contenere al massimo 30 caratteri. Il programma deve 
sostituire ogni occorrenza della seconda parola nella prima parola con una sequenza di caratteri ’*’.
Ad esempio, inserite le parole abchdfffchdtlchd e chd, il programma deve visualizare la parola: ab***fff***tl***.

ANALISI E SPECIFICA
-dati in inuput: due frasi o parole inserite dall'utente
-precondizione: massimo 30 caratteri la lunghezza delle due stringhe
-dati in inuput: frase modificata con gli *
-postcondizone: inserire gli * al posto della seconda parola inserita, se questa parola è contenuta nella prima

NOME			TIPO		DESCRIZIONE
parola1			char		stringa contente la prima parola o frase inserita
parola2			char		stringa contente la seconda parola o frase inserita
contenuto		int			variabile usata come flag
lung_stringa1	int			variabile contente la lunghezza della prima stringa
lung_stringa2	int			variabile contente la lunghezza della seconda stringa
i				int			variabile intermedia usata come indice
j				int			variabile intermedia usata come indice

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione sostituzione;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: due frasi o parole inserite dall'utente
-precondizione: massimo 30 caratteri la lunghezza delle due stringhe
-dati in output:
-postcondizone:

NOME			TIPO		DESCRIZIONE
parola1			char		stringa contente la prima parola o frase inserita
parola2			char		stringa contente la seconda parola o frase inserita
lung_stringa1	int			variabile contente la lunghezza della prima stringa
lung_stringa2	int			variabile contente la lunghezza della seconda stringa

ANALISI E SPECIFICA DELLA FUNZIONE sostituzione
-dati in inuput: le due frasi inserite nella funzione main con la loro dimensione
-precondizione: 
-dati in inuput: frase modificata con gli *
-postcondizone: inserire gli * al posto della seconda parola inserita, se questa parola è contenuta nella prima

NOME			TIPO		DESCRIZIONE
contenuto		int			variabile usata come flag
i				int			variabile intermedia usata come indice
j				int			variabile intermedia usata come indice

PROGETTAZIONE
funzione main
-inserimento della prima frase
-stampa della prima frase
-conteggio lunghezza prima frase
-inserimento della seconda frase
-stampa della seconda frase
-conteggio della seconda frase
-richiamo alla funzione sostituzione

funzione sostituzione
-controllo lunghezze delle due frase
-stampa degli asterischi in modo opportuno

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXDIM 30

void sostituzione(char parola1[], char parola2[], int lung_stringa1, int lung_stringa2);

int main(void){
	 
	char parola1[MAXDIM + 1] ; 
	char parola2[MAXDIM + 1] ; 
	int lung_stringa1, lung_stringa2 ; 

	printf ("Inserisci una parola di al massimo %d caratteri: ", MAXDIM) ;
	gets(parola1) ;
	lung_stringa1 = strlen(parola1) ;
	printf("\nLa parola %s contiene %d lettere\n", parola1, lung_stringa1) ;

	printf ("\nInserisci una parola di al massimo %d caratteri: ", MAXDIM) ;
	gets(parola2) ;
	lung_stringa2 = strlen(parola2) ;
	printf("\nLa parola %s contiene %d lettere\n", parola2, lung_stringa2) ;
	
	sostituzione(parola1, parola2, lung_stringa1, lung_stringa2);

}

void sostituzione(char parola1[], char parola2[], int lung_stringa1, int lung_stringa2){
	int contenuto ; 
	int i, j ; 
	
	if ( lung_stringa1 < lung_stringa2 )
		printf("La seconda parola e’ piu’ lunga della prima parola \n") ;
	else{
		for ( i=0; i+(lung_stringa2-1)<lung_stringa1; i++ ){
		contenuto = 1 ;
			for ( j=0; j<lung_stringa2 && contenuto==1; j++ ){
				if ( parola1[i+j] != parola2[j] )
				contenuto = 0 ;
			}
			if ( contenuto==1 ){
				for ( j=0; j<lung_stringa2; j++ )
					parola1[i+j] = '*';
				i = i + lung_stringa2 - 1 ;
			}
		}
	}

	printf("La parola risultante e': %s \n", parola1) ;
}
