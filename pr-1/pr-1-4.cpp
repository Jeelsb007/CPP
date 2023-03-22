#include<iostream>
using namespace std;
main(){
	char x;
	cout<<"enter x: ";
	cin>>x;
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='U'||x=='u'){
    	printf("%c is vowel.",x);    	
	}
	else{
		printf("%c is consonant.",x);
	}
}
