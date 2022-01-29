/*
29-01-2022
Si sviluppi un programma che svolge le seguenti operazioni:
• Acquisisce le informazioni relative a cinque studenti e le memorizza in un array.
• Richiede all’utente di inserire il numero di matricola di uno studente di cui cercare le informazioni
nell’array.
• Effettua la ricerca e stampa i dati che eventualmente verranno trovati nell’array. 
*/

#include<stdio.h>
#include<stdlib.h>
#define max 5
#define stringa 50

typedef struct{
	int numero_matricola;
	char nome[stringa];
	char cognome[stringa];
}studenti;

void controllo_matricola(studenti informazioni[], int matricola);

int main(){
	studenti informazioni[max];
	int i, matricola=0;
	
	for(i=0;i<max;i++){
		printf("STUDENTE NUMERO %d\n\n", i+1);
		printf("Inserire la matricola dello studente: ");
		scanf("%d", &informazioni[i].numero_matricola);
		printf("Inserire il nome dello studente: ");
		scanf("%s", informazioni[i].nome);
		printf("Inserire il cognome dello studente: ");
		scanf("%s", informazioni[i].cognome);
	}
	
	printf("\n\nInserisci la matricola che vuoi cercare: ");
	scanf("%d", &matricola);
	
	controllo_matricola(informazioni, matricola);
}

void controllo_matricola(studenti informazioni[], int matricola){
	int i, controllo=0;
	
	for(i=0;i<max && controllo==0;i++){
		if(matricola==informazioni[i].numero_matricola){
			controllo=1;
		}
	}
	if(controllo==1){
		printf("\nInformazioni sullo studente\n");
		printf("Nome: %s", informazioni[i-1].nome);
		printf("\nCognome: %s", informazioni[i-1].cognome);
	}else{
		printf("\nLa matricola inserita non esiste!");
	}		
}
