#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	char str[] = "I love CPP programming";
	
	vector<char> v , v2(30);
	
	int i;
	
	for(i=0;str[i];i++)
		v.push_back(str[i]);
	
	cout << "input sequence : \n" << endl;
	
	for(i=0;i<v.size();i++)
		cout << v[i];
	
	cout << endl;
	
	//remove all spaces
	//remove_copy(v.begin(), v.end(), v2.begin(), ' ');
		/*	|	 |	  |	     |
			v	 V	  V	     V
		(itr first, itr last, itr target, char_to_remove)
		*/
	
	//replace ' ' using :
	replace_copy(v.begin(), v.end(), v2.begin(), ' ', ':');		//to replace the targeted whitespace with :
	
	cout << "Result after replacing spaces:\n";
	
	for(i=0;i<v2.size();i++)
		cout << v2[i];
		
	cout << endl << endl;
		
	return 0;
}


