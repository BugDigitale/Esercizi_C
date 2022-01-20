/*
20-01-2022
Scrivere un programma che prenda in input una stringa (lunga al pi`u 20)
con getchar, la copi invertita in una variabile e stampi tale variabile.

*/

#include<stdio.h>
#include<string.h>
#define N 100

int main(){
	char stringa[N];
	char ch;
	int n=0, i;
	
	printf("inserisci una parola: ");
	ch=getchar();

  	while(ch!='\n' && n<12){ 
    	stringa[n++]=ch;
     	ch=getchar();
  	}
  	for(i=n; i>=0; i--){
      putchar(stringa[i]);
  	}
}
