#include<iostream>
using namespace std ;

int sum ( int n ) {
	 if ( n <= 0 ) 
	 return 0;
	 return  n + sum ( n-1 );
	 
}
 int main () {
 	
 	int num;
 	cout << " Enter the value of num : ";
 	cin >> num;
 	cout << endl;
 	
 	cout << "================================================\n";
 	cout << " Sum  of numbers from 1 to n is :" << sum ( num );
 	cout << "\n================================================\n";
 	
 }