/*
21-01-2022
leggi N numeri, inseriscili in un vettore e individua gli elementi duplicati visualizzandoli sullo schermo
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	int *a, n, i, cost=0, j;
	
	printf("Quantita' di numeri che vuoi inserire nel vettore: ");
	scanf("%d", &n);
	
	printf("\nInserisci i numeri:\n");
	a=malloc(n * (sizeof (int)));
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	printf("\n\nI numeri sono:\n");
	for(i=0;i<n;i++){
		printf("\n");
		printf("%d", a[i]);   
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			if(a[i]==a[j]) {
                cost++;
                printf("\nElemento uguale trovato: %d", a[i]);
            }
		}
	}

	if(cost==0)
        printf("\nNon ci sono uguali");
    else
        printf("\nCi sono %d elementi uguali", cost);
}
