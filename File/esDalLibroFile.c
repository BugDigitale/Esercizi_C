//esempio dal libro, non funziona benissimo perchè sul libro non c'è il file txt per capire come stava scritto
//però il concetto è questo

#include<stdio.h>

int main(){
	FILE *p;
	
	if((p=fopen("clients.txt", "r"))==NULL){
		puts("file could not be opened");
	}else{
		//stampa le opzioni di richiesta
		printf("%s", "Enter request\n"
			"1 - List accounts with zero balances\n"
			"2 - List accounts with credit balances\n"
			"3 - List accounts with debit balances\n"
			"4 - End of run\n?");
		unsigned int request; //numero di richiesta
		scanf("%u", &request);
		
		//elabora la richiesta dell'utente
		while(request!=4){
			unsigned int account; //numero del conto
			double balance; //saldo del conto
			char name[30];//nome del titolare del conto
			
			//leggi il numero del conto, il nome e il saldo dal file
			fscanf(p, "%d%29s%lf", &account, name, &balance);
			
			switch(request){
				case 1:
					puts("\naccounts with zero balances:");
					
					//leggi i contenuti del file (fino a eof)
					while(!feof(p)){
						// scrive solo se balance è 0
						if(balance == 0){
							printf("%-10d%-13s%7.2f\n", account, name, balance);
						}
						
						//leggi il numero del conto, il nome e il saldo del file
						fscanf(p, "%d%29s%lf", &account, name, &balance);
					}
					break;
				case 2: 
					puts("\naccounts with credit balance:\n");
				
					//leggi i contenuti del file (fino a eof)
					while(!feof(p)){
						//scrive solo se balance è minore di 0
						if(balance < 0){
							printf("%d-10d%-13s%7.2f\n", account, name, balance);
						}
					
						//leggi il numero del conto, il nome, e il saldo dal file
						fscanf(p, "%d%29s%lf", &account, name, &balance);
					}
					break;
				case 3:
					puts("\naccounts with debit balances:\n");
					
					//leggi i contenuti del file (fino a eof)
					while (!feof(p)){
						//scrive solo se balance è maggiore di 0
						if(balance>0){
							printf("%-10d%-13s%7.2f\n", account, name, balance);
						}
						
						//leggi il numero del conto, il nome e il saldo del file
						fscanf(p, "%d%29s%lf", &account, name, &balance);
					}
					break;
			}
			
			rewind(p);	//riporta p all'inzio del file
			
			printf("%s", "\n?");
			scanf("%d", &request);
		}
		
		puts("End of run.");
		fclose(p);	//fclose chiude il file
	}
}

/*

file clients.txt:
100	Jones	24.98
200	Doe	345.67
300	White	0.00
400	Stone	-42.16
500	Rich	224.63
*/
