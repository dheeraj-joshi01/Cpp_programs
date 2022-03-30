//program to read a file using file handling operations

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream input;
	string str;

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
		/*
		while(input >> str)		//read from file and save to 'str'
		{
			cout << str << " ";		//write to stdout(terminal)
		}
		
		cout << endl;
		*/
		
		//to read line by line
		while(getline(input, str))		//read from complete line from file and save to 'str'
		{
			cout << str << endl;		//write to stdout(terminal)
		}
		
		
	}
	
	//cout << "myfile = " << myfile.good() << endl;
	input.close();
	
	return 0;
}
