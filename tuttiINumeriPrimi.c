//stampa i primi 1000 numeri primi

#include<stdio.h>

int primo(int n){
	int a=2, check=1;
	
	while(a<n){
		if(n%a==0){
			check=0;
			a=n+1;
		}	
		return check;
		}
	
} 

main(){
	int k=1;
	
	
	while(k<=1000){
		if(primo(k)){
		printf("\n%d",k);
		}
		k++;
	}
	printf("\n");
	return 0;
}
