/*
27-01-2022
Scrivere un programma in linguaggio C che riceve in ingresso una parola inserita da tastiera. 
Si consideri che la parola può contenere sia caratteri maiuscoli che caratteri minuscoli, 
e complessivamente al massimo 30 caratteri. Il programma deve svolgere le seguenti operazioni:
• visualizzare la parola inserita
• aggiornare la parola in modo che tutti i caratteri siano minuscoli. Il programma deve
visualizzare la parola ottenuta
• verificare se la parola è palindroma. Una parola è palindroma se può essere letta
indifferentemente da sinistra verso destra e da destra verso sinistra. Ad esempio, le
seguenti parole sono palindrome: otto, madam.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char stringa[100], *s, palindroma=0, i, j, breve[100];
	
	printf("Inserire una stringa:\n");
	gets(stringa);
	
	s=(char *)malloc(strlen(stringa)*sizeof(char));
	strcpy(s, stringa);
	printf("\nLa parola scritta e':\n");
	for(i=0;i<strlen(s);i++){
		breve[i]=tolower(s[i]);
	}
	breve[i]='\0';
	puts(breve);
	
	palindroma=1;
	for(i=0, j=strlen(s)-1; i<strlen(s) && j>=0; i++, j--){
		if(s[i]!=s[j]){
			palindroma=0;
		}
	}
	if(palindroma==1){
		printf("\nLa parola e' palindroma!");
	}else if (palindroma==0){
		printf("\nLa parola non e' palindroma!");
	}
}
