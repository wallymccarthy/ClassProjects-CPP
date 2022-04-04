// M1Assignment_McCarthy_PetStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program calculates the cost of items purchased and totals them up

#include <iostream>
using namespace std;

//Main Function
int main()
{
	double leash, collar, food, total;

	// Get value of leash
	cout << "Please enter amount paid for Leash $";
	cin >> leash;

	// Get value for collar
	cout << "Please enter amount paid for Collar $";
	cin >> collar;

	// Get value for food
	cout << "Please enter amount paid for a Bag of Food $";
	cin >> food;

	// Calculate total
	total = leash + collar + food;

	// Display total
	cout << "Total paid for supplies $" << total << endl;
	return 0;
	}
