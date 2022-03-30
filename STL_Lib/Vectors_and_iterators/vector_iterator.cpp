#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);		//vector creation
	
	vector<char>::iterator p;		//create an iterator
	
	int i;
	
	
	//assign elements in vector a value
	p = v.begin();
	i = 0;
	while(p != v.end())
	{
		*p = i + 'a';
		p++;
		i++;
	}	//end of while
	
	
	cout << "original contents:\n";
	
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	
	//change the contents of vector
	p = v.begin();
	while(p != v.end())
	{
		*p = toupper(*p);
		p++;
	}
	
	cout << endl;
	
	
	cout << "modified contents:\n";
	p = v.begin();
	
	while(p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	
	cout << endl;
	
	return 0;
}


