#include<iostream>
using namespace std;
class A{
	public:
		virtual void cricket(){
			cout<<"india won odi wc in 2011...";
		}
	
};
class B : public A{
	public:
		void cricket(){
			cout<<"india won t20 wc in 2007...";
		}
	
};
main(){
	B b;
	b.cricket();
	b.cricket();	
	
}
