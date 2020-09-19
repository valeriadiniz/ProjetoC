/*
	Name: Fibonacci
	Copyright: 
	Author: Valéria Diniz
	Date: 19/09/20 02:38
	Description: Programa para desvendar a sequencia Fibonacci
*/

#include<conio.h>
#include<stdio.h>
#include<locale.h>

main()

{ 

setlocale(LC_ALL,"Portuguese");

	int ant, atual, prox, gera;
	prox=gera=0;
	ant=1;
	atual=1;
	int cont=0;
	
	printf("Quantas gerações de Fibonacci deseja ver: ");
	scanf("%d", &gera);
	
	printf("%i,",ant);
	printf("%i,",atual);
	
	do
	{prox=atual+ant;
		printf("%i,",prox);
		ant=atual;
		atual=prox;
		cont++;
	
	}while(cont<gera);
	
}//FIM
