//program to create file handler and assign file ptr to it

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream myfile;

	myfile.open("file.txt", ios::in);

	if(!myfile)
	{
		cout << "The file cannot open\n";
	}

	else
	{
		cout << "The file opened\n";
	}
	
	//cout << "myfile = " << myfile.good() << endl;
	myfile.close();
	
	return 0;
}
