#include<iostream>
using namespace std;
class cricket{
	protected:
          int over;
		  public:
		  void Iover(){
		  	cout<<"enter over: ";
		  	cin>>over;
		  	
		  }	
};
class t20:public cricket{
	public:
	void getover(){
		
		cout<<"the  t20 over is :"<<over<<endl;
		
	}
	
};
class test:public cricket{
	public:
	void getover(){
		cout<<"the  test over is :"<<over<<endl;
	}
	
};
main(){
	t20 T;
	T.Iover();
	T.getover();
	test t1;
    t1.Iover();
    t1.getover();
}
