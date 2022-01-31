/*
31-01-2022
Accoda il contenuto di un file a un altro file
*/

#include<stdio.h>

int main(){
	FILE *f1;
	FILE *f2;
	int c;
	
	f1=fopen("parola1.txt", "r");
	if(f1==NULL){
		printf("errore");
		return 1;
	}
	
	f2=fopen("parola2.txt", "a");
	if(f2==NULL){
		printf("errore");
		return 1;
	}
	
	c=fgetc(f1);
	
	while(c!=EOF){
		fputc(c, f2);
		c=fgetc(f1);
	}
	
	fclose(f1);
	fclose(f2);
	
}
