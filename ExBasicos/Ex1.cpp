/*
	Name: Exerc�cio 1
	Copyright: 
	Author: Val�ria dos Santos Diniz
	Date: 17/09/20 23:55
	Description: Programa que recebe duas vari�veis e as troque de valor sem a utiliz��o de uma vari�vel auxiliar.
*/


#include<conio.h>
#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b;
	a=b=0;
	
	printf("Digite dois n�meros inteiros: ");
	scanf("%d", &a); scanf("%d", &b);
	
	//para entender a l�gica de como inverter os valores j� recebidos por a e b ***exemplo entrada com o n�mero 5 e 6 respectivamente nos coment�rios***
	
	b=a-b; // b=5-6 *(-1)
	
	//printf("\nb= %d", b);
	
	a=a-b; // a=5-(-1) *(6)  
	
	//printf("\na= %d", a);
	
	b=a+b; // b=6+(-1) *(5)
	
	//printf("\nb= %d", b);
	
	printf("\na= %d", a);
	printf("\nb= %d", b);

	
}//FIM
