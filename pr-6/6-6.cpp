#include<iostream>
using namespace std;

class A {
	private : 
	 	int a;
	public :
		A(int a)
		{
			this->a=a;
		}
		A()
		{
			
		}
		
		A operator++()
		{
			A tem;
			tem.a= ++a;
			return tem;
		}
		A operator--()
		{
			A tem;
			tem.a= --a;
			return tem;
		}
		void get()
		{
			cout << a << endl;
		}
	
	
};

int main()
{
	int a;
	cout<<"enter a:";
	cin>>a;
	A a1(a);
	A a2;
	A a3; 
	
	a2= ++a1;                       
	a3= --a1;
	
	a2.get();
	a3.get();
	
	
}
