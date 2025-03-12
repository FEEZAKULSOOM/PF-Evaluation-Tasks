#include<iostream>
using namespace std;
int main () {
	int number;
	int i = 1;
	
	cout << "\nEnter a number to display its multiplication table: ";
	cin >> number;
	cout<<"\n=======================================================\n";
	
	cout << "Multiplication table for " << number << " is: " <<endl;
	cout<<"=======================================================\n";
	while (i <= 10) {
		cout << number << " x " << i << " = " << (number * i) << endl;
		i++;
		
	}
	return 0;
}