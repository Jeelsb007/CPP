#include<iostream>
using namespace std;

class cafe{
	
	int id,rate,s_quan;
	string name,type,loc;
	static int e_year;
	
	public :
		
		cafe(){
			
			cout<<"_______________________________"<<endl;
			cout<<"Enter the id :";
			cin>>id;
			cout<<"Enter the name :";
			cin>>name;
			cout<<"Enter the type :";
			cin>>type;
			cout<<"Enter the staf quantity  :";
			cin>>s_quan;
			cout<<"Enter the city :";
			cin>>loc;
			cout<<"Enter the rating :";
			cin>>rate;
		}
		
		void output(){
			cout<<"the id :"<<id<<endl;
			cout<<"the name :"<<name<<endl;
			cout<<"the type :"<<type<<endl;
			cout<<"the staf quantity :"<<s_quan<<endl;
			cout<<"the city :"<<loc<<endl;
			cout<<"the rating :"<<rate<<endl;
			cout<<"the estabishled year :"<<e_year<<endl;
		}
		
		~cafe(){
			cout<<"\nThank you for visit!!!!\n";
		}
		
};

int cafe :: e_year = 2023;


main(){
	int n,i;
	cout<<"enter no. of hotel : ";
	cin>>n;
	cout<<"\n";
	
	for(i=1;i<=n;i++){
		cafe c;
		cout<<"______________________________________________"<<endl;
		c.output();
		cout<<"______________________________________________"<<endl;
	}
	
	
}
