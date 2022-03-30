#include<iostream>
#include<vector>
using namespace std;


class dailyTemp{
	int temp;
	
	public:
	
	dailyTemp()
	{
		temp = 0;
	}
	
	dailyTemp(int x)
	{
		temp = x;
	}
	
	dailyTemp &operator = (int x)
	{
		temp = x;
		return *this;
	}
	
	double get_temp()
	{
		return temp;
	}
	
};		//end of class

//operator overloading func defination
bool operator < (dailyTemp a, dailyTemp b)
{
	return a.get_temp() < b.get_temp();
}

bool operator == (dailyTemp a, dailyTemp b)
{
	return a.get_temp() == b.get_temp();
}


//main function
int main()
{
	vector<dailyTemp> v;		//class vector creation
	
	int i;
	
	for(i=0;i<7;i++)
	{
		v.push_back(dailyTemp(60 + rand()%30));
	}
	
	cout << "farenheit temperature : \n";
	
	for(i=0;i<v.size();i++)
	{
		cout << v[i].get_temp() << " ";
	}
	
	cout << endl;
	
	//convert from farenheit to centigrade
	
	for(i=0;i<v.size();i++)
	{
		v[i] = (v[i].get_temp()-32) * 5/9;
	}
	
	cout << "centigrade temperature : \n";
	
	for(i=0;i<v.size();i++)
	{
		cout << v[i].get_temp() << " ";
	}
	
	cout << endl;
	
	
	return 0;
}


