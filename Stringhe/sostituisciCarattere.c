/*
26-01-2022
Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La frase
è terminata dall’introduzione del carattere di invio e contiene complessivamente al più 100
caratteri. Il programma deve svolgere le seguenti operazioni:
• visualizzare la frase inserita
• costruire una nuova frase in cui tutte le occorrenze del carattere ’.’ sono sostituite
con il carattere di ritorno di linea ’\n’. Il programma deve memorizzare la nuova
frase in una opportuna variabile
• visualizzare la nuova frase.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char *s, stringa[100], i, stringa2[100];
	
	printf("Inserisci una frase:\n");
	gets(stringa);
	
	s=(char *) malloc(strlen(stringa)*sizeof(char));
	strcpy(s, stringa);
	printf("\nLa frase inserita e':\n");
	puts(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]=='.'){
			s[i]='\n';
		}
	}
	printf("\n\n");
	strcpy(stringa2, s);
	puts(stringa2);

}
