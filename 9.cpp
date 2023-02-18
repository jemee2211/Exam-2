#include<iostream>

using namespace std;

class a{
	
	public:
	
	int id;
	char name[30];
	char role[40];
	int salary;
	int exp;
	char cname[50];
	char add[50];
	char mail[40];
	char con[10];
	
	void setter(){
		
		cout<<"Employee Id";
		cin>>id;
		
		cout<<"Employee Name";
		cin>>name;
		
		cout<<"Employee Role";
		cin>>role;
	}
	
};

class b:public a{
	public:
		
	void setData(){
		
		cout<<"Employee Salary";
		cin>>salary;
		
		cout<<"Employee Experience";
		cin>>exp;
	}
	
};

class c: public b{
	
	public:
		
	void Setter(){
		
		
		cout<<"Employee Company Name";
		cin>>cname;
		
		cout<<"Employee Address";
		cin>>add;
	}
	
	void Getter(){
		
		cout<<"id = "<<id<<endl;
		cout<<"role = "<<role<<endl;
		cout<<"salary = "<<salary<<endl;
		
	}
};

class D:public c{
	
	public:
		
	void setdata(){
		
		cout<<"Employee E-mail";
		cin>>mail;
		
		cout<<"Employee Contact";
		cin>>con;
	}
	
	void getter(){
		
		cout<<"id = "<<id<<endl;
		cout<<"name = "<<name<<endl;
		cout<<"role = "<<role<<endl;
		cout<<"salary = "<<salary<<endl;
		cout<<"Experience = "<<exp<<endl;
		cout<<"Company Name = "<<cname<<endl;
		cout<<"E-mail = "<<mail<<endl;
		cout<<"contact = "<<con<<endl;
		
	}
};

main(){
	
   D o;
   
   o.setter();
   o.setData();
   o.setdata();
   o.Setter();
   o.Getter();
   o.getter();
 	
}













