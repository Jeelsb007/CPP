#include<iostream>
using namespace std;

class A{
	int a,b;
	public:
	void process(int a,int b){
 		
	try{
		if(b==0)
		{
			throw b;	
		}
		else {
			cout<<"the division is :"<<a/b<< endl;
		}
	}
	
	catch(int n)
	{
		cout << "it can not be divided by 0... "<< endl;
	}
}

	
};

int main()
{
	int a,b;
	
	cout << "Enter A : ";
	cin >> a;
	cout << "Enter B : ";
	cin >> b;
	A a1;
	a1.process(a,b);

}
