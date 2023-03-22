
#include<iostream>
using namespace std;
main(){
	char str[20];
	cout<<"enter string:";
	cin>>str;
	int i;
	for(i=0;str[i]!=0;i++){
		if(str[i]>='A' && str[i]<'Z' || str[i]>='a' && str[i]<'z'){
		cout<<"it is not numeric.";
		}
		else{
			cout<<"it is numeric.";
		}
	}
	
}
