/*
	Name: M�dia
	Copyright: 
	Author: Val�ria Diniz
	Date: 19/09/20 02:43
	Description: Programa para calcular a m�edia de tr�s n�meros inteiros
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
	
	printf("Digite 3 n�meros inteiros: ");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	
	soma=a+b+c;
	
	media=soma/3;
	
	printf("A media ser�: %f",media);

}//FIM

