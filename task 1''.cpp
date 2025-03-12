#include<iostream>
using namespace std;
int main () {
	int n;
	cout << "\nEnter a number : ";
	cin >> n;
	cout<<"\n=======================================================\n";
	
	int i = 1 ;
	cout <<"Numbers from 1 to " << n << " are : \n";
	cout<<"=======================================================\n\n";
	
	while ( i <= n ) {
		cout << i <<" ";
		i++;
	}
	cout << endl;
	
	return 0;
	
	 
}