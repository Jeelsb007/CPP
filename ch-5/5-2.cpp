#include<iostream>
using namespace std;
class hotel{
	int id,rate,scon,rcon;
	string name,type,loc;
	static int ey;
	public :
		void input(){
			cout<<"enter the id :";
			cin>>id;
			cout<<"enter the name:";
			cin>>name;
			cout<<"enter the type :";
			cin>>type;
			cout<<"enter the staff quantity :";
			cin>>scon;
			cout<<"enter the room quantity :";
			cin>>rcon;
			cout<<"enter the city :";
			cin>>loc;
			cout<<"enter the rating:";
			cin>>rate;
			
			
        }
        void output(){
        	cout<<"the id :"<<id<<endl;
        	cout<<"the name :"<<name<<endl;
        	cout<<"the type :"<<type<<endl;
        	cout<<"the staff quantity :"<<scon<<endl;
        	cout<<"the roon quantity :"<<rcon<<endl;
        	cout<<"the city :"<<loc<<endl;
        	cout<<"the established year :"<<ey<<endl;
        	
		}
};
int hotel :: ey=2022;
main(){
	int n,i;
	cout<<"enter no. of hotel :";
	cin>>n;
	cout<<"\n";
	hotel s[n];
	for(i=0;i<n;i++){
		s[i].input();
		cout<<"_________________"<<endl;
		s[i].output();
		cout<<"_________________"<<endl;
	}
}
