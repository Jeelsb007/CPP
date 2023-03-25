#include<iostream>
using namespace std;
class shape{
	public:
		float l,b,r;
		public:
			void setdata(){
				cout<<"enter radius of circle: ";
				cin>>r;
				cout<<"enter length of triangle: ";
				cin>>l;
				cout<<"enter base of triangle: ";
				cin>>b;
			}
			
};
class circle:public shape{
	public:
		virtual void area()=0;
	
};
class triangle:public circle{
	public:
		void area(){
			cout<<"The area of circle: "<<3.14*r*r<<endl;
			cout<<"The area of triangle: "<<0.5*l*b<<endl;
		}
};
main(){
	triangle T;
	T.setdata();
	T.area();
	
	
}
