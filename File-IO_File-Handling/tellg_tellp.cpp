//program to set file cursor

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream outf;
	outf.open("data.txt");
	outf << "This is my file\n";
	
	long pos =  outf.tellp();
	
	outf.seekp(pos-4);
	outf << "again my file\n";
	
	outf.close();
	
	cout << "done\n";
	
	return 0;
}
