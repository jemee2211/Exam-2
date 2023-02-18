#include<iostream>
using namespace std;

main(){
	
	int a;
	char b[50] = "Yor Are Not Eligible For Vote ";
	
	cout<<"Enter Age :";
	cin>>a;
	
	try{
		
		if(a>=18){
			
			cout<<"Yor Are Eligible For Vote ";
		}
		
		else{
			
			throw b;
		}
	}
	
	catch(char c[]){
		
		cout<<c;
	}
	
	
}
