/*
28-01-2022
Definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle varie
discipline: Italiano, Matematica e Informatica. Si scriva una funzione in C che, a partire da un
Vettore di studenti fornito come argomento, determini la disciplina che ha la media più alta.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct{
	float italiano;
	float matematica;
	float informatica;
}discipline;

void media(discipline studenti[], int num_voti);

int main(){
	discipline studenti[20];
	int num_voti=0, i;
	float somma=0, k=0;
	
	printf("Quanti voti vuoi inserire? (massimo 20)\n");
	scanf("%d", &num_voti);
	
	for(i=0;i<num_voti;i++){
		printf("\n");
		printf("Inserisci il voto numero %d di italiano: ", i+1);
		scanf("%f", &studenti[i].italiano);
		
		printf("Inserisci il voto numero %d di matematica: ", i+1);
		scanf("%f", &studenti[i].matematica);
		
		printf("Inserisci il voto numero %d di informatica: ", i+1);
		scanf("%f", &studenti[i].informatica);
	}
	
	media(studenti, num_voti);
}

void media(discipline studenti[], int num_voti){
	int k=0, somma=0, i;
	for(i=0;i<num_voti;i++){
		somma=somma+studenti[i].italiano;
		k++;
	}
	somma=somma/k;
	printf("\nLa media dei voti di italiano e': %.2f", somma);
	
	k=0;
	somma=0;
	for(i=0;i<num_voti;i++){
		somma=somma+studenti[i].matematica;
		k++;
	}
	somma=somma/k;
	printf("\nLa media dei voti di matematica e': %.2f", somma);
	
	k=0;
	somma=0;
	for(i=0;i<num_voti;i++){
		somma=somma+studenti[i].informatica;
		k++;
	}
	somma=somma/k;
	printf("\nLa media dei voti di informatica e': %.2f", somma);
}
