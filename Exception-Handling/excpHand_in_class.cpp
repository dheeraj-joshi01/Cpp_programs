//abstract class

#include<iostream>
using namespace std;

class Test
{
	int x;
	
	public:
	void read()
	{
		cout <<  "enter number\n";
		cin >> x;
	}
	
	class even{};		//empty class
	class odd{};		//empty class
	
	
	void check()
	{
		if (x%2 == 0)
		{
			throw even();		//raise excpt
		}
		
		else
		{
			throw odd();		//raise excpt
		}
	}
};		//end of class

int main()
{
	Test t1;
	t1.read();
	
	
	try
	{
		t1.check();	
	}
	
	catch(Test :: even)			//excpt handler block
	{
		cout << "Number is even" << endl;
	}
	
	catch(Test :: odd)			//excpt handler block
	{
		cout << "Number is odd" << endl;
	}
	cout << "\nEnd of prog\n";

	return 0;
}
