#include<iostream>
using namespace std;
int main() {
	
    int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int integers [n];
	int largest = 0;
	cout << "\n============================================\n";
	
	cout << "Enter the elements of an array: ";
	
	cout << "\n============================================\n";
	
	for ( int i=0 ; i<n ; i++ ) {
		cin >> integers [i];
		if ( integers [i] > largest ) {
			largest = integers [i];
		}
	}
	cout << "\n============================================\n";
	
	cout << "Largest number  of given array is: " << largest;
	
	cout << "\n============================================\n";
	
}