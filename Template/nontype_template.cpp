#include<iostream>

using namespace std;

template <class T, int N>		//take 1 class type and 1 int type of data

class mySeq
{
	T memblock [N]; 
	
	public:
	void setMember(int x, T value);
		
	T getMember(int x);
	
};	//end of the class

template <class T, int N>
void mySeq <T, N> :: setMember(int x, T value)
{
	memblock[x] = value;
}

template <class T, int N>

T mySeq <T, N> :: getMember(int x)
{
	return memblock[x];
}


int main() 
{
	mySeq<int, 5> myints;
	mySeq<double, 5> myfloats;
	
	myints.setMember(0, 100);
	myfloats.setMember(3, 3.14);
	
	cout << myints.getMember(0) << endl;
	cout << myfloats.getMember(3) << endl;
	
	return 0;
}
