//Beginning of project
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_FLAVS = 7;
	string flavors[NUM_FLAVS] = { "Plain", "Butter", "Caramel",  //Naming elements in flavors array
								  "Cheese", "Chocolate", "Turtle",
								  "Zebra" };
	int bagsSold[NUM_FLAVS]; //Setting up Bags Sold Array

	cout << "MICHIGAN POPCORN COMPANY SALES TRACKER - MONTHLY" << endl;

	//Get values for Bags Sold Array
	for (int index = 0 ; index < NUM_FLAVS ; index++)
	{
		cout << "\nNumber of bags sold of " << flavors[index] << ": ";
		cin >> bagsSold[index];
	}

	//Display total sales for each bag of popcorn
	cout << "\nHere's the total amount of bags sold per flavor this past month:\n";
	
	for (int index = 0; index < NUM_FLAVS; index++)
	{
		cout << setw(9) << left << flavors[index];
		cout << " sold " << bagsSold[index] << " bags." << endl;
	}
	
	//Find the highest selling bag for the month
	int lowestCount, highestCount, highest, lowest;
	string lowestFlavor, highestFlavor;

	highest = bagsSold[0];
	for (highestCount = 1; highestCount < NUM_FLAVS; highestCount++)
	{
		if (bagsSold[highestCount] > highest)
		{
			highest = bagsSold[highestCount];
			highestFlavor = flavors[highestCount];
		}
			
	}


	//Find the lowest selling bag for the month
	lowest = bagsSold[0];
	for (lowestCount = 1; lowestCount < NUM_FLAVS; lowestCount++)
	{
		if (bagsSold[lowestCount] < lowest)
		{
			lowest = bagsSold[lowestCount];
			lowestFlavor = flavors[lowestCount];
		}
			
	}


	//Display highest and lowest flavors

	cout << "The highest amount of bags sold is: " << highest << " " << highestFlavor << endl;
	cout << "The lowest amount of bags sold is: " << lowest << " " << lowestFlavor << endl;

	return 0;
}