//basic prog showing try and catch syntx

#include<iostream>
using namespace std;


int main()
{
	int n1, n2, result;
	
	cout << "Enter 2 numbers : \n";
	cin >> n1 >> n2;
	
	try{
		if(n2==0)			//in case of error
			throw n2;			//throw zero to catch()
		else
		{
			result = n1/n2;
			cout << "The result is : " << result;
		}
	
	}
	
	catch(int x)			//executes its body on error
	{
		cout << "can't divide by :" << x;
	}
	
	cout << "\nEnd of prog\n";

	return 0;
}
