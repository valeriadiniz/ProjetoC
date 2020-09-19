/*
	Name: Exercício Calculadora Switch
	Copyright: 
	Author: 
	Date: 18/09/20 19:26
	Description: Programa para exercitar estruturas
*/

#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<windows.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	puts("Calculadora Digital"); puts("=========================");
	
	while(1)
	{
		system("cls");//limpar a tela necessita uso da biblioteca windows.h
	
	float a, b, result; a = b = result = 0.0;
	int opc =0;
	
	puts("Escolha sua operação: \n1 - Adição \n2 - Subtração \n3 - Multiplicação \n4 - Divisão \n5 - potenciação \n6 - Sair...");
	puts ("=======================");
	
	
	printf("\nopção: "); scanf("%d", &opc);
		
	
	switch(opc)
{
		
		case 1:  printf("1º número: "); scanf("%f", &a);
				 printf("2º número: "); scanf("%f", &b);
				 result = a+b;
				 printf ("A adição é: %.2f\n", result);
				 break;
				 
	    case 2:  printf("1º número: "); scanf("%f", &a);
	    		 printf("2º número: "); scanf("%f", &b);
	    		 result = a-b;
	    		 printf("A subtração é: %2.f\n", result);
	    		 break;
	    		 
	    case 3:  printf("1º número: "); scanf("%f", &a);
	    		 printf("2º número: "); scanf("%f", &b);
	    		 result = a*b;
	    		 printf("A multiplicação é: %2.f\n", result);
	    		 break;
	    		 
	    		 
	    case 4:  printf("1º número: "); scanf("%f", &a);
	    		 printf("2º número: "); scanf("%f", &b);
	    		 result = a/b;
	    		 printf("A divisão é: %2.f\n", result);
	    		 break;
	    
		case 5: printf("digite um número (base): "); scanf("%f", &a);
				printf("digite número expoente: "); scanf("%f",&b);
				result = pow(a,b); //adicionar biblioteca math.h
				printf("o resultado da potenciação é: %2.f\n", result);
				break;
	    		 
	    case 6:  break;
	    default: puts ("Tente novamente.");
				 
				 
}//fim do switch
	if(opc == 6)
	break;
	Sleep(3000);//exibe o reslutado pelo tempo que você escolher pertence a biblioteca windows.h
	//puts("<<ENTER>>"); esse em conjunto com o getch deixa a mensagem na tela até pressionar o enter
	//	getch();
	}//fim do while
		puts("bye...bye");
	
}//FIM
