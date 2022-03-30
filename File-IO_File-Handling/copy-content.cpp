//program to copy content of one file and write/append to another file
//also reads the no. of chars written to second file


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream ip, op;
	char ch=0;
	int count=0;
	
	ip.open("input.txt");		//open input file
	op.open("output.txt", ios::app);		//open output file	-->>> append to existing data

	while(!ip.eof())
	{
		//read each char and write to output.txt
		
		ip.get(ch);
		op << ch;
		count++;
		
	}
	
	
	
	cout << "\ncopy done..!!" << endl;		//display status
	cout << "\nNo. of chars written : " << count << endl;		//display count
	
	ip.close();
	op.close();
	
	return 0;
}
