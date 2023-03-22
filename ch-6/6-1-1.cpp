#include<iostream>
using namespace std;

class  A{
	public :
	int a,b,c,d;
};
class B: public A{
	public :
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
			cout<<"Enter c : ";
			cin>>c;
		}
		void output(){
			cout<<"cube of a : "<<a*a*a<<endl;
			cout<<"cube of b : "<<b*b*b<<endl;
			cout<<"cube of c : "<<c*c*c<<endl;
			d = (a*a*a)+(b*b*b)+(c*c*c);
			cout<<"The sum of cubes is : "<<d<<endl;
		}
		
};
main(){
	B s;
	s.input();
	s.output();
}
