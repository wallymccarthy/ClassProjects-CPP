// M3Assignment_McCarthy_TheaterRevenue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables
    double adult, child, adultSold, childSold, gross, net, dist;
    string title;
    //Gather values for variables
    cout << "Please enter the title of the film.\n";
    getline(cin, title);
    cout << "Please enter the price of one adult ticket for " << title << endl;
    cin >> adult;
    cout << "Please enter the price of one child ticket for " << title << endl;
    cin >> child;
    cout << "How many adult tickets were sold for " << title << endl;
    cin >> adultSold;
    cout << "How many child tickets were sold for " << title << endl;
    cin >> childSold;
    //Calculate revenue
    gross = (adult * adultSold) + (child * childSold);
    net = gross * 0.75;
    dist = gross * 0.25;
    //Final Report
    cout << "Movie Name: " << title << endl;
    cout << "Adult Ticket Price: $" << adult << endl;
    cout << "Child Ticket Price: $" << child << endl;
    cout << "Adult Tickets Sold: " << adultSold << endl;
    cout << "Child Tickets Sold: " << childSold << endl;
    cout << "Gross Box Office Revenue: $" << gross << endl;
    cout << "Amount Paid to Distributor: -$" << dist << endl;
    cout << "Net Box Office Revenue: $" << net << endl;
    return 0;
}
