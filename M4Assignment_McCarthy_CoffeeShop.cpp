// M4Assignment_McCarthy_CoffeeShop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double coffeePrice = 12.99, //Standard price of a pound of Coffee
        tier1discount = 0.95, //5% discount
        tier2discount = 0.90, //10% discount
        tier3discount = 0.85, //15% discount
        tier4discount = 0.80; //20% discount

    double qtpurch; //Variable for input, Quantity purchased
    //Introduce coffee shop
    cout << "Welcome to Covfefe Coffee!\n";
    //Get the Quantity Purchased
    cout << "Enter the amount of coffee purchased in pounds\n";
    cin >> qtpurch;
    //Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    //Check if input is valid
    if (qtpurch > 0)
    {
        //Input is valid, time to determine discount
        if (qtpurch >= 30)
        {
            cout << "You qualify for a 20% discount!\n";
            double subtotal = coffeePrice * qtpurch;
            double total = subtotal * tier4discount;
            cout << "Your total is: $" << total << endl;
        }
        else if (qtpurch >= 20)
        {
            cout << "You qualify for a 15% discount!\n";
            double subtotal = coffeePrice * qtpurch;
            double total = subtotal * tier3discount;
            cout << "Your total is: $" << total << endl;
        }
        else if (qtpurch >= 10)
        {
            cout << "You qualify for a 10% discount!\n";
            double subtotal = coffeePrice * qtpurch;
            double total = subtotal * tier2discount;
            cout << "Your total is: $" << total << endl;
        }
        else if (qtpurch >= 5)
        {
            cout << "You qualify for a 5% discount!\n";
            double subtotal = coffeePrice * qtpurch;
            double total = subtotal * tier1discount;
            cout << "Your total is: $" << total << endl;
        }
        else if (qtpurch < 5 && qtpurch > 0)
        {
            cout << "Sorry, you don't qualify for a discount.\n";
            double total = coffeePrice * qtpurch;
            cout << "Your total is: $" << total << endl;
        }
    }
    else //If input is invalid tell user to try again
        cout << "Please enter a value greater than zero!";

        return 0;
}