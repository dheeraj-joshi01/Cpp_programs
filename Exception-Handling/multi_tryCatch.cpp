//basic prog showing try and catch syntx

#include<iostream>
using namespace std;


int main()
{
	int n1, n2, result;
	
	cout << "Enter 2 numbers : \n";
	cin >> n1 >> n2;
	
	try{
		if(n2 != n1)
		{
			float div = (float)n1/n2;
			
			if(div < 0)
				throw 'e';
			
			cout << "n1/n2 = " << div << endl;
			
		}
		
		else
			throw n2;
	}
	
	catch(int e)			//executes its body on error
	{
		cout << "exception: division by zero" << endl;
	}
	
	catch(char st)			//executes its body on error
	{
		cout << "exception: division is less than 1" << endl;
	}
	
	catch(...)			//default condition
	{
		cout << "exception: unknown" << endl;
	}
	
	cout << "\nEnd of prog\n";

	return 0;
}
