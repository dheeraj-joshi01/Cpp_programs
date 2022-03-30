//performing inheritence using exception handling   

#include<iostream>
#include<exception>			//header file for exception handling
using namespace std;

class base{};	//base class

class derive : public base {};		//derived class


int main()
{
	derive obj;
	try			//try block starts
	{
		throw base();
		
	}	//end of try
	
	catch(derive d)			//catch block
	{
		cout << "derive obj caught\n";
	}
	
	
	catch(base b)			//catch block		-- catch for base will always come in last	--because it has the highest preference
	{
		cout << "base obj caught\n";
	}	//end catch
	
	
		
	return 0;
}
