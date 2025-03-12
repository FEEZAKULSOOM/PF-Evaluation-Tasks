#include<iostream>
using namespace std;
int main() {
	int integers [5] = { 1, 2, 3, 4, 5};
	int sum = 0;
	float average;
	cout << "\n======================================================\n";
	
	for ( int i=0 ; i<5 ; i++ ) {
		sum += integers [i];
		average = sum / 5;
	}
	cout << "* The sum of the elements of this array is: " << sum << "\n";
	cout << "* The average of the elements of this array is: " << average ;
	
	cout << "\n=======================================================\n";
	return 0;
}