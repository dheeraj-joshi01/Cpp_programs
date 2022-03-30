//sorting of list

#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l1, l2;
	
	int i;
	
	for(i = 0;i<10;i+=2)
	{
		l1.push_back(rand()%20);
	}
	
	for(i = 1;i<11;i+=2)
	{
		l2.push_back(rand()%20);
	}
	
	cout << "contents of list 1:\n ";
	
	list<int>::iterator p = l1.begin();
	
	while(p != l1.end())
	{
		cout << *p << " ";
		p++;
	}
	
	
	cout << "\n\n";
	
	p = l2.begin();
	
	cout << "contents of list 2:\n ";
		
	while(p != l2.end())
	{
		cout << *p << " ";
		p++;
	}
	
	
	cout << "\n\n";
	
	
	/*l1.sort();
	
	cout << "contents of sorted list 1:\n ";
	
	p = l1.begin();
	
	while(p != l1.end())
	{
		cout << *p << " ";
		p++;
	}
	*/
	
	cout << "\n\n";
	
	cout << "merging lists: \n";
	
	l1.merge(l2);
	
	if(l2.empty())
		cout << "list 2 is now empty\n";
		
	cout << "contents of list 1 and list 2 after merging :\n";
	
	p = l1.begin();
	
	while(p != l1.end())
	{
		cout << *p << " ";
		p++;
	}
	
	cout << "\n\n";
	return 0;
}


