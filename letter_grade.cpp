//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

#include <iostream>
using namespace std;

int main ()
{
	float grade;
	cout << "Enter your average grade: ";
	cin >> grade;
	if (grade < 60.00)
	{
		cout << "Your letter grade is F";
	}

	else if ((grade > 60.00) && (grade < 80.00))
	{
		cout << "Your letter grade is C or D";
	}

	else if ((grade > 80.00) && (grade < 90.00))
	{
		cout << "Your letter grade is B";
	}
	
	else
	{
		cout << "Your letter grade is A";

	}
	

	return 0;
}
