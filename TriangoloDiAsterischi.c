//scrivere un programma che visualizzi un triangolo di asterischi
//28-10-2021

#include<stdio.h>

void triangolo(int n){
	
	int i, j, a;
	
	
	for(i=0;i<=n;i++){ 				  //per inserire gli spazi: n-1
		for(a=1;a<=n-i;a++){
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++){       //per inserire gli asterischi: (2*i)-1
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	
	int altezza;
	
	printf("inserisci l'altezza del triangolo che vuoi creare: ");
	scanf("%d",&altezza);
	triangolo(altezza);
}
