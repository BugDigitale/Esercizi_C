/* 

Scrivere un programma in linguaggio c che legga una frase introdotta da tastiera. La frase è terminata dal carattere di invio.
La frase contiene sia caratteri maiuscoli che minuscoli, e complessivamente al più 100 caratteri. Il programma deve svolgere le 
seguenti operazioni:
-Visualizzare la frase inserita;
-Costruire una nuova frase tale che ogni lettera vocale presente nella frase di partenza sia seguita dalla lettera 'f'(se la 
 vocale è minuscola) o 'F'(se la vocale è maiuscola) nella nuova frase. Il programma deve memorizzare la nuova frase in una
 opportuna variabile.
-Visualizzare la nuova frase. Ad esempio la frase: VacAnze di NaTAle, diventa: VafcAFnzef dif NafTAFlef 

ANALISI E SPECIFICA 
-dati in input: una frase inserita dall'utente
-precondizione: questa frase può contenere sia maiuscole che minuscole
-dati in output: la frase inserita e la frase inserita con le opportune modifiche 
-postcondizione: la frase modificata dovrà aver una f in caso di vocali in minuscolo e una F in caso di vocali in maiuscolo

NOME        TIPO                 DESCRIZIONE 
i           int                  variabile intermedia usata come indice
j           int                  variabile intermedia usata come indice
stringa     vettore di char      stringa contente la frase inserita dall'utente
fraseFin    vettore di chat      stringa contente la frase finale modificata
dim         int                  variabile contente la dimensione della stringa

Come posso dividere il programma?
-Funzione main
-Funzione cambioString

ANALISI E SPECIFICA DELLA FUNZINE main
-dati in input: frase inserita dall'utente
-precondizione: questa frase può contenere sia maiuscole che minuscole
-dati in output: riscrittura della frase inserita
-postcondizione:

NOME         TIPO                DESCRIZIONE
stringa      vettore di char     vettore di caratteri contente la frase inserita dall'utente
dim          int                 varibile contente la dimensione della stringa

ANALISI E SPECIFICA DELLA FUNZIONE cambioString
-dati in input: frase inserita nella funzione main
-precondizione:
-dati in output: frase finale modificata 
-postcondizione: la frase modificata dovrà aver una f in caso di vocali in minuscolo e una F in caso di vocali in maiuscolo

NOME         TIPO                 DESCRIZIONE
i            int                  variabile intermedia usata come indice
j            int                  variabile intermedia usata come indice
fraseFin     vettore di char      vettore di caratteri contente la frase modificata

PROGETTAZIONE 
funzione main
-inserimento della frase dall'utente
-calcolo della dimesione
-visualizzazione della frase appena inserita
-richiamo alla funzione cambioString

funzione cambioString
-inserimento della stringa inserita dall'utente in un'altro vettore con un ciclo for
-controllo delle vocali "a e i o u" e "A E I O U" e inserimento delle opportune "f" e "F"
-inserimento dello 0 per la fine della stringa
-visualizzazione stringa modificata

*/

#include<stdio.h>
#include<string.h>
#define N 100

void cambioString( char stringa[], int dim){
	int i, j=0;
	char fraseFin[2*N+1];
	
	for(i=0;i<dim;i++){
		fraseFin[j]=stringa[i];
		j++;
		if(stringa[i]== 'a'||stringa[i]=='e'||stringa[i]=='i'||stringa[i]=='o'||stringa[i]=='u'){
			fraseFin[j]='f';
			j++;
		}else if(stringa[i]== 'A'||stringa[i]=='E'||stringa[i]=='I'||stringa[i]=='O'||stringa[i]=='U'){
			fraseFin[j]='F';
			j++;
		}
	}
	fraseFin[j]=0;
	puts("\nLa frase finale e':");
	puts(fraseFin);
}

void main(){
	
	char stringa[N+1];
	int dim;
	
	puts("Inserire la stringa:");
	gets(stringa);
	puts("\nLa frase inserita e':");
	puts(stringa);
	
	dim=strlen(stringa);
	
	cambioString(stringa, dim);
}
