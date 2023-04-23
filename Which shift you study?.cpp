// Libraries and funciton start
#include <iostream>
using namespace std;

int main(){
	// Variables 
	char v;
	// Input and Output
	cout << "Type in which shift you study (M= Morning | A= Afternoon | N= Night):\n";
	cin >> v;
	// command to remove case sensitive imported from library <<cctype>>
	v = toupper(v);
	// ERROR
	while(v != 'M' && v != 'A' && v!= 'N'){
		cout << "Invalid value. Please type again:\n";
		cin >> v;
		v = toupper(v);
	}
	// Conditional
	if(v == 'M'){
		cout << "Good Morning!\n";
	} else if (v == 'A') {
	cout << "Good Afternoon!\n";
	} else {
		cout << "Good Night!\n";
	}
 system ("pause");
return 0;
}
