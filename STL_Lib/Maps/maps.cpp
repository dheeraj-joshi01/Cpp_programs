//using map to store ascii value of 'A" to 'Z'

#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<char, int> m;
	
	int i;
	
	for(i=0; i<26;i++)
	{
		m.insert(pair<char, int>('A'+i, 65+i));
	}
	
	char ch;
	
	cout << "enter key ( an uppercase letter)\n";
	
	cin >> ch;
	
	map<char, int>::iterator p;
	
	p = m.find(ch);
	
	if(p != m.end())
		cout << "its ascii value is " << p->second << endl;
		
	else
		cout << "key not in map.\n";
	
	return 0;
}
