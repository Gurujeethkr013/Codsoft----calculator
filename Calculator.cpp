#include<iostream>
using namespace std;
int main(){
	double A, B;
	char result;
	
	cout<<"Enter a number:";
	cin>>A;
	
	cout<<"Enter an operator:";
	cin>>result;
	
	cout<<"Enter a number:";
	cin>>B;
	
	switch(result){
		case '+':
			cout<<A + B;
			break;
		
		case '-':
			cout<<A - B;
			break;
			
		case '*':
			cout<<A * B;
			break;
			
		case '/':
			cout<<A / B;
			break;
			
		default:
			cout<<"Invalid Operator!";
	}
	return 0;
}

