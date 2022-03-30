#include<iostream>
using namespace std;

namespace myNameSpc {
	int upper;
	int lower;
	
	class counter{
		int count;
		
		public:
		counter(int n)
		{
			if(n <= upper)
				count = n;
		}
		
		void reset(int n)
		{
			if(n <= upper)
				count = n;
		}
		
		int run()
		{
			if(count > lower)
				return count--;
			
			else
				return lower;
		}
	};//end of class counter

}//end of namespace


int main()
{
	//using namespace myNameSpc;		->> remove scope resolution from variables/objs
	
	myNameSpc::upper = 100;
	myNameSpc::lower = 0;
	myNameSpc::counter ob1(10);
	
	int i;
	
	do
	{
		i = ob1.run();		//once obj is created --> we dont need scope resolution ::
		cout << i << " ";
	}while(i > myNameSpc::lower);
	
	cout << endl;
	
	myNameSpc::counter ob2(20);
	
	do
	{
		i = ob2.run();
		cout << i << " ";
	}while(i > myNameSpc::lower);
	
	ob2.reset(100);
	myNameSpc::lower = 90;
	
	do
	{
		i = ob2.run();
		cout << i << " ";
	}while(i > myNameSpc::lower);
	
	return 0;
}
