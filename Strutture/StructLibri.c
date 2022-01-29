/*
28-01-2022
Si crei la struttura libro, in cui ogni libro ha un codice numerico (numero intero) che lo caratterizza,
un numero di pagine e un costo. Si memorizzino i dati di tre libri e si calcoli il costo medio per pagina
dei libri e si stampino i dati dei tre libri in ordine crescente di costo per pagina.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 3

typedef struct{
	int codice_numerico;
	float pagine;
	float costo;
}strutt_libro;

int main(){
	strutt_libro libro[max];
	int dim=0, i, a, controllo2[max];
	
	
	for(i=0;i<max;i++){
		printf("\n");
		printf("Libro Numero %d\n", i+1);
		printf("Inserisci il codice numerico del libro: ");
		scanf("%d", &libro[i].codice_numerico);
		
		printf("Inserisci il numero di pagine: ");
		scanf("%f", &libro[i].pagine);
		
		printf("Inserisci il costo del libro: ");
		scanf("%f", &libro[i].costo);
	}
	
	for(i=0;i<max;i++){
		printf("\n\n");
		printf("Libro Numero %d\n", i+1);
		printf("Il codice numerico del %d libro e': %d\n", i+1, libro[i].codice_numerico);
		
		printf("Il numero di pagine del %d libro e': %.2f\n", i+1, libro[i].pagine);
		
		printf("Il costo del %d libro e': %.2f\n", i+1, libro[i].costo);
	}
	
	int j, controllo=0;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(i!=j){
				if(libro[i].codice_numerico==libro[j].codice_numerico){
					controllo=1;
				}
				if(controllo==1){
					printf("\nERRORE! Ogni libro ha un codice numerico diverso. Hai inserito due codici uguali.");
					exit(0);
				}
			}
		}
	}
	printf("\n\n");
	float media[max];
	for(i=0;i<max;i++){
		media[i]=libro[i].costo/libro[i].pagine;
		printf("\nIl costo medio delle pagine per il %d libro e': %.2f", i+1, media[i]);
	}
	
	float h=0;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			if(media[i]<media[j]){
				h=media[i];
				media[i]=media[j];
				media[j]=h;
			}
		}
	}
	//l'ultima parte non sono riuscito a farla :(	
}
