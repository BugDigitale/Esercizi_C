/*
Esempio su come funzinano le funzioni by reference
*/

#include<stdio.h>
#include<stdlib.h>

void scambio(int *p, int *p2);

int main(){
	int a, b, *p, *p2;
	
	scanf("%d", &a);
	printf("\n");
	scanf("%d", &b);
	printf("\n\n");
	
	p=&a;
	p2=&b;
	
	scambio(p, p2);
	printf("\n\n");
	printf("%d\n", *p);
	printf("%d", *p2);
}

void scambio(int *p, int *p2){
	int c;
	
	c=*p;
	*p=*p2;
	*p2=c;
}
