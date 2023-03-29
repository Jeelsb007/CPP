#include<iostream>
using namespace std;
main(){
	int x,f=1,i;
	cout<<"enter X: ";
	cin>>x;
	for(i=1;i<=x;i++){
		f=f*i;
	}
	cout<<"the factorial of X: "<<f;
}
