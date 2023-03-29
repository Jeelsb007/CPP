#include<iostream>
using namespace std;
class odi{
	protected:
          int over;
		  public:
		  void Inover(){
		  	cout<<"enter over: ";
		  	cin>>over;
		  	
		  }	
};
class t20:public odi{
		public:
		void getover(){
		
		cout<<"the  t20 over is :"<<over<<endl;
		
	}
	
};
class test:public odi{
	public:
	void getover(){
		cout<<"the  test over is :"<<over<<endl;
	}
	
};
main(){
	t20 T;
	T.Inover();
	T.getover();
	test t1;
    t1.Inover();
    t1.getover();
}
