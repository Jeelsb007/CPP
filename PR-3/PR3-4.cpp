#include<iostream>
using namespace std;

class Home {
	
	char r_name[20];
	int n_fur;
	char colour[20];
	int size;
	int n_door;

	
	public :
		void input(){
			cout<<" Enter room name:";
			cin>>r_name;
			cout<<"Enter number of furniture items:";
			cin>>n_fur;
			cout<<" Enter colour:";
			cin>>colour;
			cout<<" Enter room size:";
			cin>>size;
			cout<<" Enter number of doors:";
			cin>>n_door;	
			
		}
		void output(){
			
			cout<<"room name :"<<r_name<<endl;
			cout<<"no. of furnituers :"<<n_fur<<endl;
			cout<<"Colour :"<<colour<<endl;
			cout<<"room size:"<<size<<endl;
			cout<<"no. of doors  :"<<n_door<<endl;
			
		}
};

main(){
	Home h;
	int i,n;
	cout<<"enter room no. : ";
	cin>>n;

	for(i=1;i<=n;i++){
		
		cout<<"room "<<i<<"/"<<n<<endl;
		
		h.input();
		h.output();
		
	}
	
}
