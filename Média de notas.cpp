// Bibliotecas e início da main
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	// Variáveis
	float Nota1, Nota2, media;
	// Input e Output
	cout << "Digite sua primeira nota:\n";
	cin >> Nota1;
	cout << "Escreva sua segunda nota:\n";
	cin >> Nota2;
	// Cálculos
	media = (Nota1 + Nota2) / 2;
	// Condicionais
	    if(media >= 7 and media <= 9.9){
	    	cout << "Você foi aprovado!\n";
		}  else if (media == 10) {
			cout << "Parabéns pelo seu esforço, você obteu a nota máxima e foi aprovado!!!\n";
		} else {
			cout << "Você foi reprovado.\n";
		}
 system("pause");
return 0;
}
