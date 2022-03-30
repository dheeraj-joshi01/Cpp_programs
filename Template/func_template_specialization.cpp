//func template specialization to swap the values of different datatypes 

#include<iostream>

using namespace std;

template <class X>		//take 1 class type of data

//swap 2 numbers of same datatypes
void s_swap(X &a, X &b)
{	
	X temp;
	temp = a;
	a = b;
	b = temp;
	
	cout << "inside template s_swap().\n";
}

//overrides the generic version of s_swap() for int
void s_swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	
	cout << "inside template specialization func\n";
}



int main() {
	
	int i = 10, j = 20;
	double x = 10.34, y = 23.3;
	char a = 'p', b = 'q';
	
	cout << "original i, j : " << i << ' ' << j << endl;
	cout << "original x, y : " << x << ' ' << y << endl;
	cout << "original a, b : " << a << ' ' << b << endl;
	
	s_swap(i, j);
	s_swap(x, y);
	s_swap(a, b);
	
	cout << "swapped i, j : " << i << ' ' << j << endl;
	cout << "swapped x, y : " << x << ' ' << y << endl;
	cout << "swapped a, b : " << a << ' ' << b << endl;
	
	
	return 0;
}
