/*
	Name: Exerc�cio Calculadora Switch
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
	
	puts("Escolha sua opera��o: \n1 - Adi��o \n2 - Subtra��o \n3 - Multiplica��o \n4 - Divis�o \n5 - potencia��o \n6 - Sair...");
	puts ("=======================");
	
	
	printf("\nop��o: "); scanf("%d", &opc);
		
	
	switch(opc)
{
		
		case 1:  printf("1� n�mero: "); scanf("%f", &a);
				 printf("2� n�mero: "); scanf("%f", &b);
				 result = a+b;
				 printf ("A adi��o �: %.2f\n", result);
				 break;
				 
	    case 2:  printf("1� n�mero: "); scanf("%f", &a);
	    		 printf("2� n�mero: "); scanf("%f", &b);
	    		 result = a-b;
	    		 printf("A subtra��o �: %2.f\n", result);
	    		 break;
	    		 
	    case 3:  printf("1� n�mero: "); scanf("%f", &a);
	    		 printf("2� n�mero: "); scanf("%f", &b);
	    		 result = a*b;
	    		 printf("A multiplica��o �: %2.f\n", result);
	    		 break;
	    		 
	    		 
	    case 4:  printf("1� n�mero: "); scanf("%f", &a);
	    		 printf("2� n�mero: "); scanf("%f", &b);
	    		 result = a/b;
	    		 printf("A divis�o �: %2.f\n", result);
	    		 break;
	    
		case 5: printf("digite um n�mero (base): "); scanf("%f", &a);
				printf("digite n�mero expoente: "); scanf("%f",&b);
				result = pow(a,b); //adicionar biblioteca math.h
				printf("o resultado da potencia��o �: %2.f\n", result);
				break;
	    		 
	    case 6:  break;
	    default: puts ("Tente novamente.");
				 
				 
}//fim do switch
	if(opc == 6)
	break;
	Sleep(3000);//exibe o reslutado pelo tempo que voc� escolher pertence a biblioteca windows.h
	//puts("<<ENTER>>"); esse em conjunto com o getch deixa a mensagem na tela at� pressionar o enter
	//	getch();
	}//fim do while
		puts("bye...bye");
	
}//FIM
