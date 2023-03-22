#include<iostream>
using namespace std;

class sum {
	
	int f1,f2,i1,i2,X,Y;
	
	public :
		
		void input(int F1,int F2,int I1,int I2){
			f1=F1;
			f2=F2;
			i1=I1;
			i2=I2;
	}
	void output(){
		int X,Y;
		
			if(i1>=12){
			i1=i1-12;
			f1=f1+1;
			}
			
			if(i2>=12){
			i2=i2-12;
			f2=f2+1;
		}
		
			X = f1+f2;
			Y = i1+i2;
			
			if(Y>=12){	
			Y=Y-12;
			X=X+1;
			
			cout<<"The total sum is "<<X<<"feet and "<<Y<<"inch"<<endl;
			
		}
		
	}
	
};

main(){
	
	int F1,F2,I1,I2;
	
	sum s;
	
	cout<<"enter 1st feet:"<<endl;
	cin>>F1;
	cout<<"enter 1st inch:"<<endl;;
	cin>>I1;
	cout<<"enter 2nd feet:"<<endl;;
	cin>>F2;
	cout<<"enter 2nd inch:"<<endl;;
	cin>>I2;
	
	s.input(F1,F2,I1,I2);
	s.output();
}
