/*
31-01-2022
Siano dati due file contenenti testo. Si realizzi un programma che individui e scriva un 
terzo file "risultati.txt" le parole che compaiono in entrambi i file.
*/

#include<stdio.h>
#include<string.h>
#define max 100

int main(){
	FILE *f;
	FILE *p;
	FILE *ris;
	char primo[max], secondo[max];
	int i, controllo=0;
	
	printf("FASE DI LETTURA");
	f=fopen("primo.txt", "r");
	p=fopen("secondo.txt", "r");
	ris=fopen("risultati.txt", "w");
	
	printf("\nParole trovate:");
	while(fscanf(f, "%s", primo)>0){
		rewind(p);
		controllo=0;
		while(fscanf(p, "%s", secondo)>0 && !controllo){
			if(strcmp(primo, secondo)==0){
				printf("\n%s", secondo);
				fprintf(ris, "%s\n", secondo);
				controllo=1;
			}
		}
	}
	
	fclose(f);
	fclose(p);
	fclose(ris);
}
