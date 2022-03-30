//exception handling without throw

#include<iostream>
#include<exception>			//header file for exception handling
using namespace std;

int main()
{
	try
	{
		int* myarray = new int[1000000000000000000];		//bad allocation error
		//float a = 7/0; 
		
		//no need to throw seperately
	}
		
	catch(exception &e)
	{
		cout << "std exception : " << e.what() << endl;
	}
	
	return 0;
}
