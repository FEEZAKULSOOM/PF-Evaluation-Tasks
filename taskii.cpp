#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	int integers [n];
	cout << "\n============================================\n";
	
	cout << "Enter the elements of an array: ";
	
	cout << "\n============================================\n";
	
	for ( int i=0 ; i<n ; i++ ) {
		cin >> integers [i];
	}
	cout << "\n============================================\n";
	
	for ( int i=n-1 ; i >=0 ; i-- ) {
		cout << integers [i] << " ";
	}
	cout << "\n============================================\n";
	
}