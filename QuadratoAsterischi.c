/*scrivere una funzione che prende in input un int n e
stampa un quadrato di lato n*/

#include<stdio.h>

void quadrato_asterischi (int n){
	
	int a=0;
	while(a<n){							//stampa n righe
		int j=0;						
		while(j<n){						//stampa n *
			printf("*");
			j++;
		}
		printf("\n");
		a++;
	}
}

main(){
	
	int n;
	printf("inserisci la lunghezza del quadrato: ");
	scanf("%d",&n);
	quadrato_asterischi(n);
}


/*oppure direttamente

main(){
	quadrato_asterischi(3);			e ti stampa 3 asterischi per 3 righe
}

*/
