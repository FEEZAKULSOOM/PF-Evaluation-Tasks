#include<iostream>
using namespace std;
int main  () {
	int age ;
	double income ;
	
	cout << " Enter your age : ";
	cin >> age;
	cout << "Enter your annual income : ";
	cin >> income;
	cout <<endl;
	cout <<"*******************************************************************\n";
	
	if ( age >=18 ) {
		if ( income >= 30000 ) {
			cout << "\nCongratulations !! You are eligible for loan ."<<endl;
		}
		else {
			cout <<"\nYou meet the age requirement but your income is below $30000 ,\nso you can't apply for loan ."<<endl;
		}
	}
	else {
		cout <<"\nYou are not eligible for loan because you are under 18 years of age ."<<endl;
	}
	cout <<"\n*******************************************************************\n";
	return 0;
}