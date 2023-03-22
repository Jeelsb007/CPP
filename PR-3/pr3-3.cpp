#include<iostream>
using namespace std;

class time {
	
	int H,M,S;
	
	public :
		
		void input(){
			cout<<"seconds:";
			cin>>S;
		}
		void output(){
			for(i=0;i<S;i++){
			
				if(S>=60){
							M=M+1;
							S-=60;
		}
				if(M>=60){
							H++;
							M-=60;
					
				}
			}
				cout<<"Time is"<<H<<":"<<M<<":"<<S;
		}
};

main(){
	time t;
	t.input();
	t.output();
}
