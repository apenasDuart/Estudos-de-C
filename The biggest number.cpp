// Libraries and function start
#include <iostream>

int main(){
    // Variables
    float x, y;
    // Inputs and Outputs
    std:: cout << "Write a value for X:\n";
    std:: cin >> x;
    std:: cout << "Write a value for Y:\n";
    std:: cin >> y;
        // Conditional
        if(x > y){
		std:: cout << "The biggest number is: " << x << '\n';
		} else {
			std:: cout << "The biggest number is: " << y << '\n';
		}
 system("pause");
return 0;
}
