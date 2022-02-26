//op overloading of binary operator
#include<iostream>
using namespace std;

class complex{
	int r, i;
	
	public:
	
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

	complex operator + (complex obj)		//overloading + operator
	{
		complex temp;
		temp.r = r + obj.r + obj2.r;
		temp.i = i + obj.i + obj2.i;
		
		return temp;
	}
	
	complex operator - (complex obj)		//overloading - operator
	{
		complex temp;
		temp.r = r - obj.r;
		temp.i = i - obj.i;
		
		return temp;
	}
	
	complex operator * (complex obj)		//overloading * operator
	{
		complex temp;
		temp.r = r * obj.r;
		temp.i = i * obj.i;
		
		return temp;
	}
	
	complex operator / (complex obj)		//overloading / operator
	{
		complex temp;
		temp.r = r / obj.r;
		temp.i = i / obj.i;
		
		return temp;
	}
	
	void display()
	{
		cout << "Real part: " << r << " complex part: " << i << endl;
	}
	
};	//end of class complex


int main()
{
	complex c1(5,6), c2(4,5);
	c1.display();
	c2.display();
	
	complex c3;
	
	c3 = c1 + c2;				//using the overloaded operator
	
	//alternate way to use operator
	//c3 = c1.operator +(c2);		//calling overloaded operator as function
	
	c3.display();

	c3 = c1 - c2 * c2;
	c3.display();
	
	c3 = c1 * c2 + c3;
	c3.display();
	
	c3 = c1 / c2;
	c3.display();
	
return 0;
}

