/*
	Name: Média
	Copyright: 
	Author: Valéria Diniz
	Date: 19/09/20 02:43
	Description: Programa para calcular a méedia de três números inteiros
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>

int a,b,c,soma;
float media;

main()

{
	
setlocale(LC_ALL,"Portuguese");

	a=b=c=0; media=0.0;
	
	printf("Digite 3 números inteiros: ");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	
	soma=a+b+c;
	
	media=soma/3;
	
	printf("A media será: %f",media);

}//FIM

