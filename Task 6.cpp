#include<iostream>
using namespace std;
int main () {
	int n , sum ;
	cout <<" \n ========================================\n";
	cout <<"       Sum of numbers from 1 - N            \n";
	cout <<" ========================================\n";
	
	cout <<" Enter a number of your choice :";
	cin >> n;
	cout <<" \n----------------------------\n";
	for( int i=1 ; i<=n ; i++ ) {
		sum += i;
	}
	cout <<" sum of numbers is : " << sum <<endl;
	cout <<"----------------------------\n";
}