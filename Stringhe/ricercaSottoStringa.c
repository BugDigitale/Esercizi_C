/*
27-01-2022
Si scriva un programma in linguaggio C che riceva in ingresso due parole inserite da tastiera. 
Si consideri che ciascuna parola può contenere al massimo 30 caratteri. Il programma deve 
verificare se la seconda parola inserita è contenuta almeno una volta all’interno della
prima parola (ossia se la seconda parola è una sottostringa della prima parola).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char stringa1[30], stringa2[30], i, controllo=0, *sottostringa, *s1, *s2;
	
	printf("\nInserire una parola:\n");
	scanf("%s", &stringa1[i]);
	
	if(strlen(stringa1)>30){
		printf("\nLa frase e' troppo lunga!");
		exit(0);
	}
	s1=(char *)malloc(strlen(stringa1)*sizeof(char));
	strcpy(s1, stringa1);
	
	printf("\nInserire la seconda parola:\n");
	scanf("%s", &stringa2[i]);
	
	if(strlen(stringa2)>30){
		printf("\nLa frase e' troppo lunga!");
		exit(0);
	}
	
	s2=(char *)malloc(strlen(stringa2)*sizeof(char));
	strcpy(s2, stringa2);
	
	puts("\n\nLa prima stringa e':");
	puts(s1);
	puts("\nLa seconda stringa e':");
	puts(s2);
	
	if(strstr(s1, s2)){
		controllo=1;
	}
	if(controllo==1){
		printf("\nc'e' una sottostringa!");
	}else{
		printf("\nnon c'e' una sottostringa!");
	}
}
