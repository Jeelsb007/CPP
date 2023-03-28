#include <iostream>
using namespace std;

class Garage{
	public:

		  	Garage() 
			{
		    	try 
				{

		    	}
		 		catch (string e) 
				{
		    	  	throw e ;
		    	}
		  	}

};

class Motor : public Garage{

	string A = "Your car's battery is down.";

		public:
			  	Motor() 
			  	{
					throw  A ;
			    	Garage();
			  	}
};


int main() 
{
	try
	{
  		Motor a;
	} 

	catch (string e)
	{
    	cout << "Your Error is Detected " << endl << endl << e << endl;
	}
}

