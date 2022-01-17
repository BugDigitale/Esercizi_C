/*
17-01-2022
In un concorso di intelligenza, N giudici esprimono il loro giudizio su K candidati. Il giudizio è un valore numerico
tra 0 e 5. Si scriva un programma in linguaggio per determinare il candidato più intelligente, ed il giudice più severo

ANALISI E SPECIFICA
-dati in input: numeri dei giudici e dei candidati inseriti dall'utentre
-precondizione: i numeri inseriti devono essere compresi tra 0 e 5
-dati in output: due messaggi che dicono il candidato più intelligente e il giudice più severo
-postcondizione: stampare a video il numero esatto del candidato e del giudice

NOME          TIPO                DESCRIZIONE
i             int                 variabile intermedia usata come indice
j             int                 variabile intermedia usata come indice
tabella       int                 matrice contente i voti che gli giudici danno ai candidati
n             int                 numero di giudici che si vogliono inserire
k             int                 numero di candidati che si vogliono inserire
somma         int                 somma dei voti dati dai giudici
piuSev        int                 variabile dove viene salvato il numero del giudice più severo
minSev        int                 variabile usata per il confronto con la variabile somma 
piuInt        int                 variabile dove viene salvato il numero del candidato più intelligente
maxInt        int                 variabile usata per il confronto con la variabile somma

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main
-funzione controlloGiudici
-funzione controlloCandidati 

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: voti dei giudici dati ai candidati inseriti dall'utente
-precondizione: i voti devono essere compresi tra 0 e 5
-dati in output: 
-postcondizione:

NOME           TIPO                DESCRIZIONE
i              int                 variabile intermedia usata come indice
j              int                 variabile intermedia usata come indice
n              int                 variabile utilizzata per il numero di giudici
k              int                 variabile utilizzata per il numero di candidati
tabella        int                 matrice contente i voti inseriti

ANALISI E SPECIFICA DELLA FUNZIONE canfrontoGiudici
-dati in input: voti inseriti nella funzione main
-precondizione: 
-dati in output: frase che dice il giudice più severo
-postcondzione: specificare il numero preciso del giudice

NOME            TIPO                DESCRIZIONE
i               int                 variabile intermedia usata come indice
j               int                 variabile intermedia usata come indice
somma           int                 variabile contente la somma dei voti dati dagli giudici
piuSev          int                 variabile dove viene salvato il numero del giudice più severo
minSev          int                 variabile usata per il confronto con la variabile somma        

ANALISI E SPECIFICA DELLA FUNZIONE confrontoCandidati
-dati in input: voti inseriti nella funzione main
-precondizione: 
-dati in output: frase che dice il candidato più intelligente
-postcondizione: specificare il numero preciso del candidato

NOME             TIPO                DESCRIZIONE
i                int                 variabile intermedia usata come indice
j                int                 variabile intermedia usata come indice
somma            int                 variabile contente la somma dei voti ricevuti dai candidati
piuInt           int                 variabile dove viene salvato il numero del candidato più intelligente
maxInt           int                 variabile usata per il confronto con la variabile somma

PROGETTAZIONE
funzione main
-inserimento del numero di giudici e candidati
-inserimento dei voti
-richiamo alla funzione confrontoGiudici
-richiamo alla funzione confrontoCandidati

funzione confrontoGiudici
-somma dei voti inseriti da parte dei giudici
-stampa della somma dei voti
-confronto per capire il giudice più severo
-stampa del messaggio con il giudice più severo

funzione confrontoCandidati
-somma dei voti inseriti per i candidati
-stampa della somma dei voti
-confronto per capire il candidato più intelligente
-stampa del messaggio con il candidato più intelligente

*/

#include<stdio.h>
#define N 100
#define K 100

void confrontoGiudici(int tabella[][K], int n, int k){
	int i, j, somma, minSev=9999, piuSev=0;
	
	printf("\n\n\nla somma per i giudici e':");
	for(i=0;i<n;i++){
		somma=0;
		for(j=0;j<k;j++){
			somma= somma+ tabella[i][j];
		}
		printf(" %d   ", somma);
		if(somma<minSev){
			piuSev=i;
			minSev=somma;
		}
	}
	printf("\nil giudice piu' severo e' il numero: %d ", piuSev+1);
}

void confrontoCandidati(int tabella[][K], int n, int k){
	int maxInt=0, piuInt=0, i, j, somma;
	
	printf("\n\n\nla somma per i candidati e':");
	for(j=0;j<k;j++){
		somma=0;
		for(i=0;i<n;i++){
			somma= somma+ tabella[i][j];
		}
		printf(" %d   ", somma);
		if(somma>maxInt){
			piuInt=j;
			maxInt=somma;
		}
	}
	printf("\nil candidato piu' intelligente e' il numero: %d ", piuInt+1);
}


int main(){
	int tabella[N][K], i, j, n, k;
	
	printf("Inserisci il numero di giudici che vuoi inserire: ");
	scanf("%d",&n);
	printf("\nInserisci il numero di candidati che vuoi inserire: ");
	scanf("%d",&k);
	
	if(n>5 || k>5){
		printf("ERRORE");
		exit(1);
	}
	
	printf("Inserire gli giudizi degli giudici(voto compreso tra 0 e 5):\n");
	for(i=0;i<n;i++){
		printf("\nGiudice n %d\n",i+1);
		for(j=0;j<k;j++){
			printf("\nCandidato n %d\n",j+1);
			scanf("%d",&tabella[i][j]);
		}
	}
	
	printf("\nI voti inseriti sono:\n");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<k;j++){
			printf("%d ",tabella[i][j]);
		}
	}
	
	confrontoGiudici(tabella, n, k);
	confrontoCandidati(tabella, n, k);
	
}
