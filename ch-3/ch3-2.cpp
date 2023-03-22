#include<iostream>
using namespace std;

class car{
			int id;
			char c_n[20];
			char colour[20];
			int model;
			int rls_year;
		
	public :
		
		void input(){
			
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter company name:";
			cin>>c_n;
			cout<<"Enter colour:";
			cin>>colour;
			cout<<"Enter Model:";
			cin>>model;
			cout<<"Enter Released Year:";
			cin>>rls_year;
			
		}
		
		void output(){
			
			cout<<"id:"<<id<<endl;
			cout<<"Company name:"<<c_n<<endl;
			cout<<"Color:"<<colour<<endl;
			cout<<"Model no:"<<model<<endl;
			cout<<"Released Year:"<<rls_year<<endl;
			
		}
		
};

main(){
	
	car C;
	
	cout<<"Car number :1/4"<<endl;
	C.input();
	C.output();
	
	cout<<"Car number :2/4"<<endl;
	C.input();
	C.output();
	
	cout<<"Car number :3/4"<<endl;
	C.input();
	C.output();
	
	cout<<"Car number :1/4"<<endl;
	C.input();
	C.output();
	
}
