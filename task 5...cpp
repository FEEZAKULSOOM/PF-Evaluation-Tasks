#include<iostream>
#include<string>
using namespace std;
int main () {
	const string correctPassword = "123";
	string userInput;
	bool isCorrect = false;
	
	do {
		cout << "\nEnter your password: ";
		cin >> userInput;
		cout << "**********************************************\n";
		
		if ( userInput == correctPassword ) {
			isCorrect = true;
			cout << "Password correct! Access granted. ";
			cout << "\n**********************************************\n";
		}
		else {
			cout << "Incorrect password! Please try again. " <<endl;
			cout << "**********************************************\n";
		}
	}  
	 while( userInput != correctPassword );
	 return 0;

}