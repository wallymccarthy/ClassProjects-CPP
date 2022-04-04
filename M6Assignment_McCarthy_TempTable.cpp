// M6Assignment_McCarthy_TempTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototype
double fahrenheit(double celcius);

int main()
{
	//Set numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	//Initialize variables
	double celcius,
		converted;

	//Describe what programn does
	cout << "Welcome to Temperature Converter 2021!\n";
	cout << "Please enter a Temperature in Celcius!\n";
	//Gather input for Celcius
	cin >> celcius;
	//Call Fahrenheit function with celcius argument
	converted = fahrenheit(celcius);
	//Display Results
	cout << "\n The Temperature in Fahrenheit is " << converted << endl;
	return 0;
}

double fahrenheit(double celcius)
{
	double result = (celcius * 1.8) + 32;
	return result;
}