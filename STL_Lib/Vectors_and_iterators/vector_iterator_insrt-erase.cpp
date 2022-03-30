//complete it using erase and insert


#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(5);		//vector creation
	
	vector<char>::iterator p1;		//create an iterator
	vector<char>::iterator p2;
	
	
	int i;
	
	
	//assign elements in vector a value
	p1 = v.begin();
	p2 = v.begin();
	
	i = 0;
	for(i=0;i<p1 != v.end())
	{
		v.insert(p1, i + 'a');
		p1 = v.begin();
		p1++;
		i++;
	}	//end of while
	
	
	/*
	cout << "original contents:\n";
	
	p = v.begin();
	while(p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	
	
	v.insert(p, 'z');
	cout << "p is : " << p << endl;
	
	
	//change the contents of vector
	/*p = v.begin();
	while(p != v.end())
	{
		*p = toupper(*p);
		p++;
	}
	
	cout << endl;
	*/
	
	cout << "modified contents:\n";
	p1 = v.begin();
	
	while(p1 != v.end())
	{
		cout << *p1 << " ";
		p1++;
	}
	
	cout << endl;
	
	return 0;
}


