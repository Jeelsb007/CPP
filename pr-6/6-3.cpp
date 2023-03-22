#include<iostream>
using namespace std;
class X{
	public:
		void getdata(){
	          cout<<"welcome"<<endl;
	}
};
class Y : public X
{
	public:
		void getdata(){
			cout<<"welcome once again"<<endl;
		}

};
int main(){
	Y y;
	y.getdata();
}
