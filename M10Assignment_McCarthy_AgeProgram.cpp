// M10Assignment_McCarthy_AgeProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 5;
    int* byarray = nullptr;
    string* namearray = nullptr;
    string* bcarray = nullptr;

    namearray = new string[SIZE]; //Allocate memory for Names Array
    
    //Get Names for each family member
    cout << "Please enter the names of family members below: \n";
    for (int count = 0; count < SIZE; count++)
    {
        cout << "Family Member " << (count + 1) << ": ";
        cin >> namearray[count];
    }
    
    //Allocate memory for Birth Year Array
    byarray = new int[SIZE];

    //Get Birth Years for each family member
    cout << "\n\nPlease enter the birth years for each family member: \n";
    for (int count = 0; count < SIZE; count++)
    {
        cout << namearray[count] << "'s Birth Year: ";
        cin >> byarray[count];
    }
    
    //Allocate memory for Birth City Array
    bcarray = new string[SIZE];

    //Get Name of birth city for each member
    cout << "\n\nPlease enter the birth city for each family member: \n";
    for (int count = 0; count < SIZE; count++)
    {
        cout << namearray[count] << "'s Birth City: ";
        cin >> bcarray[count];
    }
    //Display table for final results
    cout << "\n\nName        Birth Year  Birth City\n";
    cout << "----------------------------------\n";
    //Loop to display each parallel arrays data
    for (int count = 0; count < SIZE; count++)
    {
        cout << left << setw(12) << namearray[count]
            << right << setw(4) << byarray[count] << right << setw(16) << bcarray[count] << endl;
    }
    //Deaallocate memory storage
    delete[] namearray;
    namearray = nullptr;
    delete[] byarray;
    byarray = nullptr;
    delete[] bcarray;
    bcarray = nullptr;

    return 0;
}
