//esempio di funzioni

#include<stdio.h>

//sviluppo della funzione con la moltiplicazione
int calcolo_prodotto(int a, int b){
	int tot=0;
	tot= a*b;
	return tot;
	
	//o direttamente "return a*b;"
}

//sviluppo del main con i parametri inseriti dall'utente e il richiamo alla funzione
main(){
	int num1=0, num2=0, prodotto=0;
	
	printf("Inserire i numeri di cui vuoi fare il prodotto: ");
	scanf("%d %d",&num1,&num2);
	
	prodotto= calcolo_prodotto(num1, num2);
	printf("\nIl prodotto tra i due numeri e': %d", prodotto);
}
