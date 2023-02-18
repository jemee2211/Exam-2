#include<iostream>
using namespace std;

class x{
	
	public:
		
    int a;
	int b;
	int c;
	int d,f,e,z;
	
};

class y: public x{
	
	public:
	
	void setData();
	void getData(); 
	
};

void y::setData(){
	
	cout<<"Enter A :";
	cin>>a;
	
	cout<<"Enter B :";
	cin>>b;
	
	cout<<"Enter C :";
	cin>>c;
	
	d=a*a*a;
	e=b*b*b;
	f=c*c*c;
	
	z=d+e+f;
	
}

void y::getData(){
	
	cout<<"Cube Is "<<z;
	
}

main(){
	
	y o;
	o.setData();
	o.getData();
}





