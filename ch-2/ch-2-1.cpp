#include<iostream>
using namespace std;

inline void factorial(int);

main(){
	int n,fact;
	cout<<"number :";
	cin>>n;
	int i;
	
	for(i=1;i<=n;i++){
		cout<<i;
		fact = fact*i;
	}
	
	factorial(fact);
	
}

inline void factorial(int fact){
	cout<<"factorial is : "<<fact<<endl;
}


