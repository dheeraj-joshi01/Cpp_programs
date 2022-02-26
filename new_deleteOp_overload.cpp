//program to overload 'new & delete operators'
#include<iostream>
using namespace std;

class location		//class defination
{
	int lon, lat;
	
	public:
		location()		//def constructor
		{
			cout << "inside default const" << endl;
			lat=0, lon=0;
		}
		
		location(int x, int y)	//param constructor
		{
			cout << "inside param const" << endl;
			lon=x, lat=y;
		}
	
		void display()
		{
			cout << "Location is : " << lon << "," << lat << endl;
 		}
 		
 		//overloading 'new' operator:
 		void * operator new(size_t size)
 		{
 			cout << "inside overloaded new" << endl;
 			void *ptr;
 			ptr = malloc(size);
 			if(ptr==NULL)
 				cout << "No memory allocated\n";
 			
 			return ptr;
 		}
 		
 		//overloading 'delete' operator:
 		void operator delete(void *pt)
 		{
 			cout << "inside overloaded delete" << endl;
 			free(pt);
 		}
 		
 		
 	};	//end of class
 
class demo
{
	int j=0;
	public:
		demo()	//def const
		{
			cout << "Inside demo def const" << endl;
		}
		
};	//end of class 
	
int main()
{
	location l1(54,22);
	l1.display();
	
	location *ptr;
	ptr = new location;
	ptr->display();
	
	delete ptr;
	
	cout << ".................." << endl;
	demo *d1;
	d1 = new demo;
	delete d1;
	return 0;
}
