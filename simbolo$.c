/*
21-01-2022
Scrivere una procedura che ricevuto un array di caratteri modifichi il
vettore in modo che ogni vocale venga sostituita dal simbolo ’$’.
void dollarize(char arr[], int dim);
*/

#include<stdio.h>
#include<string.h>
#define N 100

void dollarize(char arr[], int dim);

int main(){
	char arr[N+1];
	int dim=0, i;
	
	puts("inserisci una frase: ");
	gets(arr);
	
	printf("\n\nLa frase e': ");
	puts(arr);
	dim=strlen(arr);
	
	dollarize(arr, dim);
}

void dollarize(char arr[], int dim){
	int i, j=0;
	char arr$[2*N+1];
	
	printf("\n\nLa nuova frase e':\n");
	for(i=0;i<dim;i++){
		arr$[j]=arr[i];
		j++;
		if(arr[i]== 'a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
			arr$[j]='$';
			j++;
		}
	}
	arr$[j]=0;
	puts(arr$);
}
