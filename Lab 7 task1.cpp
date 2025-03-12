#include<iostream>
using namespace std;
int main () {
	// Task 01 : 
	int num;
	cout << " Enter an integer : ";
	cin >> num;
	cout <<endl;
	cout << "********************************************" <<endl;
	
	if( num > 0 ) {
		cout << " The number is positive ." <<endl;
	} 
	else if ( num < 0 ) {
		cout << " The number is negative ." <<endl;
	} 
	else {
		cout << "The number is zero ." <<endl;
	}
	cout << "\n********************************************" <<endl;
	return 0;
}