#include<iostream>
using namespace std;
int main () {
	double num1, num2;
	char op;
	
	cout <<"\n==================================\n";
	cout <<"      Simple Calculator\n";
	cout <<"===================================\n";
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter operator: ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> num2;
	
	switch(op) {
		case '+':
			cout << "Result: " << num1 + num2 << endl;
			break;
		case '-':
			cout << "Result: " << num1 - num2 << endl;
			break;
		case '*':
			cout << "Result: " << num1 * num2 << endl;
			break;
		case '/':
			if (num2 != 0) {
				cout << "Result: " << num1 / num2 << endl;
			}
			else {
				cout <<" Error : division by zero !" << endl;
			}
			break;
		default :
			cout << "Error : Invalid Operator !" << endl;
			break;
	}
	return 0;
}
  