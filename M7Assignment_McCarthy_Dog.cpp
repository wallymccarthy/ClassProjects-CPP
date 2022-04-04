// M7Assignment_McCarthy_Dog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//Class Declaration
class Dog
{
private:
    int birthyear;
    string breed;
    bool vaccines;

public:
    Dog();
    int getBirthyear();
    string getBreed();
    bool getVaccines();
};

//Constructor
Dog::Dog()
{
    cout << "Please input a birthyear: ";
    cin >> birthyear;
    cout << "\nPlease input a breed: ";
    cin >> breed;
    cout << "\nDoes the dog have its vaccines? Enter 1 for Yes, 0 for No: ";
    cin >> vaccines;
}



//Function to get birthyear
int Dog::getBirthyear()
{
    return birthyear;
}
//Function to get Breed
string Dog::getBreed()
{
    return breed;
}
//Function to get vaccine Value
bool Dog::getVaccines()
{   
    bool vax = true;

    if (vaccines > 0)
    {
        return vax;
    }
    else
    {
        vax = false;
        return vax;
    }
}

int main()
{
    cout << "Welcome to Dog Creator Beta!\n\n";

    Dog dog1;

    cout << "This dog was born in " << dog1.getBirthyear() << endl;
    cout << "This dog's breed is " << dog1.getBreed() << endl;
    cout << "The dog has it's vaccines? (1 for Yes, 0 for No): " << dog1.getVaccines() << endl;


}

