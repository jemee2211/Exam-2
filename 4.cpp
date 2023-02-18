#include<iostream>
using namespace std;

class RBI{
	
	public:
		
		int x;
		int y;
		int z;
		
			
};

class BOB:public RBI{
	
	public:
		void s1(){
		
		cout<<"Enter Rate Attribute ";
		cin>>x;
		
	}
	
	void getROI3(){
		
		cout<<"Rate Attribute Is = "<<x;
	}
};

class ICICI: public RBI{
	
	public:
		void s2(){
		
		cout<<"Enter Rate Attribute ";
		cin>>y;
		
	}
	
	void getROI2(){
		
		cout<<"Rate Attribute Is = "<<y;
	}
};

class SBI: public RBI{
	
	public:
		void s3(){
		
		cout<<"Enter Rate Attribute  ";
		cin>>z;
		
	}
	
	void getROI(){
		
		cout<<"Rate Attribute Is = "<<z;
	}
	
};

main(){
	
	BOB o;
	o.s1();
	o.getROI3();
	
	ICICI ob;
	ob.s2();
	ob.getROI2();
	
	SBI obj;
	obj.s3();
	obj.getROI();
}








