// M2Assignment_McCarthy_Grocery_Bill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{	
	//Adding variables for five grocery items
	float apples, diapers, soup, candles, partyStreamer;
	//Beginning of main program for user to input prices
	cout << "JOES MARKET\n\n";
	cout << "Please enter the prices for the following items:\n";
	cout << "Apples: ";
		cin >> apples;
		cout << "\n'Oopsie-Daisy' Adult Diapers: ";
		cin >> diapers;
		cout << "\nIndustrial Size Can of Clam Chowder: ";
		cin >> soup;
		cout << "\nFresh Dogs Breath Candle - 3 wick: ";
		cin >> candles;
		cout << "\n'Lordy Lordy, look who's turning 40!' Party Streamers: ";
		cin >> partyStreamer;
		// Calculat total of all items before tax
		float subtotal = apples + diapers + soup + candles + partyStreamer;
		//Calculate total with tax
		float total = subtotal * 1.06;
		//Display the final total with a thank you
	cout << "\nYour Total today is :\n" << total;
	cout << "\nThank you for shopping at Joe's Market!\n";
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
