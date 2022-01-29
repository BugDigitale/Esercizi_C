/*
28-01-2022
Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) che lo caratterizza,
un numero di pagine e un costo. Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina
dei libri e si stampino i dati dei tre libri in ordine crescente di costo per pagina.

ANALISI E SPECIFICA:
-dati in input: una struttura di un libro inserita da tastiera
-precondizione: il libro dovrà avere un codice numerico, pagine e costo. Dovranno essere 3
-dati in output: i 3 libri inseriti
-postcondizione: il costo medio delle pagine e il costo medio delle pagine in ordine crescente

NOME			TIPO			DESCRIZIONE
libro			strutt_libro	array contente il codice numerico, pagine e costo 
i				int				variabile intermedia usata come indice
j				int				variabile intermedia usata come indice
media			float			array usato per memorizzare la media del costo delle pagine
h				float			variabile usata per l'ordine crescete
controllo		int				variabile usata come flag

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main
-funzione costo_medio
-funzione controllo_codice

ANALISI E SPECIFICA DELLA FUNZINE main
-dati in input: una struttura di un libro inserita da tastiera
-precondizione: il libro dovrà avere un codice numerico, pagine e costo. Dovranno essere 3
-dati in output: i 3 libri inseriti
-postcondizione:

NOME			TIPO			DESCRIZIONE
libro			strutt_libro	array contente il codice numerico, pagine e costo 
i				int				variabile intermedia usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE costo_medio
-dati in input: la struttura inserita nel main
-precondizone:
-dati in output: il costo medio delle pagine
-postcondizione: metterlo in ordine crescete

NOME			TIPO			DESCRIZIONE
i				int				variabile intermedia usata come indice
j				int				variabile intermedia usata come indice
media			float			array usato per memorizzare la media del costo delle pagine
h				float			variabile usata per l'ordine crescete

ANALISI E SPECIFICA DELLA FUNZIONE controllo_codice
-dati in input: i codici numerici della struttura inserita nel main
-precondizione:
-dati in output: un messaggio di errore se si inserisce lo stesso codice
-postcondizione:

NOME			TIPO			DESCRIZIONE
i				int				variabile intermedia usata come indice
j				int				variabile intermedia usata come indice
controllo		int				variabile usata come flag

PROGETTAZIONE
funzione main
-inserimento dei codici
-inserimento delle pagine
-inserimento dei costi
-stampa delle 3 variabili
-richiamo alla funzione controllo_codice
-richiamo alla funzione costo_medio

funzione controllo codice
-controllo dei codici
-stampa dell'errore in caso ci sia

funzione costo_medio
-calcolo del costo medio
-stampa del costo medio
-costo medio stampato in ordine crescente
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 3

typedef struct{
	int codice_numerico;
	float pagine;
	float costo;
}strutt_libro;

void costo_medio(strutt_libro libro[]);
void controllo_codice(strutt_libro libro[]);

int main(){
	strutt_libro libro[max];
	int i;
	
	
	for(i=0;i<max;i++){
		printf("\n");
		printf("Libro Numero %d\n", i+1);
		printf("Inserisci il codice numerico del libro: ");
		scanf("%d", &libro[i].codice_numerico);
		
		printf("Inserisci il numero di pagine: ");
		scanf("%f", &libro[i].pagine);
		
		printf("Inserisci il costo del libro: ");
		scanf("%f", &libro[i].costo);
	}
	
	for(i=0;i<max;i++){
		printf("\n\n");
		printf("Libro Numero %d\n", i+1);
		printf("Il codice numerico del %d libro e': %d\n", i+1, libro[i].codice_numerico);
		
		printf("Il numero di pagine del %d libro e': %.2f\n", i+1, libro[i].pagine);
		
		printf("Il costo del %d libro e': %.2f\n", i+1, libro[i].costo);
	}
	
	controllo_codice(libro);
	
	costo_medio(libro);	
}

void controllo_codice(strutt_libro libro[]){
	int j, controllo=0, i;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(i!=j){
				if(libro[i].codice_numerico==libro[j].codice_numerico){
					controllo=1;
				}
				if(controllo==1){
					printf("\nERRORE! Ogni libro ha un codice numerico diverso. Hai inserito codici uguali.");
					exit(0);
				}
			}
		}
	}
}

void costo_medio(strutt_libro libro[]){
	printf("\n\n");
	float media[max];
	int i, j;
	for(i=0;i<max;i++){
		media[i]=libro[i].costo/libro[i].pagine;
		printf("\nIl costo medio delle pagine per il %d libro e': %.2f", i+1, media[i]);
	}
	float h=0;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(media[i]<media[j]){
				h=media[i];
				media[i]=media[j];
				media[j]=h;
			}
		}
	}
	printf("\n\nLa media in ordine crescente e':");
	for(i=0;i<max;i++){
		printf("\n%.2f", media[i]);
	}
	//l'ultima parte non sono riuscito a farla :(
}
