#include<iostream>
using namespace std;
class bank{
	public:
		int ac_no,ac_b;
		string ac_name,ac_type,a_bra;
		public:
			void setd(){
				cout<<"enter account name: ";
				cin>>ac_name;
				cout<<"enter account type: ";
				cin>>ac_type;
				cout<<"enter account branch: ";
				cin>>a_bra;
				cout<<"enter account number: ";
				cin>>ac_no;
				cout<<"enter account balance: ";
				cin>>ac_b;
			}
			void getd(){
				cout<<"the account name: "<<ac_name<<endl;
				cout<<"the account type: "<<ac_type<<endl;
				cout<<"the account branch: "<<a_bra<<endl;
				cout<<"the account number: "<<ac_no<<endl;
				cout<<"the account balance: "<<ac_b<<endl;
			}
	
}; 
main(){
	int n,i;
	cout<<"enter numbers of account: ";
	cin>>n;
	bank B[i];
	for(i=1;i<n;i++){
		B[i].setd();
		B[i].getd();
	}
}
