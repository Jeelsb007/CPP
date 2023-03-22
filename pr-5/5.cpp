#include<iostream>
using namespace std;

class num{
		protected :
		int n;
		public :
		num()
		{
			cout<<"Enter no: ";
			cin>>n;
		}
};

class square  : public num{
		public :
			
		void getsquare(){
			cout<<"the square:"<<n*n;
		}
};

class cube  : public num{
	public :
		void getcube()
		{
			cout<<"the cube:"<<n*n*n;
		}
};

int main()
{
	cube c;
	c.getcube();
	cout<<endl;
	square s;
	s.getsquare();
}
