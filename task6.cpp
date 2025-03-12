#include<iostream>
using namespace std;
int main () {
	
	float balance =1000;
	int choice ;
	cout <<"************************************"<<endl;
	cout <<"      Baking System Menu: "<<endl;
	cout <<"************************************"<<endl;
	
  while (true) {
		cout <<"----------------------------------"<<endl;
		cout <<"1. Deposit Money\n";
		cout <<"2. Withdraw Money\n";
		cout <<"3. Check Balance\n";
		cout <<"4. Exit\n";
		cout <<"===================================="<<endl;
		
		cout <<"Enter your choice: ";
		cin >>choice ;
		cout <<endl;
		
	
	switch( choice ) {
	    case 1:
	    	
		   float deposit;
		   cout <<"Enter amount to deposit :";
		   cin >> deposit;
		   if ( deposit >0 ) {
		   	balance += deposit;
		   	
		   }
		   else {
		   	cout <<"Invalid deposit amount\n";
		   	
		   }
		   break;
		case 2:
			
			float withdraw;
			cout <<"Enter amount to withdraw: ";
			cin >> withdraw;
			if ( withdraw >0 && withdraw <= balance ){
				balance -= withdraw;
			}
			else {
				cout <<"Invalid withdrawal amount\n";
			}
			break;
		
	
	    case 3:
	    	
	    	cout <<"Current Balance :$" <<balance <<endl;
	    	break;
	    	
	    case 4:
	    
		    cout <<"Existing program ! Good bye !\n";
		    cout <<"===================================\n";
			return 0;
				
	    default:
	    	
	    	cout <<"Invalid Choice ! "<<endl;
	    	break;
    }	
 }
    return 0;
	
}