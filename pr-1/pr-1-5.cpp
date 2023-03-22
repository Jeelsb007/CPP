#include<iostream>
using namespace std;
main(){
	int n;
	cout<<"enter size of an array:";
	cin>>n;
	int a[n],i,j;
	for(i=0;i<n;i++){
		cout<<"enter a[%d]:"<<i;
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=1;j<n/2;j++)
		{
			if(a[j]*a[j]==a[i])
			{
				cout<<a[j];
			}
		}
    }
	  
}
