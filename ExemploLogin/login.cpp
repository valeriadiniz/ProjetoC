/*
	Name: Login
	Copyright: 
	Author: Valéria Diniz
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
		
		//<< e >> são reutilizados (ou seja, sobrecarregados ) como os operadores de entrada / saída 
		
		//<< Operador de Inserção - O operador << sobrecarregado executa a saída (imprime na tela) com streams em C++. 
		//O objeto cout é usado em conjunto com ele para a impressão de dados.
		
		//>> Operador de Extração - O objeto cin representa o stream de entrada no C++. Ele realiza a leitura de um seqüência de dados,
		//sem espaços e sem tabulações, vindas do teclado.
		//Para coletar estes dados armazenados, usa-se o "operador de extração" que "extrai" dados do stream.
		
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
