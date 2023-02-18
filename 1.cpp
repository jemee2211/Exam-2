#include<iostream>
using namespace std;

class student{
	
	private:
		
		int id;
		char name[40];
		int age;
		char course[50];
		
		public:
			
			void setter();
			void getter();
	
	
};

void student::setter(){
	
	cout<<"Enter Student Name: ";
	cin>>name;
	
	cout<<"Enter Student Id: ";
	cin>>id;

    cout<<"Enter Student Age: ";
	cin>>age;
	
	cout<<"Enter Student Course: ";
	cin>>course;


}

void student::getter(){
	
	cout<<"Student Name = "<<name<<endl;
	cout<<"Student Id = "<<id<<endl;
	cout<<"Student Age = "<<age<<endl;
	cout<<"Student Course = "<<course<<endl;
	
}

main(){
	int i;
	student o[4];
	
	for(i=0; i<5; i++){
	
	o[i].setter();
	o[i].getter();
}
}
