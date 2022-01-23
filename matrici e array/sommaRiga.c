/*
22-01-2022
Data una matrice 4×4 di interi trovare la riga o la colonna con somma più alta.

*/

#include<stdio.h>
#define righe 4
#define colonne 4

int main(){
	int mat[righe][colonne], i, j, somma, a[righe], b=0;
	
	printf("Inserisci i numeri nella matrice:\n");
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<righe;i++){
		for(j=0;j<colonne;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	int sommaRigaMax=0;
    int posizioneRigaMax=0;
    for(j=0;j<colonne;j++){
        sommaRigaMax=sommaRigaMax+mat[0][j];
    }
    for( i=1;i<righe;i++){
        int sommaRigaAttuale=0;
        for( j=0;j<colonne;j++){
            sommaRigaAttuale=sommaRigaAttuale+mat[i][j];
           // posizioneRigaMax=1;
        }
        
        if(sommaRigaAttuale>sommaRigaMax){
            sommaRigaMax=sommaRigaAttuale;
            posizioneRigaMax=i+1;
        }
    }
    int sommaColMax=0;
    int posizioneColMax=0;
    
    for(i=0;i<righe;i++){
        sommaColMax=sommaColMax+mat[i][0];
    }
    
    
    for(j=1;j<colonne;j++) //lavoro sulla colonnna j-esima
    {
        int sommaColAttuale=0;
        for( i=0;i<righe;i++) //lavoro su tutte le celle della colonna
		{
            sommaColAttuale=sommaColAttuale+mat[i][j];
        }
        
        if(sommaColAttuale>sommaColMax){
            sommaColMax=sommaColAttuale;
            posizioneColMax=i+1;
        }
    }
	
	if(sommaColMax>sommaRigaMax){
        printf("\n\nLa maggiore e' %d nella colonna %d", sommaColMax, posizioneColMax);
    }else if(sommaColMax==sommaRigaMax){
            printf("la somma massima e' nella riga %d ", posizioneRigaMax);
            printf(" e nella colonna %d ",posizioneColMax); 
        }else{
            printf("\n\nLa maggiore e' %d nella riga %d", sommaRigaMax, posizioneRigaMax);
        }
    }
