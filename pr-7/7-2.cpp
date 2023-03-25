#include<iostream>
using namespace std;
class A{
	public://access modifier
		void output(){
			cout<<"your message is coming....";
		}
		virtual void messaging()=0;
	
};
class B: public A //visibility mode
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
