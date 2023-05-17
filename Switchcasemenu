#include <iostream>
#include <locale.h>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
    //Variáveis
	int x;
	char opcao;
	//Opções do menu (Input + Output) + Laço de repetição
	do{
	cout << "Menu\n";
	cout << "1- Contatos\n";
	cout << "2- Informações\n";
	cout << "3- Ajuda\n";
	cout << "9- Sair\n";
		cout << "Escolha a opção desejada:\n";
		cin >> x;
	//Switch cases
	switch(x){
		case 1 : cout << "Celular: (xx)xxxxx-xxxx\n" << "Telefone: (xx)xxxx-xxxx\n" << "Gmail: Atendimentoxx@gmail.com\n";
		case 2 : cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
		case 3 : cout << "Para utilizar o programa apenas se guie pelo números que estão entre as opções, são números de 1 a 9\n" << 
		"Caso ocorra algum erro ligue para: (xx)xxxx-xxxx\n";
		default : cout << "Digite um número válido\n";
	}
	cout << "Digite 'S' se quiser voltar ao início ou qualquer outra tecla para sair!\n";
	cin >> opcao;
}
while(opcao == 's' || opcao == 'S');
system("pause");
return 0;
}
