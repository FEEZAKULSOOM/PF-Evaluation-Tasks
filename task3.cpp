#include<iostream>
using namespace std;
int main() {
	int n=10;
	int num ;
    cout <<" Enter the number of your choice :";
    cin >>num;
    cout <<"---------------------------------------------"<<endl;
    cout <<"---------------------------------------------"<<endl;
    cout <<"\n          Table Of " << num << " : \n";
    cout <<"---------------------------------------------"<<endl;
    cout <<"---------------------------------------------"<<endl;
      for( int i=1 ; i<=n ; i++) {
      	
	      cout << num <<" "<<  "*" << " " <<  i <<" " <<" = " <<( num * i)<<endl;
      }
  
    cout <<"---------------------------------------------"<<endl;
    cout <<"---------------------------------------------"<<endl;
} 
 
  