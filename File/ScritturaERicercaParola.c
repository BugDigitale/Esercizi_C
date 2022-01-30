/*
30-01-2022
Dato un file F, si realizzi  un programma che, acquisita una parola P da standard input, 
ricerchi P all'interno del file dato e stampi sul dispositivo standard di output il numero
delle occorrenze di P nel file F.
*/

#include<stdio.h>
#include<string.h>
#define max 20
#define maxIns 100

int main(){
	FILE *f;
	char p[max], s[max], inserite[maxIns];
	int k=0, n=0;
	
	f=fopen("Ricerca.txt", "w");
	
	printf("Quante righe vuoi inserire?");
	scanf("%d", &n);
	
	int i;
	printf("\n");
	for(i=0;i<n+1;i++){
		gets(inserite);
		fputs(inserite, f);
		fputc((int) '\n', f);
	}
	fclose(f);
	
	f=fopen("Ricerca.txt", "r");
	if(f==NULL){
		printf("C'e' un problema con il file");
	}else{
		printf("Inserisci la parola che vuoi cercare: ");
		scanf("%s", p);
		fscanf(f, "%s", s);
		
		while(!feof(f)){
			if(strcmp(p, s)==0){
				k++;
			}
			fscanf(f, "%s", s);
		}
		if(k>0){
			printf("\nHo trovato la parola %s e le occorrenze sono %d", p, k);	
		}else{
			printf("\nLa parola cercata non si trova nel file");
		}
	}
	fclose(f);
}
