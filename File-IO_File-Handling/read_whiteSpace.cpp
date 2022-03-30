//program to read a white space in a file

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	ifstream input;
	char ch, spc = ' ';
	int count = 0;
	input.open("file.txt");		//open file

	if(!input)
	{
		cout << "The file cannot open\n";
	}

	else
	{
		cout << "The file opened\n";
		cout << "data is : \n" << endl;
		
		//to read characters
		while(input >> ch)		//read from file and save to 'str'
		{
			if(ch == spc)
				count++;
				
			cout << ch;		//write to stdout(terminal)
		}
		
		cout << endl;
		
		
	}
	
	cout << "Total whitespaces are = " << count << endl;
	input.close();
	
	return 0;
}
