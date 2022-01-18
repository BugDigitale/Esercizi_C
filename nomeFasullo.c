/*
18-01-2022
Un programma legge dall'utente una serie di nomi di persona. L'inserimento termina quando l'utente immette il nome fasullo *.
Il programma dovrà stampare:
-quanti nomi sono stati inseriti;
-qual è il nome che nell'ordine alfabetico verrebbe prima;
-qual è il nome più lungo, e di quanti caratteri è composto

ANALISI E SPECIFICA
-dati in input: una sequenza di nomi inseriti dall'utente
-precondizione: se viene inserito * l'inserimento dei nomi finisce
-dati in output: quanti nomi sono stati inseriti. Il nome in ordine alfabetico che verrebbe prima. IL nome più lungo e da
 quanti caratteri è composto
-postcondizione: 

NOME           TIPO                 DESCRIZIONE
nomi           char                 variabile dove sono contenuti i nomi
stop           int                  variabile di flag
totNom         int                  variabile contente il totale dei nomi
lung           int                  variabile contente la lunghezza dei nomi
nomeLun        char                 variabile contente il nome più lungo
nomeAlfa       char                 variabile contente il nome che viene prima alfabeticamenta

COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main (si potevano mettere altre sottofunzioni ma era troppo più scomodo :D, quindi tutta l'analisi e specifica fatta su
 alla fin fine sono del main)

PROGETTAZIONE
funzione main
-inserimento dei nomi
-inserimento del nome fasullo e quindi della condizione
-implementazione del caso in cui venga inserito solo un nome
-implementazione del caso in cui vengono inseriti più di un nome
-confronto in ordine alfabetico
-confronto in base alla lunghezza
-conteggio dei nomi
-fine condizione

*/

#include<stdio.h>
#include<string.h>
#define N 50 

int main(){
	char nomi[N];
	int stop=0, totNom=0, lung=0;
	char nomeLun[N], nomeAlfa[N];
	
	do{
		printf("\nInserisci un nome: ");
		scanf("%s",&nomi);
		
		if(strcmp(nomi,"*")==0){
			stop=1;
		}
		if(stop==0){
			if(totNom==0){
				strcpy(nomeAlfa, nomi);
				strcpy(nomeLun, nomi);
				lung=strlen(nomi);
				totNom++;
			}else{
				if(strcmp(nomi, nomeAlfa)<0){
					strcpy(nomeAlfa, nomi);
				}
				if(strlen(nomi)>lung){
					lung=strlen(nomi);
					strcpy(nomeLun, nomi);
				}
				totNom++;
			}
		}
	}while(stop!=1);
	
	printf("\nI nomi inseriti sono: %d\n",totNom);
	printf("\nIl primo nome in ordine alfabetico: %s\n",nomeAlfa);
	printf("\nIl nome piu' lungo: %s. Ed e' di %d caratteri\n", nomeLun, lung);

}
