//use of template in class

#include<iostream>

using namespace std;

template <class T1, class T2>		//take 2 different class type of data

class sample
{
	T1 a; T2 b; 
	
	public:
	void getdata()
	{
		cout << "Enter A & B" << endl;
		cin >> a >> b;
	}
	
	void display()
	{
		cout << "the values : " << endl;
		cout << "a : " << a << " b : " << b << endl;
	}

};	//end of the class



int main() 
{
	//defining objects
	sample<int, int> s1;
	sample<int, double> s2;
	sample<double, double> s3;
	
	
	//performing operations
	
	cout << "\ninteger data : " << endl;
	
	s1.getdata();
	s1.display();
	
	cout << "\nInt and double data : " << endl;
	
	s2.getdata();
	s2.display();
	
	cout << "\ndouble and double data : " << endl;
	
	s3.getdata();
	s3.display();
	
	return 0;
}
