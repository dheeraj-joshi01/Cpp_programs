//exception handling with throw outside try block

#include<iostream>
using namespace std;

void Xtest(int test)
{
	cout << "inside Xtest, test is : " << test << endl;
	
	if(test) throw test;
}


int main()
{
	cout << "start\n";
	
	try
	{
		cout << "inside try block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	
	catch(int n)
	{
		cout << "caught an exception -- > value is : " << n << endl;
	}
	
	cout << "end\n";
	
	return 0;
}
