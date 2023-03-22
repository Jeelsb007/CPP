#include<iostream>
using namespace std;

class A{
	public :
	float c;
	public :
		
			void cel(){
			cout<<"Enter celsius : ";
			cin>>c;
		}
		
};

class B : public A{
	public :
	float f;
	public :
		void fahr(){
			f=(c*9/5)+32;
			cout<<"Fahrenheit is : "<<f<<endl;	
		}
};
class C : public B
{
	public :
	float k;
	public :
		void kelv(){
			k=(f*5/9)+459.67;
			cout<<"Kelvin is : "<<k<<endl;
		}	
};

main(){
	C s;
	s.cel();
	s.fahr();
	s.kelv();
}
