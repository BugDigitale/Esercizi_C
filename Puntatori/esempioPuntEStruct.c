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
}

