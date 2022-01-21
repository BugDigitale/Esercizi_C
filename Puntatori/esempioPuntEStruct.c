/*
Esempio puntatori con struct
*/
#include<stdio.h>

typedef struct s_data{
	char titolo[50];
	int pagine;
} t_data;

int main(){
	t_data libro1;
	t_data *p;
	
	p=&libro1;
	
	libro1.pagine=100;
	
	printf("\nIl numero di pagine e': %d", (*p).pagine);
	
	//oppure
	
	printf("\nIl numero di pagine e': %d", p->pagine);
	
	strcpy(libro1.titolo, "ciao a tutti");
	
	printf("\n\nIl titolo del libro e': %s", p->titolo);
}

