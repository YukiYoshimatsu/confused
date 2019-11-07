//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

#include <iostream>
using namespace std;

int main ()
{
	float dol;
	
	cout << "Please enter your salary: ";
	cin >> dol;
	
	while (dol < 0)
	{
		cout << "Entered a negative number ";
		dol = 0;
		cout << "Please enter your salary: ";
		cin >> dol;
		if (dol > 0)
		{
			break;
		}

	cout << "Your weekly salary is: "+ dol;
	}	
	cout << "Your initial amount has been entirely spent";
	return 0;
}
