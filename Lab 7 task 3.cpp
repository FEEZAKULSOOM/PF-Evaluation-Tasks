#include <iostream>
#include <string>
using namespace std;
int main () {
	string correctUsername = "admin";
	string correctPassword = "12345";
	
	string enteredUsername , enteredPassword;
	
	cout << " -----------------------------------------------\n";
	cout << "         Simple Login System\n";
	cout << " -----------------------------------------------\n\n";
	cout <<" Enter Username: ";
	cin >> enteredUsername;
	cout <<" Enter enteredPassword: ";
	cin >>enteredPassword;
	
	cout << "\n-------------------------------------------------\n";
	if ( enteredUsername == correctUsername &&  enteredPassword == correctPassword ) {
		cout << " Access Granted. \n "; 
	}
	else if ( enteredUsername == correctUsername && enteredPassword != correctPassword ) {
		cout << " Wrong Password. \n ";
	}
	else {
		cout << " User Not Found. \n";
	}
	cout << "-------------------------------------------------\n";
	return 0;
}