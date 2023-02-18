#include<iostream>
using namespace std;

class old{
	
	int a = 20 ;
	
	void object++(){
	
	a++;
	cout<<a<<endl;
	
	}
	
	void object--(){
	
	a--;
	cout<<a<<endl;
	
	}
};

main(){
	
	++a;
	--a;
	
	old o;
	o.a;
}	

