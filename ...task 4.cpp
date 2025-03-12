//Task 3 :
#include<iostream>
using namespace std;
int main() {

  int num;
  cout <<" Enter the number of your choice : ";
  cin >>num;
  cout << "**********************************************"<<endl;
  
  int factorial =1;
  while ( num < 0 ) {
  	cout <<" This is negative number. "<<endl;
  	cout <<"----------------------------------------------\n\n"<<endl;
  	
  	cout << " Enter a positive number : ";
  	cin >> num;
   }
  for(int i =1 ; i<=num ; i++ ) {
  	
  		factorial *= i;
  		
	}
	cout <<"***********************************************"<<endl;
	
    cout<<"Factorial of number " << num << " = " <<factorial<<"\n";
    
    cout <<"-----------------------------------------------"<<endl;
}