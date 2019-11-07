//Name: Yusef Wray
//Email: Yusef.Wray25@myhunter.cuny.edu
//Date: November 2019
// C++ first programs

//Note: celsius = (farenheit -32)*(5/9)
#include <iostream>
using namespace std;

int main ()
{
	float farenheit;
	float celsius;
	float limit; 
	float second;
	cout << "Enter a number: ";
	cin >> farenheit;
	limit = farenheit - 32;
	second = 5.00/9.00;
	celsius = (limit*second)+0.001;
	cout << celsius;
	return 0;
}
