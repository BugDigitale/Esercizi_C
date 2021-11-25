/*
scrivere un programma che legge due vettori (di interi) di N elementi (specificato dall'utente) ciascuno (con un massimo di 20 
inseriementi). Il programma deve creare un ulteriore vettore, che contegna la copia dei soli elementi pari presenti nei due 
vettori di partenza, e stampare tale vettore

ANALISI E SPECIFICA 
dati in input: due vettori di N elementi specificati dall'utente
precondizione: i vettori devono essere interi e con un massimo di 20 inserimenti
dati in output: un vettore contenente i numeri pari dei primi due vettori
postcondizione: ottenere il vettore di output inserendo i numeri del primo e del secondo vettore
scartando i numeri dispari

NOME     TIPO              DESCRIZIONE
vett1    array di interi   primo vettore di numeri interi inseriti dall'utente
vett2    array di interi   secondo vettore di numeri interi inseriti dall'utente
vettPar  array di interi   terzo vettore con i pari dei primi due vettori
i        int               variabile intermedia usata come indice
n1       int               variabile con la quantità di numeri da voler inserire nel primo vettore
n2       int               variabile con la quantità di numeri da voler inserire nel secondo vettore

Come posso dividere il programma?
-Funzione main
-Funzione calcolo_pari

ANALISI E SPECIFICA FUNZIONE main
dati in input: due vettori di N elementi inseriti dall'utente
precondizione: vettori interi e massimo 20 inserimenti
dati in output:
postcondizione:

NOME      TIPO             DESCRIZIONE
vett1     array di int     primo vettore di numeri interi inseriti dall'utente
vett2     array di int     secondo vettore di numeri interi inseriti dall'utente
i         int              variabile intermedia usata come indice
n         int              variabile con la quantità di numeri da voler inserire
n1        int              variabile con la quantità di numeri da voler inserire nel primo vettore
n2        int              variabile con la quantità di numeri da voler inserire nel secondo vettore


ANALISI E SPECIFICA FUNZIONE calcolo_pari
dati in input: vettori inseriti nella funzione main
precondizione:
dati in output: vettore contente i numeri pari dei primi due vettori
postcondizione:

NOME      TIPO             DESCRIZIONE
vettPar   array di int     vettore contente i numeri pari dei primi due vettori

PROGETTAZIONE 
Funzione main
-faccio inserire la lunghezza dei due vettori
	-vettori di interi e massimo 20 numeri
-faccio inserire i numeri nei due vettori
-faccio il richiamo alla funzione calcolo_pari

Funzione calcolo_pari
-faccio un ciclo che controlli se i numeri del primo vettore sono pari
	-se è così vengono inseriti nel vettore di output
-faccio un ciclo che controlli se i numeri del secondo vettore sono pari
	-se è così vengono inseriti nel vettore di output
-Visualizzo il vettore finale con i numeri pari al suo interno
*/


#include<stdio.h>
#define N 20

int calcolo_pari(int a[],int b[], int n1, int n2){
	int vettPar[N+20];
	int i, j=0;
	
	for(i=0;i<n1;i++){
		if(a[i]%2==0){
			vettPar[j]=a[i];
			j++;
		}
	}
	for(i=0;i<n2;i++){
		if(b[i]%2==0){
			vettPar[j]=b[i];
			j++;
		}
	}
	printf("I numeri del vettore in output sono:");
	for(i=0;i<j;i++){
		printf("%d\n", vettPar[i]);
	}
}


int main(){
	int vett1[N], vett2[N];
	int i, n1, n2;
	
	printf("numeri che vuoi inserire nel primo vettore (massimo 20 numeri): ");
	scanf("%d",&n1);
	
	printf("numeri che vuoi inserire nel secondo vettore (massimo 20 numeri): ");
	scanf("%d",&n2);
	
	printf("inserisci i numeri del primo vettore: ");
	for(i=0;i<n1;i++){
		scanf("%d",&vett1[i]);
	}
	
	printf("inserisci i numeri del secondo vettore: ");
	for(i=0;i<n2;i++){
		scanf("%d",&vett2[i]);
	}
	
	
	calcolo_pari(vett1,vett2, n1, n2);
	
	
}

