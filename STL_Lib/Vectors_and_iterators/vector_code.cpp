#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<char> v(10);		//vector creation
	
	int i;
	
	//display original size of v
	cout << "size = " << v.size() << endl;
	
	
	//assign the elements of the vector some values
	for(i=0;i<10;i++)
	{
		v[i] = i + 'a';
	}
	
	cout << "current contents " << endl;
	
	for(i = 0;i<v.size();i++)
	{
		cout << v[i] << " "; 
	}
	
	cout << "\n";
	
	cout << "expanding vector\n";
	
	for(i=0;i<10;i++)
	{
		v.push_back(i + 10 + 'a');
	}
	
	
	//display current size of v
	cout << "size now = " << v.size() << endl;
	
	cout << "current contents " << endl;
	
	for(i = 0;i<v.size();i++)
	{
		cout << v[i] << " "; 
	}
	
	
	//changing contents of vector
	for(i=0;i<v.size();i++)
	{
		v[i] = toupper(v[i]);		//convert elements to upper case
	}
	
	cout << endl;
	

	//modifying contents
	cout << "modified contents  -->  in CAPS\n";
	
	for(i = 0;i<v.size();i++)
	{
		cout << v[i] << " "; 
	}
	
	cout << endl;
	
	
	return 0;
}


