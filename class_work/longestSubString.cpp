//Program by -> Dheeraj Joshi
//to find the length of longest substring

#include<iostream>
#include<string.h>
using namespace std;


int findLen(char []);
int checkStr(char [], int , int, char);

int main()
{
	char str[50];
	
	cin >> str;
	
	cout << "length of the longest substring is : " << findLen(str) << endl;
	
	return 0;
}

int checkStr(char s[], int strt, int end, char x)
{
	for(int i = strt;i<end;i++)
	{
		if(s[i] == x)
		{
			return 1;
		}
	}

	return 0;
}

int findLen(char s[])
{
	int slen;
	int strt=0, end=0;
	char temp;	

	int len=0;
	
	slen = strlen(s);
	
	for(int i=1;i<slen;i++)
	{
		temp = s[i];
		end++;
		
		if(checkStr(s, strt, end, temp) == 1)
	 		strt++;
	 		
	}

	len = (end-strt)+1;
	
	return len;

}
