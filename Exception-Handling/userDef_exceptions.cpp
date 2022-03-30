//making user defined exceptions

#include<iostream>
#include<exception>			//header file for exception handling
using namespace std;

class myException : public exception			//defination of custom exception	----- inherited exception.h
{
	public:
		const char* what() const throw()
		{
			return "Attempted to divide by zero.!!\n";
		}
};	//end of the clsass



int main()
{
	try			//try block starts
	{
		int x, y;
		
		cout << "Enter the 2 no's.: \n";
		cin >> x >> y;
		
		if(y == 0)
		{
			myException z;
			throw z;
		}
		
		else
		{
			cout << "x/y = " << x/y << endl;
		}
		
	}	//end of try
	
	catch(exception &e)			//catch block
	{
		cout << e.what();
	}	//end catch
	
		
	return 0;
}
