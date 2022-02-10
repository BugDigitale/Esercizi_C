/*
31-01-2022
Creare una struct alunno che contiene il nome, il cognome e il voto. Dopo inserire 5 studenti e memorizzarli 
in un file binario di nome archivio.txt.
IN TEORIA CORRETTO, MA ESEGUITO NON VA
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
#define num_s 2

typedef struct{
	char nome[max];
	char cognome[max];
	int voto;
}struttura;

int main(){
	struttura studente;
	int i;
	FILE *f;
	
	if((f=fopen("archivio.txt", "wb"))==NULL){
		printf("errore nell'apertura del file!");
		exit(0);
	}
	
	for(i=0;i<num_s; i++){
		printf("\nStudente n %d:", i+1);
		printf("\nNome: ");
		scanf("%s", studente.nome);
		printf("\nCognome: ");
		scanf("%s", studente.cognome);
		printf("\nVoto: ");
		scanf("%d", &studente.voto);	
		fwrite(&studente, sizeof(struttura), 1, f);	
		fread(&studente, sizeof(struttura), 1, f);
	}	
	fclose(f);
}
