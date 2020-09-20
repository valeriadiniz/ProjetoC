/*
	Name: Login
	Copyright: 
	Author: Val�ria Diniz
	Date: 19/09/20 16:37
	Description: Minha primeira tela de login em c++
*/

#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"Portuguese");
	
	string usuario =  "";
	string senha = "";
	bool login_sucesso = false;
	
	cout << "Seja bem vindo a tela de Acesso\n\n"; 	
	
	do{
		
		//<< e >> s�o reutilizados (ou seja, sobrecarregados ) como os operadores de entrada / sa�da 
		
		//<< Operador de Inser��o - O operador << sobrecarregado executa a sa�da (imprime na tela) com streams em C++. 
		//O objeto cout � usado em conjunto com ele para a impress�o de dados.
		
		//>> Operador de Extra��o - O objeto cin representa o stream de entrada no C++. Ele realiza a leitura de um seq��ncia de dados,
		//sem espa�os e sem tabula��es, vindas do teclado.
		//Para coletar estes dados armazenados, usa-se o "operador de extra��o" que "extrai" dados do stream.
		
		cout << ("Digite seu login: ");
		cin >> usuario;
		
		cout << ("Digite sua senha: ");
		cin >> senha;
		
		if (usuario == "Valeria" && senha == "12345"){
			
			cout << ("Login realizado com sucesso!\n\n ");
			login_sucesso=true;
		}
		
		else{
			cout << ("Login invalido, tente novamente!\n\n ");
		}
		
	}while( !login_sucesso);
	
	
	return 0;
}//FIM
