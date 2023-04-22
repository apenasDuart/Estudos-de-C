// Bibliotecas e início da main
#include <iostream>
#include <locale.h>
#include <cctype>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// Variáveis
	char c;
	std:: cout << "Digite seu salário: ";
	std:: cin >> c;
	// Reset pra erro
	while(!std:: isdigit(c)){
		std:: cout << "Erro: o salário deve conter um número, não letras. Digite novamente: ";
		std:: cin >> c;
	}
	      std:: cout << "Seu salário é: " << c << '\n';
	system("pause");
return 0;	
}
