// M5Assignment_McCarthy_GymMembership.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year = 2021;  //Establish year
    double cost = 600.00;  //Set base value of current gym membership
    cout << "Gym Membership Rate Increase calculator.\n"
        << "This machine will calculate the increased cost\n"
        << "of a membership for the next three years.\n";

    while (year < 2025)
    {
        cout << "Year: " << year << "   ";
        cout << fixed << showpoint << setprecision(2);
        cout << "Cost: $" << cost << endl;
        cost = cost * 1.02;  //Calculate increase in cost
        year++;  //Increment year
    }
    cout << endl;
    return 0;
}
