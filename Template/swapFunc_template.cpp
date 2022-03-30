#include<iostream>

using namespace std;

template <typename T>		//take 1 type of data

//swap 2 numbers of same datatypes
void s_swap(T &n1, T &n2)
{	
	T temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}



int main() {
	
	string a = "learning", b = "cpp";
	//float a = 12.34, b = 34.5086;
	//int a=10, b=20;
	
	cout << "numbers before swapping : " << a << " " << b << endl;
	s_swap(a,b);
	cout << "numbers after swapping : " << a << " " << b << endl;


	return 0;
}
