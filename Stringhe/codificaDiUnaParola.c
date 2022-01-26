/*
26-01-2022
Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La
frase è terminata dall’introduzione del carattere di invio. La frase contiene sia caratteri
maiuscoli che caratteri minuscoli, e complessivamente al più 100 caratteri. Il programma
deve svolgere le seguenti operazioni:
• visualizzare la frase inserita;
• costruire una nuova frase tale che ogni lettera vocale presente nella frase di partenza
sia seguita dalla lettera ’f’ (se la vocale è minuscola) o dalla lettera ’F’ (se la vocale è
maiuscola) nella nuova frase. Il programma deve memorizzare la nuova frase in una
opportuna variabile.
• visualizzare la nuova frase.
Ad esempio, la frase VacAnze di NaTAle diviene VafcAFnzef dif NafTAFlef.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *s, stringa[100], i, stringa2[100], j;
	
	printf("Inserisci una frase:\n");
	gets(stringa);
	
	s=(char *)malloc(strlen(stringa)*sizeof(char));
	strcpy(s, stringa);
	printf("\nLa frase inserita e':\n");
	puts(s);
	
	for(i=0;i<strlen(s);i++){
		stringa2[j]=stringa[i];
		j++;
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			stringa2[j]='f';
			j++;
		}else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
			stringa2[j]='F';
			j++;
		}
	}
	puts(stringa2);
	
}
