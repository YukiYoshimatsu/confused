//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

#include <iostream>
using namespace std;


int main ()
{
	double salary;
	
	cout << "Please enter your salary: ";
	cin >> salary;
	
	while (salary <= 0)
	{
		cout << "Entered a negative number. ";
		cout << "Please enter your salary: ";
		cin >> salary;
	}
	cout << "Your weekly salary is: $" ;	
	cout << salary;
	return 0;
}

