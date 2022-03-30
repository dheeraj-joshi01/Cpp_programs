//use of static variable inside function template

#include<iostream>

using namespace std;


template <typename T1>

void func(const T1 &x)
{
	static int i = 10;		//static var declaration
	
	cout << "static is : " << ++i << endl;
}

int main() {
	
	func<int>(1);
	func<int>(2);
	func<double>(10.1);

	

return 0;



}
