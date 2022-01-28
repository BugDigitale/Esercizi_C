/*
28-01-2022
Definire la struttura automobili che descrivere un’automobile in base alla marca, cilindrata, 
anno di immatricolazione e acquirente con nome e cognome. Scriviamo quindi un programma in C,
che dichiara una tabella autosalone di tipo automobili con 5 elementi. Il programma deve 
consentire di inserire i dati delle auto vendute e di visualizzare il nome dei proprietari 
delle auto, secondo una ricerca attraverso la marca. Inoltre deve visualizzare il cognome 
dei proprietari con auto che hanno una cilindrata superiore a 1800 cc. Infine occorre visualizzare
il numero di auto immatricolate in un determinato anno.
*/

#include<stdio.h>
#include<stdlib.h>
#define N 20
#define max 10

typedef struct{
	char marca[N];
	int cilindrata;
	int immatricol;
	char nome[N];
	char cognome[N];
} automobili;

int main(){
	automobili salone[max];

	int dim=0, i, k=0, controllo_anno=0, count_anno=0, j=0;
	char controllo_marca[N];
	
	printf("Quante auto vuoi inserire?\n");
	scanf("%d", &dim);
	
	for(i=0;i<dim;i++){
		printf("\n\n");
		printf("Auto %d", i+1);
		
		printf("\nMarca: ");
		scanf("%s", salone[i].marca);
		
		printf("\nCilindrata: ");
		scanf("%d", &salone[i].cilindrata);
		
		printf("\nAnno di immatricolazione: ");
		scanf("%d", &salone[i].immatricol);
		
		printf("\nNome proprietario: ");
		scanf("%s", salone[i].nome);
		
		printf("\nCognome proprietario: ");
		scanf("%s", salone[i].cognome);
	}
	
	printf("\n\n\n");
	for(i=0;i<dim;i++){
		printf("\n\n");
		printf("Auto %d", i+1);
		printf("\n");
		
		printf("La marca e': %s", salone[i].marca);
		printf("\n");
		
		printf("La cilindrata e': %d", salone[i].cilindrata);
		printf("\n");
		
		printf("L'anno di immatricolazione e': %d", salone[i].immatricol);
		printf("\n");
		
		printf("Il nome del proprietario e': %s", salone[i].nome);
		printf("\n");
		
		printf("Il cognome del proprietario e': %s", salone[i].cognome);
		printf("\n");
	}
	
	printf("\n\nInserire una particolare marca da cercare: ");
	scanf("%s", controllo_marca);
	for(i=0;i<dim;i++){
		if(strcmp(salone[i].marca, controllo_marca)==0){
			j++;
			printf("\n\nIl proprietario della macchina numero %d con questa marca e': %s %s ", j, salone[i].nome, salone[i].cognome);
		}
	}
	
	for(i=0;i<dim;i++){
		if(salone[i].cilindrata>1800){
			k++;
			printf("\n\nIl cognome del proprietario ,con cilindrata >1800, numero %d e': %s", k, salone[i].cognome);
		}
	}
	
	printf("\n\n\nInserire un particolare anno: ");
	scanf("%d", &controllo_anno);
	
	for(i=0;i<dim;i++){
		if(salone[i].immatricol== controllo_anno){
			count_anno++;
		}
	}
	printf("\nLe macchine in quel particolare anno sono: %d", count_anno);
	
}
