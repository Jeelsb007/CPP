#include<iostream>
using namespace std;
class diamond{
	int id,s_q,rev,rdiam,exdiam;
	string name,ceo;
	  public:
	  	diamond(string name,int id,int s_q,int rev,int rdiam,int exdiam,string ceo){
	  		this->name=name;
	  		this->id=id;
	  		this->s_q=s_q;
	  		this->rev=rev;
	  		this->rdiam=rdiam;
	  		this->exdiam=exdiam;
	  		this->ceo=ceo;
		  }
		  void output(){
		  	cout<<"the name :"<<name<<endl;
		  	cout<<"the id :"<<id<<endl;
		  	cout<<"the staff quantity:"<<s_q<<endl;
		  	cout<<"the revenue:"<<rev<<endl;
		  	cout<<"the number of raw diamond :"<<rdiam<<endl;
		  	cout<<"the number of diamond exported :"<<exdiam<<endl;
		  	cout<<"the name of ceo:"<<ceo<<endl;
		  }
		  ~diamond(){
		  	cout<<"\nprogram is successfull.";
		  }
		  
		  
};
main(){
	int n,i;
	cout<<"enter the number of diamond company:";
	cin>>n;
	int id,s_q,rev,rdiam,exdiam;
	string name,ceo;
	for(i=1;i<n;i++){
	
	cout<<"enter the name: ";
	cin>>name;
	cout<<"enter the id: ";
	cin>>id;
	cout<<"enter the staff quantity: ";
	cin>>s_q;
	cout<<"enter the revenue: ";
	cin>>rev;
	cout<<"enter the raw diamonds: ";
	cin>>rdiam;
	cout<<"enter the number of exported diamonds: ";
	cin>>exdiam;
	cout<<"enter the ceo name: ";
	cin>>ceo;
	diamond d(name,id,s_q,rev,rdiam,exdiam,ceo);
	d.output();
}

}
