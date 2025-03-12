#include<iostream>
using namespace std;
int main() {
	int integers [5] = { 1, 2, 3, 4, 5};
	cout << "The elements of this array are:   ";
	cout << "\n===================================\n";
	
	for ( int i=0 ; i<5 ; i++ ) {
		cout << integers [i] << " ";
	}
	cout << "\n===================================\n";
	return 0;
}