#include<iostream>
using namespace std;
class A{
	public:
		void output(){
			cout<<"your message is coming....";
		}
		virtual void messaging()=0;
	
};
class B: public A
{
	public:
		void messaging(){
			cout<<"delay in your messege....";
		}
	
};
main(){
	B b;
	b.output();
	b.messaging();
	
	
	
}
