/*
29-01-2022
Si vuole implementare un programma che calcola le aree di tre tipi di figure geometriche: rettangoli,
triangoli e quadrati. Si supponga che i dati relativi alle figure geometriche vengano memorizzate in
struct del tipo:
typedef struct {
 int tipo;
 int a;
 int b;
} figura;
dove il campo tipo assume valore 0 nel caso in cui la figura sia un rettangolo (in questo caso i valori
memorizzati nei campi a e b corrispondono ai due lati), valore 1 nel caso in cui la figura sia un
triangolo (in questo caso i valori memorizzati nei campi a e b sono la base e l’altezza), valore 2 nel
caso in cui la figura sia un quadrato (in questo caso il valore in a è il lato del quadrato ed il valore
presente in b viene trascurato). 
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int tipo;
	int a;
	int b;
}figura;

void rettangolo(figura figure);
void triangolo(figura figure);
void quadrato(figura figure);

int main(){
	figura figure;
	int c;
	
	printf("Inserisci la figura geometrica che vuoi:\n");
	printf("0 - Rettangolo\n");
	printf("1 - Triangolo\n");
	printf("2 - Quadrato\n");
	printf("Scegli:\n");
	scanf("%d", &figure.tipo);
	switch(figure.tipo){
		case 0:
			rettangolo(figure);
			break;
		case 1:
			triangolo(figure);
			break;
		case 2:
			quadrato(figure);
			break;
		default:
			printf("ERRORE! Inserire uno dei numeri del menu'!");
	}
	
}

void rettangolo(figura figure){
	int c;
	
	printf("\n\nInserire il lato maggiore (base): ");
	scanf("%d", &figure.a);
	printf("\nInserire il lato minore (altezza): ");
	scanf("%d", &figure.b);
	c=figure.a*figure.b;
	printf("\n\nL'area del rettagolo e': %d", c);
}

void triangolo(figura figure){
	int c;
	
	printf("\n\nInserire la base: ");
	scanf("%d", &figure.a);
	printf("\nInserire l'altezza: ");
	scanf("%d", &figure.b);
	c=(figure.a*figure.b)/2;
	printf("\n\nL'area del triangolo e': %d", c);
}

void quadrato(figura figure){
	int c;
	
	printf("\n\nInserire il lato: ");
	scanf("%d", &figure.a);
	c=figure.a* figure.a;
	printf("\n\nL'area del quadrato e': %d", c);
}
