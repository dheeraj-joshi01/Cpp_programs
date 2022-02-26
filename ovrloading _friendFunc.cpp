//op overloading using friend function
#include<iostream>
using namespace std;

class complex{
	
	public:
	int r, i;
	
	//default constructor
	complex()
	{
	r=0;
	i=0;
	}
	
	//param constructor
	complex(int x, int y)
	{
	r=x;
	i=y;
	}

	friend complex operator + (complex obj1, complex obj2);
		
	void display()
	{
		cout << "Real part: " << r << " complex part: " << i << endl;
	}
};	//end of class complex

complex operator + (complex obj1, complex obj2)
	{
		complex temp;
		temp.r = obj1.r + obj2.r;
		temp.i = obj1.i + obj2.i;
		
		return temp;
	}


int main()
{
	complex c1(5,6), c2(4,5);
	
	complex c3 = c1 + c2;
	
	c3.display();
	
	
return 0;
}

