/*
25-01-2022
Scrivere un programma in linguaggio C che calcoli e stampi i primi N numeri della serie di
Fibonacci, con N inserito da tastiera. La serie di Fibonacci inizia con 1, 1 ed ogni numero
successivo è dato dalla somma dei due precedenti: 1, 1, 2, 3, 5, 8, 13, 21...

ANALISI E SPECIFICA
-dati in input: la lunghezza della sequenza
-precondizione: la serie inizia con 1 1
-dati in output: la serie di finbonacci
-postcondizione: sommare i primi due numeri, poi sommare i successivi due e cosi via

NOME		TIPO			DESCRIZIONE
n			int             lunghezza della sequenza
i			int             variabile intermedia usata come indice
a			int				variabile contente il numero vecchio da dover sommare con il risultato della vecchia operazione
s			int				variabile contente il risultato della vecchia operazione
j			int				variabile contente il risulato della nuova operazione

PROGETTAZIONE
funzione main
-inserimenoto del numero di numeri che si vogliono nella sequenza
-stampa dei primi due 1 1 
-svolgimento delle operazioni per avere i numeri desiderati
-stampa dei numeri man a mano
*/

#include<stdio.h>

int main(){
	int n, i, a=1, s=1, j=0;
	
	printf("Inserisci quanti numeri vuoi nella sequenza: ");
	scanf("%d", &n);

	printf("%d %d", a, s);
	for(i=0;i<n;i++){
		if(i==0){
			s=a+s;
			printf(" %d", s);
		}else if(i>0){
			j=a+s;
			a=s;
			s=j;
			printf(" %d", j);
		}
	}

}
