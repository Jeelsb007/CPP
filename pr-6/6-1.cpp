#include<iostream>
using namespace std;
class message{
	string msg;
	public:
	 message(){
		cout<<"enter message: ";
		cin>>msg;
	}
	void print(){
		cout<<"the message is: "<<msg;
	}
	void print(string n){
		cout<<msg<<n<<endl;
			
	}	
	
};
main(){
	message M;
	M.print();
	M.print(" is from jeels");
}
