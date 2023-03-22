#include<iostream>
using namespace std;

main(){
	int n;
	cout<<"number :";
	cin>>n;
	int a[n],b[n],i;
	
	for(i=0;i<n;i++){
		
		cout<<"a["<< i <<"] :";
		cin>>a[i];
		
	}
	for(i=0;i<n;i++){
		
		b[i] = a[i]*a[i]*a[i]; 
	}
	for(i=0;i<n;i++){
		
		cout<< "b["<< i <<"] :"<<b[i]<<endl;
	}
	
}
