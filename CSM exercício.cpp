// Bibliotecas e início da main
#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	// Variáveis
	float sal, aum, n_sal;
	// Input e Output
	std:: cout << "Digite o salário para reajuste:\n";
    std:: cin >> sal;
    // Condicionais
        if(sal <= 280){
        	aum = sal * 0.20;
        	n_sal = (sal + aum);
        	std:: cout << "Seu salário era de: " << sal << '\n';
        	std:: cout << "O reajuste foi de 20%\n";
        	std:: cout << "valor do reajuste foi de: " << aum << '\n';
        	std:: cout << "Salário após o reajuste: " << n_sal << '\n';
        	}   
			else if(sal > 280 and sal <= 700 ) { 
        	aum = sal * 0.15;
        	n_sal = sal + aum;
        	std:: cout << "Seu salário era de: " << sal << '\n';
        	std:: cout << "O reajuste foi de 15%\n";
        	std:: cout << "valor do reajuste foi de: " << aum << '\n';
        	std:: cout << "Salário após o reajuste: " << n_sal << '\n';
        	}  
			else if(sal > 700 and sal <= 1500 ) { 
        	aum = sal * 0.10;
        	n_sal = sal + aum;
        	std:: cout << "Seu salário era de: " << sal << '\n';
        	std:: cout << "O reajuste foi de 10%\n";
        	std:: cout << "valor do reajuste foi de: " << aum << '\n';
        	std:: cout << "Salário após o reajuste: " << n_sal << '\n';
        	}   
			else { 
        	aum = sal * 0.05;
        	n_sal = sal + aum;
        	std:: cout << "Seu salário era de: " << sal << '\n';
        	std:: cout << "O reajuste foi de 5%\n";
        	std:: cout << "valor do reajuste foi de: " << aum << '\n';
        	std:: cout << "Salário após o reajuste: " << n_sal << '\n';
        }
 system ("pause");
return 0;
}
