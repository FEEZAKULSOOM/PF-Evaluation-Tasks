#include<iostream>
using namespace std;
int main() {
	int number;
	cout << "\nEnter a positive number: ";
	cin >> number;
	
	while ( number <=0 ) {
		cout << "*****************************************\n";
		cout << "You entered a negative number or Zero! \n";
		cout << "*****************************************\n\n";
	    
	    
	    cout << "plz! Enter a positive number: ";
	    cin >> number;
	}
	cout << "****************************************************\n";
	cout << "* You entered a positive number: " << number << " *" << "\n";
	cout << "****************************************************\n";
}