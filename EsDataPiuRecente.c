/* 
24-11-2021
Scrivere un programma che chieda di inserire due date nel formato gg/mm/aaaa e stampi la più recente

ANALISI E SPECIFICA
Dati di input: Due date inserite dall'utente 
Precondizione: Il formato delle date deve essere gg/mm/aaaa
Dati in output: La data più recente tra le due date inserite
Postcondizione: Una volta inserite le due date restituire la data più recente

SPECIFICA
NOME    TIPO      DESCRIZIONE
giorno1  int       giorno della prima data inserito
mese1    int       mese della prima data inserito
anno1    int       anno della prima data inserito
giorno2  int       giorno della seconda data inserito
mese2    int       mese della seconda data inserito
anno2    int       anno della seconda data inserito
dataf    int       giorno, mese e anno della data più recente

RAFFINAMENTO
Come posso suddividere il programma?
-Funzione calcolo_data;
-Funzione main;


FUNZIONE calcolo_data ANALISI E SPECIFICA
ANALISI
Dati in input: Due date fatte inserire dall'utente
Precondizione: Formato delle due date gg/mm/aaaa
Dati in output:
Postcondizione:

SPECIFICA
NOME     TIPO      DESCRIZIONE
giorno1  int       giorno della prima data inserito
mese1    int       mese della prima data inserito
anno1    int       anno della prima data inserito
giorno2  int       giorno della seconda data inserito
mese2    int       mese della seconda data inserito
anno2    int       anno della seconda data inserito



FUNZIONE MAIN ANALISI E SPECIFICA
ANALISI
Dati in input:
Precondizione: 
Dati in output: La data più recente tra le due inserite dall'utente
Postcondizione: 

SPECIFICA
NOME    TIPO      DESCRIZIONE
dataf   int       giorno, mese e anno della data più recente


PSEUDOCODFICIA
INIZIO

giorno1=0, mese1=0, anno1=0;
giorno2=0, mese2=0, anno2=0;
Scrivi: "Inserisci la prima data in formato gg/mm/aaaa" 
Inizializza giorno1, mese1 e anno1
Scrivi: "Inserisci la seconda data in formato gg/mm/aaaa"
Inizializza giorno2, mese2 e anno2

se anno1>anno2
	allora stampa giorno1, mese1, anno1
altrimenti se anno1==anno2 e mese1>mese2
	 allora stampa giorno1, mese1, anno1
altrimenti se anno1==anno2 e mese1==mese2 e giorno1>giorno2
		allora stampa giorno1, mese1, anno1
altrimenti se anno1==anno2 e mese1==mese2 e giorno1==giorno2
		allora stampa "le date sono uguali"
altrimenti stampa giorno2, mese2, anno2
		
FINE
*/


#include<stdio.h>
#include<stdlib.h>

int calcolo_data(int n){
	int giorno1=0, mese1=0, anno1=0;
	int giorno2=0, mese2=0, anno2=0;
	
	printf("inserire la prima data(in formato gg/mm/aaaa)");
	printf("\ninserire il giorno: ");
	scanf("%d",&giorno1);
	if(giorno1>31 || giorno1<0){                                        
		printf("ERRORE!");
		exit(1);                                  //uso exit(1) per terminare il programma
	}
	printf("\ninserire il mese: ");
	scanf("%d",&mese1);
	if(mese1>12 || mese1<1){
		printf("ERRORE!");
		exit(1);
	}
	printf("\ninserire l'anno: ");
	scanf("%d",&anno1);
	if(anno1<0){
		printf("ERRORE!");
		exit(1);
	}
	
	printf("\ninserire la seconda data(in formato gg/mm/aaaa)");
	printf("\ninserire il giorno: ");
	scanf("%d",&giorno2);
	if(giorno2>31 || giorno2<0){
		printf("ERRORE!");
		exit(1);
	}
	printf("\ninserire il mese: ");
	scanf("%d",&mese2);
	if(mese2>12 || mese2<1){
		printf("ERRORE!");
		exit(1);
	}
	printf("\ninserire l'anno: ");
	scanf("%d",&anno2);
	if(anno2<0){
		printf("ERRORE!");
		exit(1);
	}
	
	
	if(anno1>anno2){
		printf("la data piu' recente e' %d/%d/%d", giorno1, mese1, anno1);
	} else if(anno1==anno2 && mese1>mese2){
		printf("la data piu' recente e' %d/%d/%d", giorno1, mese1, anno1);
	} else if(anno1==anno2 && mese1==mese2 && giorno1>giorno2){
		printf("la data piu' recente e' %d/%d/%d", giorno1, mese1, anno1);
	}else if(anno1==anno2 && mese1==mese2 && anno1==anno2){
		printf("la data e' ugale!");
	}else{
		printf("la data piu' recente e' %d/%d/%d", giorno2, mese2, anno2);
	}
}

main(){
	int n;
	calcolo_data(n);
}


		















