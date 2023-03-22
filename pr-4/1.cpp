#include<iostream>
using namespace std;
class employee{
	int id,experience,contact,salary;
	string name,role,address,email;
	public:
		
		void setdata(){ 
		
			cout<<"enter id:";
			cin>>id;
			cout<<"enter name:";
			cin>>name;
			cout<<"enter role:";
			cin>>role;
			cout<<"enter salary:";
			cin>>salary;
			cout<<"enter experience:";
			cin>>experience;
			cout<<"enter address:";
			cin>>address;
			cout<<"enter email:";
			cin>>email;
			cout<<"enter contact:";
			cin>>contact;
		
		}
		void getdata(){
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"role:"<<role<<endl;
			cout<<"salary:"<<salary<<endl;
			cout<<"experience:"<<experience<<endl;
			cout<<"address:"<<address<<endl;
			cout<<"email:"<<email<<endl;
			cout<<"contact:"<<contact<<endl;
			
		}
	
};
main(){
	
	int n=5,i;
	
	employee e[5];
	
	for(i=1;i<=n;i++){
		
		e[i].setdata();
		e[i].getdata();
		
	}
}
