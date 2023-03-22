#include<iostream>
using namespace std;

class animal{
		protected:
		int age;
		string name;
		public :
			
		void setanimal(){
			
			cout<<"Enter age: ";
			cin>>age;
			cout<<"Enter name: ";
			cin>>name;
			
		}
};

class zebra : public animal{
		protected:
		string place;
		public :
			void setze(){
			cout<<"Enter place:";
			cin>>place;
		}
		void getze(){
			cout<<"Name :"<<name<<endl;
			cout<<"Age  :"<<age<<endl;
			cout<<"Place:"<<place<<endl;
		}

	
};
class dolphin : public animal{
		protected:
		string col;
		public :
		void setdo(){
			cout<<"Enter colour:";
			cin>>col;
		}
		void getdo()
		{
			cout<< "Name:" <<name<<endl
			cout<< "Age :" <<age<<endl
			cout<< "colour:"<<col<<endl;
		}	
};

int main(){
	zebra z;
	
	z.setan();
	z.setze();
	z.getze();
	
	cout<<endl;
	
	dolphin d;
	d.setan();
	d.setdo();
	d.getdo();
}
