//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

//Note: celsius = (farenheit -32)*(5/9)
#include <iostream>
using namespace std;

int main ()
{
	int farenheit;
	float celsius;
	int limit; 
	float second;
	cout << "Enter a number: ";
	cin >> farenheit;
	limit = farenheit - 32;
	second = 5.0/9.0;
	celsius = limit*second;
	cout << celsius;
	return 0;
}
