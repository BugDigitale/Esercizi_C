/*
17-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una parola inserita da tastiera. Si consideri che
la parola può contenere sia lettere maiuscole che minuscole, e complessivamente un massimo di 30 caratteri. Il
programma deve svolgere le seguenti operazioni:
-Visualizzare la parola inserita;
-Aggiornare la parola in modo che tutti i caratteri siano miscuoli. Il programma dovrà visualizzare la parola 
 ottenuta;
-Verificare se la parola è palindroma. Una parola è palindroma se può essere letta indifferentemente sia da 
 destra verso sinsitra che da sinistra verso destra. Ad esempio, le seguenti parole sono palindrome: otto,
 madam...
 
ANALISI E SPECIFICA
-dati in input: una frase inserita da tastiera
-precondizione: questa frase potrà avere sia minuscole che maiuscole. La lunghezza massima è di 30 caratteri
-dati in output: la parola trasformata tutta in minuscolo. Una frase che dice se la parola è palindroma o no
-postcondizone: una parola è palindroma se può essere letta indifferentemente sia da destra verso sinsitra 
 che da sinistra verso destra

NOME            TIPO                      DESCRIZIONE
stringa         vettore di caratteri      vettore contente la frase inserita
i               int                       variabile usata come indice
j               int                       variabile usata come indice
palinfroma      int                       variabile di flag usata per le parole palindrome
dim             int                       variabile contente la dimensione della parola

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main;
-funzione minuscole;
-funzione palindroma;

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: una frase inserita dall'utente
-precondizione: questa frase potrà avere sia minuscole che maiuscole. La lunghezza massima è di 30 caratteri
-dati in output:
-postcondizione:

NOME            TIPO                       DESCRIZIONE
stringa         char                       vettore di caratteri dove è contenuata la frase
dim             int                        dimensione della frase

ANALISI E SPECIFICA DELLA FUNZIONE minuscole
-dati in input: la parola inserita nella funzione main
-precondizione:
-dati in output: la frase riscritta solo con lettere minuscole
-postcondizione:

NOME            TIPO                        DESCRIZIONE
i               int                         variabile intermedia usata come indice

ANALISI E SPECIFICA DELLA FUNZIONE palindroma
-dati in input: la parola inserita nel main
-precondizione:
-dati in output: una frase che ti dice se la parola è palindroma oppure no
-postcondizione: una parola è palindroma se può essere letta indifferentemente sia da destra verso sinsitra 
 che da sinistra verso destra

NOME            TIPO                         DESCRIZIONE
i               int                          variabile intermedia usata come indice
j               int                          variabile intermedia usata come indice
palindroma      int                          variabile di flag usata per capire se la parola è palindroma o no

PROGETTAZIONE
funzione main
-inserimento di una parola;
-conteggio della dimensione;
-richiamo alla funzione minuscole;
-richiamo alla funzione palindroma;

funzione minuscole
-ciclo for per controllare ogni lettera
-trasformazione lettere maiuscuole in minuscole
-stampa della frase trasformata

funzione palindroma
-variabile di flag posta ad 1
-ciclo for per il controllo delle lettere
-if per controllare la variabile di flag
-stampa della frase se è palindroma  o se non lo è


*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 30

void minuscole(char stringa[], int dim){
	int i;
	
	for(i=0;i<dim;i++){
		stringa[i]= tolower(stringa[i]);
	}
	printf("\nLa nuova parola in formato minuscolo e': ");
	puts(stringa);
}

void palindroma(char stringa[], int dim){
	int i, j;
	int palindroma; //se =1 allora la parola è palindroma, se =0 non lo è
	
	palindroma=1;
	for(i=0, j=dim-1; i<dim && j>=0; i++, j--){
		if(stringa[i]!=stringa[j]){
			palindroma=0;
		}
	}
	
	if(palindroma==0){
		printf("\nla parola non e' palindroma!");
	}else{
		printf("\nla parola e' palindroma");
	}
	
}

int main(){
	char stringa[N+1];
	int dim;
	
	printf("Inserisci una parola: ");
	scanf("%s",stringa);
	
	dim=strlen(stringa);
	
	minuscole(stringa, dim);
	palindroma(stringa, dim);
}
