//rethrowing try and catch syntx

#include<iostream>
using namespace std;

void demo() throw(int, double)
{
	int a=2;
	
	if(a == 1)
		throw a;			//throwing int excpt
		
	else if(a == 2)
		throw 'A';			//throwing char excpt
		
	else if(a == 3)
		throw 4.5;			//throwing float excpt
}


int main()
{
	int a=1;
	
	try{
		demo();
				
	}
	catch(int y)
		{
			cout << "exception found " << y<< endl;
		}
	
	cout << "end of prog" << endl;
	
	return 0;
}
