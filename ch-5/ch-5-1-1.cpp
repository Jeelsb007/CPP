#include<iostream>
using namespace std;

class stud{
	int id;
	int age;
	string name;
	string course;
	string city;
	string college;
	
	public :
		
		void input(int id,int age,string name,string course,string city,string collage){
			this->id=id;
			this->age=age;
			this->name=name;
			this->course=course;
			this->city=city;
			this->college=college;
			output();
		}
		
		void output(){
			cout<<" ID :"<<id<<endl;
			cout<<" Age :"<<age<<endl;
			cout<<" Name :"<<name<<endl;
			cout<<" Course :"<<id<<endl;
			cout<<" City :"<<city<<endl;
			cout<<" College :"<<college<<endl;
		}
		
};

main(){
	int id,i,n=5;
	int age;
	string name;
	string course;
	string city;
	string college;
	for(i=1;i<=n;i++){
		cout<<"student "<<i<<"/5"<<endl;
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter age : ";
		cin>>age;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter course : ";
		cin>>course;
		cout<<"enter city : ";
		cin>>city;
		cout<<"enter college : ";
		cin>>college;
		stud s;
		s.input(id,age,name,course,city,college);
	}
}
