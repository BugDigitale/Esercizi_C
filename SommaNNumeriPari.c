#include<stdio.h>

main(){
	int n,i, somma=0;
	
	printf("inserire il numero:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		somma+=2*i;
	}
	i=1;
	printf("la somma e':%d", somma);
	return 0;
}
