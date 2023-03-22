#include<iostream>
using namespace std;

class employees {
			int id;
			char name[20];
			char role[20];
			int age;
			int salary;
			int exp;
			char city[20];
			char c_n[20];
	
	public :
		
		void input(){
			cout<<"Enter id:";
			cin>>id;
			cout<<" Enter name:";
			cin>>name;
			cout<<" Enter role:";
			cin>>role;
			cout<<" Enter age:";
			cin>>age;
			cout<<" Enter salary:";
			cin>>salary;
			cout<<" Enter experience:";
			cin>>exp;
			cout<<" Enter city:";
			cin>>city;
			cout<<"Enter company name:";
			cin>>c_n;
		}
		
		void output(){
			cout<<"id :"<<id<<endl;
			cout<<"name :"<<name<<endl;
			cout<<"role :"<<role<<endl;
			cout<<"age :"<<age<<endl;
			cout<<"salary :"<<salary<<endl;
			cout<<"experince :"<<exp<<endl;
			cout<<"city :"<<city<<endl;
			cout<<"company name :"<<c_n<<endl;
		}
};

main(){
	
	employees e;
	
	cout<<"employee 1/5"<<endl;
	e.input();
	e.output();
	
	cout<<"employee 2/5"<<endl;
	e.input();
	e.output();
	
	cout<<"employee 3/5"<<endl;
	e.input();
	e.output();
	
	cout<<"employee 4/5"<<endl;
	e.input();
	e.output();
	
	cout<<"employee 5/5"<<endl;
	e.input();
	e.output();
	
}
