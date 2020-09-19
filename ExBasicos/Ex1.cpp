/*
	Name: Exercício 1
	Copyright: 
	Author: Valéria dos Santos Diniz
	Date: 17/09/20 23:55
	Description: Programa que recebe duas variáveis e as troque de valor sem a utilizção de uma variável auxiliar.
*/


#include<conio.h>
#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int a, b;
	a=b=0;
	
	printf("Digite dois números inteiros: ");
	scanf("%d", &a); scanf("%d", &b);
	
	//para entender a lógica de como inverter os valores já recebidos por a e b ***exemplo entrada com o número 5 e 6 respectivamente nos comentários***
	
	b=a-b; // b=5-6 *(-1)
	
	//printf("\nb= %d", b);
	
	a=a-b; // a=5-(-1) *(6)  
	
	//printf("\na= %d", a);
	
	b=a+b; // b=6+(-1) *(5)
	
	//printf("\nb= %d", b);
	
	printf("\na= %d", a);
	printf("\nb= %d", b);

	
}//FIM
