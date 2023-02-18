#include<iostream>
using namespace std;

class hotel{
	
	static int id;
	static char name[50];
	static int year;
	
	public:
		
		void setter();
		void getter();
		
};

int hotel :: id = 10;
char hotel :: name[] ='ner';
int hotel :: year = 2001;

void hotel::setter(){
	
	cout<<"Enter Hotel Name: ";
	cin>>name;
	
	cout<<"Enter Hotel Id: ";
	cin>>id;
	
	cout<<"Enter Hotel Establish year: ";
	cin>>year;
}

void hotel::getter(){
	
	cout<<"Hotel Name Is = "<<name<<endl;
	cout<<"Hotel Id Is = "<<id<<endl;
	cout<<"Hotel Establish Year Is = "<<year<<endl;
}

main(){
	
	int i,n;
	
	cout<<"Enter Number Of Hotels:";
	cin>>n;
	
	hotel o;
	
	for(i=0; i<n; i++){
		
		o[i].setter();
		o[i].getter();
	}
	
	
}
