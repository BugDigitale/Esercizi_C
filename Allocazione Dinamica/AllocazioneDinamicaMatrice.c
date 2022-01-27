/*
27-01-2022
In un concorso di intelligenza, N giudici esprimono il loro giudizio su K candidati. Il
giudizio è un valore numerico tra 0 e 5.
Si scriva un programma in linguaggio C per determinare il candidato più intelligente,
ed il giudice più severo.
*/

#include<stdio.h>
#include<stdlib.h>
//#define giudici 3
//#define candidati 3
#define N candidati*2

int main(){
	int i, j, somma=0, candidati=0, giudici=0, giud_sev=0, sev=9999, inte=0, cand_int=0;
	int **mat;
	//int mat[giudici][candidati];
	
	printf("Quanti giudici vuoi inserire?\n");
	scanf("%d", &giudici);
	printf("\nQuanti candidati vuoi inserire?\n");
	scanf("%d", &candidati);
	
	mat = (int **)malloc(giudici*sizeof(int *));
	mat[0]= (int *)malloc(giudici*candidati*sizeof(int));
	for(i=0;i<candidati;i++){
		mat[i]=mat[0]+i*giudici;
	}
	
	for(i=0;i<giudici;i++){
		for(j=0;j<candidati;j++){
			printf("\nGiudice %d candidato %d\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<giudici;i++){
		for(j=0;j<candidati;j++){
			printf(" %d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nla somma per i giudici e':");
	for(i=0;i<giudici;i++){
		somma=0;
		for(j=0;j<candidati;j++){
			somma= somma+ mat[i][j];
		}
		printf("\t%d", somma);
		if(somma<sev){
			giud_sev=i;
			sev=somma;
		}
	}
	printf("\nIl giudice piu' severo e' stato il numero %d", giud_sev+1);
	
	printf("\n\nla somma per i candidati e':");
	for(j=0;j<candidati;j++){
		somma=0;
		for(i=0;i<giudici;i++){
			somma= somma+ mat[i][j];
		}
		printf("\t%d", somma);
		if(somma>inte){
			cand_int=j;
			inte=somma;
		}
	}
	printf("\nIl candidato piu' intelligente e' stato il numero %d", cand_int+1);
	printf("\n");
}
