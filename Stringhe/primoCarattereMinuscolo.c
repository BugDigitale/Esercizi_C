/*
26-01-2022
Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La
frase è terminata dall’introduzione del carattere di invio. La frase contiene sia caratteri
maiuscoli che caratteri minuscoli, e complessivamente al più 100 caratteri. Il programma
deve svolgere le seguenti operazioni:
• visualizzare la frase inserita
• costruire una nuova frase in cui il primo carattere di ciascuna parola nella frase di
partenza è stato reso maiuscolo. Tutti gli altri caratteri devono essere resi minuscoli.
Il programma deve memorizzare la nuova frase in una opportuna variabile
• visualizzare la nuova frase.
Ad esempio la frase cHe bElLA gIOrnaTa diviene Che Bella Giornata
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
	char *s, stringa[100], i, c, stringa2[100];
	
	printf("\nInserisci una frase:\n");
	gets(stringa);
	
	s=(char *)malloc(strlen(stringa)*sizeof(char));
	printf("\nLa frase attuale e':\n");
	strcpy(s, stringa);
	puts(s);
	
	for(i=0;i<strlen(s);i++){
		if(i==0 || isspace(s[i-1])){
			stringa2[i]=toupper(s[i]);
		}else{
			stringa2[i]=tolower(s[i]);
		}
		stringa2[strlen(stringa)]= '\0';
	}
	printf("\n");
	printf("\nLa frase trasformata e':\n");
	puts(stringa2);
}
