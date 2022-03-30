//performing exception handling in constructor and desctructor   

#include<iostream>
#include<exception>			//header file for exception handling
using namespace std;

class divide{
	private:
		int *x, *y;
		
	public:
	divide()
	{
		x = new int();
		y = new int();
		
		cout << "Enter two no's.\n";
		
		cin >> *x >> *y;
		
		try
		{
			if(*y == 0)
			{
				throw *x;
			}
		}
		
		catch(int)
		{
			cout << "second number cannot be zero\n";
			throw;
		}
	}
	
	~divide()
	{
		try
		{
			delete x;
			delete y;
		}
		
		catch(...)
		{
			cout << "error while deallocating memory\n";
		}
	}
	
	float division()
	{
		return (float)*x / *y;
	}

};		//end of the class




int main()
{
	try
	{
		divide d1;
		float res = d1.division();
		
		cout << "result of division is : " << res << endl;
		
	}
	
	catch(...)
	{
		cout << "unknown exception.........!!!!!!!!!!!!!!!" << endl;
	}
	
		
	return 0;
}
