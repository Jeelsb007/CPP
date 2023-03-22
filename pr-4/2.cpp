#include<iostream>
using namespace std;

class A{
		public:
		int id,std;
		string name;
		public:
			
			void input(){
				
			cout<<"enter id:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter std:";
			cin>>std;
			
	}
	
};

class B{
		int id,std;
		string name;
		public:
			
			void output(A a){
				
			a.input();
				
			cout<<"id:"<<a.id<<endl;
			cout<<"name:"<<a.name<<endl;
			cout<<"std:"<<a.std<<endl;
		}
		
};
main(){
	
	A a;
	B b;
	b.output(a);
	
	
}
