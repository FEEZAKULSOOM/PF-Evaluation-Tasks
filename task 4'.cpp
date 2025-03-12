#include<iostream>
using namespace std;
int main () {
	int n = 5;
	int sum = 0;
	int i = 1;
	while ( i<=n ) {
		sum +=i;
		i++;
		
	}
	cout << "\n**********************************************\n\n";
	cout << "The sum of first five natural number is : " <<sum<<"\n";
	cout << "\n**********************************************\n";
}