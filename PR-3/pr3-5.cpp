#include<iostream>
using namespace std;

class sum{
	
	private:
	int a,b;
	
	public :
		
		void input(){
			cout<<"enter value of a :";
			cin>>a;
			cout<<"enter value of b :";
			cin>>b;
		}
		
		void output(){
			cout<<"the sum of " <<a<< " and " <<b<< ":"<<a+b;
		}
};

main(){
	sum s;
	s.input();
	s.output();
}
