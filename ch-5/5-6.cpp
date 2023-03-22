#include<iostream>
using namespace std;

class time{
	int h,m,s;
	public:
		void input(){
			cout<<"enter the time in hours:";
			cin>>h;
			cout<<"enter the time in minute:";
			cin>>m;
			cout<<"enter the time in second:";
			cin>>s;
	
		}
		void output(){
			cout<<"the time is:-"<<h<<":"<<m<<":"<<s<<endl;
		}
		
		friend class time2;
	
};
class time2{
		int h1,m1,s1,th,tm,ts;
	public:
		void setdata(){
			cout<<"enter the time in hours:";
			cin>>h1;
			cout<<"enter the time in minute:";
			cin>>m1;
			cout<<"enter the time in second:";
			cin>>s1;
	
		}
		void getdata(){
			cout<<"the time is:-"<<h1<<":"<<m1<<":"<<s1<<endl;
		}
		void total(time s){
			
			th=s.h+h1;
			tm=s.m+m1;
			ts=s.s+s1;
			if(ts>=60){
				tm++;
				ts-=60;
			}
			if(tm>=60){
				th++;
				tm-=60;
			}
			cout<<"the total time is:-"<<th<<":"<<tm<<":"<<ts<<endl;
		}
	
};
main(){
	time s;
	s.input();
	s.output();
	time2 t1;
	t1.setdata();
	t1.getdata();
	t1.total(s);
	
}
