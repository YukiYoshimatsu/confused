//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

//Note: celsius = (farenheit -32)*(5/9)
#include <iostream>
using namespace std;

int main ()
{
	int x;
	int y;
	cout << "Enter the number of rows: ";
	cin >> x;
	cout << "Enter the number of columns: ";
	cin >> y;
	int i;
	int j;
	int z;
	z=0;
	for (i=0; i <x; i++)
	{
		
		for (j=0; j <y; j++)
		{
			if (z%2 == 0 or z == 0)
			{
				cout << "1";
				z = z+1;
			}
			else
			{
				cout << "0";
				z = z-1;
			}	 
			
		}
		cout << "\n";
	}
	
	return 0;
}
