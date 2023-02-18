#include<iostream>
using namespace std;

class parent{
	
	public:
		
	virtual	void wakeup()=0;
		
};

class child:public parent{
	
	public:
		
		void wakeup(){
			
			cout<<"Early Bird ";
		}
	
};

main(){
	
	child o;
	o.wakeup();
}
