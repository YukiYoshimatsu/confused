//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

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
	int z;
	z=1;
	int i;
	int j;
	i=0;
	j=0;
	for (i=0; i <x; i++)
	{
		if (i%2==0)
		{
			z=1;
			cout << z;
		}
		else
		{
			z=0;
			cout << z;
		}

		for (j=1; j <y; j++)
		{
				if (z==0)
				{
					z=1;
					cout << z;
				}

				else
				{
					z=0;
					cout << z;
				}		
	
		}
		cout << "\n";
	}
	
	return 0;

}