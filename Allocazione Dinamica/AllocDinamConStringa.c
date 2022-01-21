/*
Allocazione dinamica con stringhe
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

struct Sdata{
	char *s1;
	char *s2;
};
typedef struct Sdata Tdata;

int main(){
	Tdata frase;
	char prima[50], seconda[50];
	
	printf("Inserisci la prima frase: ");
	gets(prima);
	frase.s1=(char *)malloc(strlen(prima)*sizeof(char));
	assert(frase.s1!=NULL);				//controlla se la frase sia NULL, se lo è, da errore
	strcpy(frase.s1, prima);
	
	printf("\n\nInserisci la seconda frase: ");	
	gets(seconda);
	frase.s2=(char *)malloc(strlen(seconda)*sizeof(char));
	assert(frase.s2!=NULL);
	strcpy(frase.s2, seconda);
	
	printf("\n\n\nLa frase finale e':\n");
	printf("%s %s", frase.s1, frase.s2);
}
