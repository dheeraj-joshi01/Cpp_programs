//program to read/write on file using class

#include<iostream>
#include<fstream>

using namespace std;

class stud
{
	int rno;
	char name[20];
	float marks;
	
	void getdata()
	{
		cout << "enter roll no. and name\n";
		cin >> rno >> name;
		
		cout << "marks\n";
		cin >> marks;
	}
	
	public:
	void AddRecord()
	{
		fstream f;
		stud s1;
		f.open("stud.txt", ios::app|ios::binary);
		s1.getdata();
		
		f.write((char *)&s1, sizeof(s1));
		f << "\n";
		f.close();
	}
	
	void display()
	{
		fstream f;
		stud s;
		f.open("stud.txt", ios::in|ios::binary);
		
		while(! f.eof())
		{
			f.read((char *) &s, sizeof(s));
			
			cout << "Roll : " << s.rno << "\nName : " << s.name << "\nMarks: " << s.marks << endl;
			
			//f.seekg(1,ios::cur);//f.read((char *) &s, 1);
		}
		f.close();

	}	//end of display()
	
};	//end of the class


int main()
{
	stud s1;
	
	char flag='n';
	
	do
	{
		s1.AddRecord();
		cout << "updated !!!\n" << endl;
		cout << "Want add more ? (y/n)" << endl;
		cin >> flag;
	}while(flag == 'y' || flag == 'Y');
	
	s1.display();
	
	
		
	return 0;
}
