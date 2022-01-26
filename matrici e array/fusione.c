/*
26-01-2022
Scrivere un programma in linguaggio C che esegue la fusione di due vettori di interi
ordinati in modo crescente. Il programma deve eseguire le seguenti operazioni:
1. leggere due vettori di N interi. Il numero N viene inserito dall’utente ed è minore di
   20. I due vettori possono avere lunghezza diversa. I due vettori si suppongono già
   ordinati in maniera crescente.
2. creare un terzo vettore di lunghezza pari alla somma delle lunghezze dei due vettori
   dati. Il vettore dovrà contenere i numeri contenuti nei due vettori di partenza. I
   numeri nel vettore devono essere ordinati in modo crescente.
3. stampare il vettore generato.

Ad esempio, si assuma che siano stati inseriti i due vettori
1 6 15 20 25
2 8 18 19.
Il programma dovrà visualizzare la sequenza 1 2 6 8 15 18 19 20 25
*/

#include<stdio.h>
#include<stdlib.h>
#define N 100

int main(){
	int i, j, *n1, *n2 , dim1=0, dim2=0, controllo=0, a=0, fusione[N], dim3=0;
	
	printf("Quanti numeri vuoi inserire nel primo vettore? (massimo 20)\n");
	scanf("%d", &dim1);
	
	if(dim1<=0){
		printf("\nInserisci almeno un numero nel vettore!");
	}else if(dim1>20){
		printf("\nHai inserito troppi numeri!");
	}
	printf("Quanti numeri vuoi inserire nel secondo vettore? (massimo 20)\n");
	scanf("%d", &dim2);
	if(dim2<=0){
		printf("\nInserisci almeno un numero nel vettore!");
	}else if(dim2>20){
		printf("\nHai inserito troppi numeri!");
	}
	
	n1=malloc(dim1*sizeof(int));
	n2=malloc(dim2*sizeof(int));
	printf("\nInserisci i numeri che vuoi nel primo vettore:\n");
	for(i=0;i<dim1;i++){
		scanf("%d", &n1[i]);
	}
	printf("\nInserisci i numeri che vuoi nel secondo vettore:\n");
	for(i=0;i<dim2;i++){
		scanf("%d", &n2[i]);
	}
	
	printf("\n\nORDINAMENTO\n\n");
	printf("\nI numeri inseriti nel primo vettore sono:\n");
	for(j=0;j<dim1;j++){
		for(i=0;i<dim1-1;i++){
			if(n1[i]>n1[i+1]){
				a=n1[i];
				n1[i]= n1[i+1];
				n1[i+1]= a;
			}
		}	
	}
	for(i=0;i<dim1;i++){
		printf("%d\t", n1[i]);
	}
	
	printf("\nI numeri inseriti nel secondo vettore sono:\n");
	for(j=0;j<dim2;j++){
		for(i=0;i<dim2-1;i++){
			if(n2[i]>n2[i+1]){
				a=n2[i];
				n2[i]= n2[i+1];
				n2[i+1]= a;
			}
		}
	}	
	
	for(i=0;i<dim2;i++){
		printf("%d\t", n2[i]);
	}
	
	dim3=dim1+dim2;
	
	if(dim1>dim2){
		for(i=0;i<dim1;i++){
			fusione[i]=n1[i];
			fusione[i+dim1]=n2[i];
		}
	}else if(dim1<dim2){
		for(i=0;i<dim2;i++){
			fusione[i]=n2[i];
			fusione[i+dim2]=n1[i];
		}
	}else if(dim1==dim2){
		for(i=0;i<dim1;i++){
			fusione[i]=n1[i];
			fusione[i+dim1]=n2[i];
		}
	}
	
	printf("\n\nI numeri del terzo vettore sono:\n");
	
	for(j=0;j<dim3;j++){
		for(i=0;i<dim3-1;i++){
			if(fusione[i]>fusione[i+1]){
				a=fusione[i];
				fusione[i]= fusione[i+1];
				fusione[i+1]= a;
			}
		}
	}	
	for(i=0;i<dim3;i++){
		printf("%d\t", fusione[i]);
	}
	
	
}
