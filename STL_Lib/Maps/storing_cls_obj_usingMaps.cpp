#include<iostream>
#include<map>
#include<cstring>

using namespace std;


class name
{
	char str[40];
	
	public:
	name()		//def constr
	{
		strcpy(str, "");
	}

	name(char *s)		//param constr
	{
		strcpy(str, s);
	}
	
	char *get()
	{
		return str;
	}
	
};	//end of the class


bool operator <(name a, name b)
{
	return strcmp(a.get(), b.get()) < 0;
}

class phoneNum
{
	char str[80];
	
	public:
	phoneNum()		//def constr
	{
		strcpy(str, "");
	}
	
	phoneNum(char *s)		//param constr
	{
		strcpy(str, s);
	}
	
	char *get()
	{
		return str;
	}
		
};	//end of class



int main()
{
	map<name, phoneNum> dir;
	
	dir.insert(pair<name, phoneNum>(name("Emp1"), phoneNum("555-1111")));
	dir.insert(pair<name, phoneNum>(name("Emp2"), phoneNum("555-1112")));
	dir.insert(pair<name, phoneNum>(name("Emp3"), phoneNum("555-1113")));
	dir.insert(pair<name, phoneNum>(name("Emp4"), phoneNum("555-1114")));
	
	char str[80];
	
	cout << "enter name: ";
	cin >> str;
	
	map<name, phoneNum>::iterator p;
	
	p = dir.find(name(str));
	
	if(p != dir.end())
		cout << "phone number: " << p->second.get();
		
	else
		cout << "Name not in directory\n";
		
		
	cout << "\n\n";
	
	return 0;
}
