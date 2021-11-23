//18-10-2021

#include<stdio.h>

main(){
	
	float prezzo, comm;
	
	printf("Inserire il valore della transizione ($): ");
	scanf("%f",&prezzo);
	
	
	while(prezzo<39)
	{
		printf("il prezzo di commissione minimo e' 39$\n");
		printf("inserire il valore della transizione:");
		scanf("%f",&prezzo);
	}
	
	if(prezzo<2500)
	{
		comm= prezzo*1.7/100;
		comm= comm+30;
		
		printf("la commissione del broker e': %f $",comm);
	} else {
		if(prezzo>=2500 && prezzo<6250)
		{
			comm= prezzo*0.66/100;
			comm= comm+56;
			
			printf("la commissione del broker e': %f $",comm);			
		} else {
			if(prezzo>=6250 && prezzo<20000)
			{
				comm= prezzo*0.34/100;
				comm= comm+76;
				
				printf("la commissione del broker e': %f $",comm);
			} else {
				if(prezzo>=20000 && prezzo<50000)
				{
					comm= prezzo*0.22/100;
					comm= prezzo+100;
					
					printf("la commissione del broker e': %f $",comm);
				} else {
					if(prezzo>=50000 && prezzo<500000)
					{
						comm= prezzo*0.11/100;
						comm= comm+155;
						
						printf("la commissione del broker e': %f $",comm);
					} else {
						if(prezzo>500000)
						{
							comm= prezzo*0.09/100;
							comm= comm+ 225;
							
							printf("la commissione del broker e': %f $",comm);
						}
					}
				}
			}
		}
	}
}
