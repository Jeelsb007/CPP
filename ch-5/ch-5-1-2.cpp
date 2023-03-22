#include<iostream>
using namespace std;

class cus{
	int id;
	int age;
	string name;
	string com;
	string city;
	int mob_no;
	int sim_va;
	public :
		void input(int id,int age,string name,string com,string city,int mob_no,int sim_va){
			this->id=id;
			this->age=age;
			this->name=name;
			this->com=com;
			this->city=city;
			this->mob_no=mob_no;
			this->sim_va=sim_va;
			output();
		}
		
		void output(){
			cout<<"ID:"<<id;
			cout<<"Age:"<<age;
			cout<<"Name:"<<name;
			cout<<"company:"<<com;
			cout<<"City :"<<city;
			cout<<"moblie no.:"<<mob_no;
			cout<<"sim validity:"<<sim_va<<endl;
			
		}
		
};

main(){
	int id,i,n=5;
	int age;
	string name;
	string com;
	string city;
	int mob_no;
	int sim_va;
	for(i=1;i<=n;i++){
		cout<<"student"<<i<<"/5"<<endl;
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter age :";
		cin>>age;
		cout<<"enter name :";
		cin>>name;
		cout<<"enter company :";
		cin>>com;
		cout<<"enter city :";
		cin>>city;
		cout<<"enter moblie no.:";
		cin>>mob_no;
		cout<<"enter sim validity:";
		cin>>sim_va;
		cus s;
		s.input(id,age,name,com,city,mob_no,sim_va);
	}
}
