/*
	Name: Exerc�cio 2
	Copyright: 
	Author: Val�ria Diniz
	Date: 18/09/20 00:10
	Description: Em um grupo de 10 pessoas inserir quantos s�o homens e inserir sua altura, 
	se possuir mulheres digitar altura respectiva a cada uma em seguida
	*O programa deve exibir a altura da mulher mais alta e a m�dia da altura das mulheres
	*Deve exibir tamb�m a altura do homem mais baixo e a m�dia da altura dos homens
*/

#include <stdio.h>
#include <conio.h>
#include<locale.h>

main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	float vam, vah, ah, am, hb, ma; //vam-vari�velacumuladora de mulher vah-acumuladora de homem hb-homem baixo ma-mulher alta
	int h, m, idade, n;
	
	puts("Quantos s�o homens: ");//utilizar a v�rgula para os n�meros reais
	scanf("%d",& h);
	
	m=10-h;
	
	puts("Digite a altura dos homens: ");
	hb=3.5;//vari�vel para ir diminuindo
	
	for(n=0;n<h;n++)
{
		scanf("%f",& ah);
	vah=ah+vah;
	if(ah<hb)
	hb=ah;
	else
	printf("");
}
	puts("Digite a altura das mulheres: ");
	for(n=0;n<m;n++)
	{
	scanf("%f",& am);
	vam=vam+am;
	if(am>ma)
	ma=am;
	else
	printf("");
}
	printf("A mulher de maior altura possui:%.2f \n", ma);
	vam=vam/m;
	printf("A m�dia de altura das mulheres � de:%.2f \n", vam);
	printf("O homem de menor altura possui:%.2f \n", hb);
	vah=vah/h;
	printf("A m�dia de altura dos homens � de:%.2f \n", vah);
		
	
}//FIM
