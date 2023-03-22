#include<iostream>
using namespace std;
void Xfun(int);
void Yfun(int);

main()
{
	int n;
	Xfun(n);
}

void Xfun(int n)
{
	cout<<"enter the value of n :";
	cin>>n;
	Yfun(n);
}

void func(int n)
{
	cout<<"number :"<<n;
}



