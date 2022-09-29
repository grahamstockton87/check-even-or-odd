#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"enter a number : \n";
	cin>>a;
	
	b = a%2;
	
	if(b == 0 ){
		cout<<"entered no. is even";
	} 
	else{
		cout<<"entered no. is odd";
	}
	
	return 0;
}		
