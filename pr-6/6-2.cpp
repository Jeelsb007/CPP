#include<iostream>
using namespace std;
class A{
	public:
		void print(){
			cout<<"welcome"<<endl;
		}
		void print(int a){
			cout<<a<<endl;
		}
		void print(int a,int b){
			cout<<a<<" "<<b<<endl;
		}
		void print(int a,int b,int c){
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
	
};
int main(){
	A a;
	a.print();
	a.print(0);
	a.print(1,2);
	a.print(3,4,5);
}
