#include<iostream>
using namespace std;

class shape{
		protected :
			
		int  l,h;
		public :
			
		shape()
		{
			cout<<"Enter width:";
			cin>>l;
			cout<<"Enter height :";
			cin>>h;
		}
};

class triangle : public shape {
		public :
			void trianglearea()	{
				
				cout << "Triangle area : " << (l * h) / 2 << endl;
			
		}
				
};
class Rectangle : public shape {
		public :
			
		void Rectanglearea(){
		
			cout<<"Rectangle area : "<<l*h<< endl;
			
		}	
};

int main()
{
	Rectangle r;
	r.Rectanglearea();
	triangle t;
	t.trianglearea();
}
