#include<iostream>
using namespace std;
class A{
	protected:
	int a,b,m,n;
	public:
		void input(){	
		cout<<"enter a: ";
		cin>>a;
		cout<<"enter b: ";
		cin>>b;
	}
	void input(int x,int y ){
		m=x;
		n=y;
	}
	void output(){
		
		cout<<"the sum of a and b is:"<<a+b<<endl;
		cout<<"the sum of x and y is:"<<m+n<<endl;
		cout<<"the subtraction of a and b is:"<<a-b<<endl;
		cout<<"the subtraction of x and y is:"<<m-n<<endl;
	}
	
};
class B: public A{
	    public:
	    void getD(){
   		cout<<"the multiplication of a and b is:"<<a*b<<endl;
		cout<<"the multiplication of x and y is:"<<m*n<<endl;
		cout<<"the division of a and b is:"<<a/b<<endl;
		cout<<"the division of x and y is:"<<m/n<<endl;
		}
			
	
};
main(){
	int a,b,x,y,n1,m,n;
	cout<<"enter x: ";
	cin>>x;
	cout<<"enter y: ";
	cin>>y;
    cout<<"1-div\n2-sub\n3-mul\n4-add\n5-exit";
    switch(n1){
    	case 1:
    	cout<<"the division of a and b is:"<<a/b<<endl;
		cout<<"the division of x and y is:"<<m/n<<endl;
		break;
		case 2:
		cout<<"the subtraction of a and b is:"<<a-b<<endl;
		cout<<"the subtraction of x and y is:"<<m-n<<endl;
		break;
		case 3:
		cout<<"the multiplication of a and b is:"<<a*b<<endl;
		cout<<"the multiplication of x and y is:"<<m*n<<endl;
		break;
		case 4:
		cout<<"the sum of a and b is:"<<a+b<<endl;
		cout<<"the sum of x and y is:"<<m+n<<endl;
		break;
		case 5:
		cout<<"thank you>>>>";
		break;	
		A a1;
		B b1;
		a1.input();
    	a1.input(x,y);
    	b1.getD();
		a1.output();    	
    	
	}
}
