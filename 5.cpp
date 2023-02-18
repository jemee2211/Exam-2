#include<iostream>
using namespace std;

class math{
	
	
	public:
	
	int c,w;
		
	void s1(int a, int b){
	
	cout<<"Enter A : ";
	cin>>a;
	
	cout<<"Enter B : ";
	cin>>b;
	
	    c= a+b;
		
		cout<<c<<endl;
			
	}
	
	void s2(int x, int y , int z){
		
	cout<<"Enter X :";
	cin>>x;
	
	cout<<"Enter Y : ";
	cin>>y;
	
	cout<<"Enter Z : ";
	cin>>z;
		w=x-y-z;
		
		cout<<w;
		
	}
};

main(){
	
	math o;
	o.s1(10,20);
	o.s2(10,20,30);
}
