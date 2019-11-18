//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

#include <iostream>
using namespace std;

int main ()
{
	double dol;
	double mon;
	cout << "Please enter the initial dollar amount: ";
	cin >> dol;
	
	while (dol > 0)
	{
		cout << "Please enter the amount you spent: ";
		cin >> mon;
		dol = dol - mon;
		cout << "You now have $";
		cout << dol;
		cout << " remaining";
	}	
	cout << "Your initial amount has been entirely spent";
	return 0;
}
