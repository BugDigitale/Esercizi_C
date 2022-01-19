/*
19-01-2022
1) Dichiarare due variabili intere, e due puntatori coerenti. Puntare a tali variabili, quindi verificare 
   che i due indirizzi sono differenti fra loro,mediante un semplice confronto fra i puntatori.
2) Inserire una parola, riscrivila utilizzando i puntatori e stampa il terzo carattere della parola.
3) Dichiarare due stringhe di uguale dimensione. Acquisire in una stringa una sequenza di caratteri, quindi copiare, usando i puntatori,
   tutti i caratteri dalla stringa acquisita all'altra, accedendo in modo indiretto a ciascuna delle locazioni delle due stringhe.

*/

#include<stdio.h>
#include<string.h>

int main(){
	int a, b;
	int *aPtr, *bPtr;
	
	printf("PRIMO ESERCIZIO");
	
	aPtr=&a;
	bPtr=&b;
	
	printf("\n\ninserisci un numero: ");
	scanf("%d", aPtr);
	printf("inserisci un numero: ");
	scanf("%d", bPtr);
	
	printf("\nL'indirizzo di a: %p", aPtr);
	
	printf("\nL'indirizzo di b: %p", bPtr);
	
	printf("\nIl valore di a: %d", *aPtr);
													//per controllare i valori
	printf("\nIl valore di b: %d", *bPtr);
	
	if(aPtr!=bPtr){
		printf("\ngli indirizzi sono diversi");
	} else{
		printf("\ngli indirizzi sono uguali");
	}
	
	printf("\n\n\n\n\nSECONDO ESERCIZIO");
	
	char stringa[10+1];
	char *p;
	int i, dim=0;
	
	printf("\n\nInserire una parola: ");
	p=&stringa[0];
	
	scanf("%s",p);
	
	printf("\n\nInserimento con p+2: %c", *(p+2));
	printf("\nInserimento con stringa[0]+2: %c", *(stringa+2));
	printf("\nInserimento con stringa[3]: %c\n\n\n", stringa[2]);        //vari modi per scrivere la stessa cosa
	
	dim=strlen(p);  //si può mettere sia p che "stringa"
	for(i=0;i<dim; i++){
		printf("%c",*(p+i));   //si può mettere sia p che "stringa"
	}
	
	printf("\n\n\n\n\nTERZO ESERCIZIO \n\n");
	
	char stringa1[10+1], stringa2[10+1];
	char *k;
	char *j;
	int h, dime;
	
	printf("Inserisci una parola: ");
	k=&stringa1[0];
	
	scanf("%s", k);
	
	printf("Inserisci la parola che vuoi sostituire in quella appena inserita: ");
	j=&stringa2[0];
	
	scanf("%s", j);
	
	strcpy(k, j);
	dime=strlen(j);
	printf("La nuova parola e': ");
	for(h=0;h<dime;h++){
		printf("%c", *(j+h));
	}
	
	
}
