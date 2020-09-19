/*
	Name: Exercício 3
	Copyright: 
	Author: Valéria Diniz
	Date: 18/09/20 00:35
	Description: Carregar 16 números inteiros e exibí-los no vetor
*/


#include <stdio.h>
#include <conio.h>
#include<locale.h>

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
int vet[16], mat[4][4], cont, lin, col;
cont=0; lin=col=0;

printf("Digite 16 números inteiros: ");

do 
{
	scanf("%d", &vet[cont]);
	cont++;
}while(cont<16);

puts("Vetor carregado.");

cont=0;

while(lin<4)
{
	while(col<4)
	{
	mat[lin][col]=vet[cont];
	col++;
	cont++;
	}
	col=0;
	lin++;
}

printf("\nMatriz Carregada!\n");

lin=col=0;

while(lin<4)
{
	while(col<4)
	{
		printf("%d\t", mat[lin][col]);
		col++;
	}
puts("");
	col=0;
	lin++;
}


}//FIM
