/*
20-01-2022
Scrivete una funzione con prototipo char *maiuscolo( char *stringa ) che trasformi da minuscolo in maiuscolo
tutte le lettere del suo argomento stringa e ne restituisca un puntatore al primo carattere. Potete assumere che stringa
sia dato da una stringa terminata da ’\0’ contenente caratteri ASCII (non solo lettere). Potete usare la funzione toupper
della libreria ctype.h.
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100

char *maiuscolo(char *stringa, int dim);

int main(){
	char *stringa;
	char a[N];
	int dim=0;
	char b;
	
	puts("Inserisci una frase o una parola: ");
	stringa= &a[0];
	gets(stringa);
	printf("\n");
	puts(stringa);
	
	dim= strlen(stringa);
	maiuscolo(stringa, dim);
}

char *maiuscolo(char *stringa, int dim){
	int i;
	
	for(i=0;i<dim;i++){
		if(isalpha(stringa[i])){
			stringa[i]=toupper(stringa[i]);
		}
	}
	printf("La nuova stringa: %s", stringa);
}
