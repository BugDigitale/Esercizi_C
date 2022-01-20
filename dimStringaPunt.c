/*
20-01-2022
Scrivete una funzione con prototipo int lung_stringa( char *s ) che, data una stringa s, ne calcoli la lunghezza.
Provate a scrivere il programma usando un puntatore a carattere per scorrere la stringa
*/

#include<stdio.h>
#include<string.h>
#define N 100

int lung_stringa(char *s);

int main(){
	char *s;
	char stringa[N];
	
	puts("Inserire una frase o parola: ");
	s= &stringa[0];
	gets(s);
	
	puts("\n\nLa frase inserita e'");
	puts(s);
	
	lung_stringa(s);
}

int lung_stringa(char *s){
	int dim=0, i, j=0;
	
	dim= strlen(s);
	for(i=0;i<dim;i++){
		if(s[i]== ' '){
			j++;
		}
	}
	printf("\n\nLa dimensione della stringa e': %d", dim-j);
	printf("\n\nGli spazi sono: %d", j);
}
