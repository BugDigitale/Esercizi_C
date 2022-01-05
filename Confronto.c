/* 
05-01-2022
si scriva un programma in linguaggio C che acquisisca tre numeri interi da tastiera e:
-determini, stampando un messaggio opportuno quale dei tre numeri (il primo, il secondo 
e il terzo) sia maggiore
-stampi il valore di tale numero
-si consideri il caso siano uguali

ANALISI E SPECIFICA
-dati in input: 3 volori 
-precondizione: i 3 valori devono essere inseriti da tastiera
-dati in output: un messaggio con il valore più grande tra i 3 valori
-postcodizione: stampare pure il numero maggiore. In caso i numeri siano uguali stamparlo a schermo

NOME        TIPO           DESCRIZIONE
a           float          primo  numero inserito
b           float          secondo numero inserito
c           float          terzo numero inserito


COME POSSO DIVIDERE IL PROGRAMMA?
-funzione main
-funzione controllo

ANALISI E SPECIFICA DELLA FUNZIONE main
-dati in input: i 3 valori inseriti
-precodizione: 3 valori inseriti da tastiera
-dati in output:
-postcondizione:

NOME        TIPO           DESCRZIONE
a           float          primo  numero inserito
b           float          secondo numero inserito
c           float          terzo numero inserito

ANALISI E SPECIFICA DELLA FUNZIONE confronto
-dati in input:
-precondizione:
-dati in output: il messaggio del valore più grande
-postcondizione: visualizzare anche il numero più grande

NOME        TIPO            DESCRIZIONE

*/

void confronto(float a, float b, float c){
	if(a>b && a>c){
		printf("Il numero piu' grande e' il primo, cioe': %.2f", a);
	}else if(b>a && b>c){
		printf("Il numero piu' grande e' il secondo, cioe': %.2f", b);
	}else if(c>a && c>b){
		printf("Il numero piu' grande e' il terzo, cioe': %.2f", c);
	}else if(a==b && b==c){
		printf("\nI numeri sono uguali!");
	}
}

void main(){
	float a, b, c;
	
	printf("Inserisci il primo numero: ");
	scanf("%f",&a);
	
	printf("\nInserisci il secondo numero: ");
	scanf("%f",&b);
	
	printf("\nInserisci il terzo numero: ");
	scanf("%f",&c);
	
	confronto(a, b, c);
}
