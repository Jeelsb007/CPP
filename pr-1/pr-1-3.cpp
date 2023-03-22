#include<iostream>
using namespace std;
main(){
	char str[20];
	int i;
	cout<<"enter name: ";
	cin>>str[i];
	
	for(i=0;str[i]!='0';i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]-=32;
		}
		else if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
		}
		
	}
	cout<<str;
}
