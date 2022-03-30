#include<iostream>


using namespace std;


template <typename T1, typename T2>		//take 2 types of data

void multiply(T1 n1, T2 n2)
{
	cout << "The product of no.s : " << n1*n2 << endl;
}


int main() {
	
	int A = 10;
	float B = 20.5, C;
	long a = 11;
	float b = 22.77, c;
	
	multiply(A,B);
	multiply(a,b);


return 0;



}
