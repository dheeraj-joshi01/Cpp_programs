//program to read a file and count no. of char

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream input;
	string str;
	int count=0;
	
	
	input.open("file.txt");		//open file

	if(!input)
	{
		cout << "The file cannot open\n";
	}

	else
	{
		cout << "The file opened\n";
		cout << "data is : \n" << endl;
		
		//to count total no. of words
		/*
		while(input >> str)		//read from file and save to 'str'
		{
			cout << str << " ";		//write to stdout(terminal)
			count++;			//count no. of chars in file
		}
		
		cout << endl;
		*/
		
		
		//to count total no. of lines
		while(getline(input, str))		//read from complete line from file and save to 'str'
		{
			cout << str << endl;		//write to stdout(terminal)
			count++;
		}
		
		
	}
	
	//cout << "\nTotal words in file are = " << count << endl;		//display count of words
	
	cout << "\nTotal lines in file are = " << count << endl;		//display count of lines
	
	input.close();
	
	return 0;
}
