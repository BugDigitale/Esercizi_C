/*
23-01-2022
esempio uso dei file

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

int main(){
	FILE *f;
	char nomefile1[max];
	char nomefile2[max];
	char nome[max];
	char p;
	int n, i;
	
	printf("\nInserisci il nome del file dove vuoi scrivere: ");
	scanf("%s",nomefile1);
	
	f=fopen(nomefile1, "w");
	
	printf("\nQuante parole vuoi inserire:");
	scanf("%d", &n);
	
	printf("\nCosa vuoi inserire:\n");
	for(i=0;i<n;i++){
		printf("\n");
		scanf("%s", nome);
		fputs(nome, f);
		fputc((int)'\n',f);		//per scrivere a capo ogni volta che clicchi per andare a capo, senza scrive tutto su una riga
	}
	fclose(f);
	
	
	printf("\n\n\nInserisci il nome del file che vuoi leggere: ");
	scanf("%s", nomefile2);
	
	f=fopen(nomefile2,"r");  			//r per la lettura e w per la scrittura
	if(f==NULL){
		printf("\n\nErrore nell'apertura del file!");
		exit(0);
	}
	
	if(f!=NULL){
		p=fgetc(f);
		while(p!=EOF){
			putchar(p);
			p=fgetc(f);
		}
		fclose(f);
		return 0;
	}
	
}
