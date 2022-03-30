//function overloading using templates


#include<iostream>

using namespace std;


template <class T1>

void sum(T1 n1, T1 n2, T1 n3)			//function taking same type of args
{
	cout << "func with only T1 type args called" << endl;
	cout << "Sum : " << n1+n2+n3 << endl;
}

template <class T1, class T2>

void sum(T1 n1, T2 n2, T1 n3)			//function taking 2 different types of args
{
	cout << "func with T1 & T2 type args called" << endl;
	cout << "Sum : " << n1+n2+n3 << endl;
}


void sum(int n1, int n2)			//func taking 2 integers as args
{
	cout << "func with integer type args called" << endl;
	cout << "Sum : " << n1+n2 << endl;
}

int main() {
	
	int a, b;
	
	float x, y, z;

	cout << "Enter two integers" << endl;
	cin >> a >> b;
	
	cout << "Enter three doubles" << endl;
	cin  >> x >> y >> z;
	
	sum(x,y,z);
	sum(a,b);
	sum(a,x,b);

return 0;



}
