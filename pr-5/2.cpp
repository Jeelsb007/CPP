#include<iostream>
using namespace std;

class mother {
	
		public :
			
		void diplay()
		{
			cout<<"*mother*"<<endl;	
		}
		
};

class daugther:public mother {
	
		public :
			
		void diplay()
		{
			cout<<"*daughter*"<<endl;	
		}
		
};

int main()
{
	daugther d;
	d.daugther::diplay();
	d.mother::diplay();
}
