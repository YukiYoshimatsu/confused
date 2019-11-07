//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

#include <iostream>
using namespace std;

int main ()
{
	int n;
	int x;
	int b;

	cout << "Enter a number: ";
	cin >> n;
	
	if (n < 0)
	{
		cout << 1;
		x = 32 + n;
	}
	else
	{
		cout << 0;
		x=n;
	}
	
 	b = 16;
	
	while (b > 0.5)
	{
		if (x >= b)
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
		x = x%b;
		b = b/2;
		
	
	
	}
	cout << "\n";
	return 0;
}
