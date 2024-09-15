// class activity 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Address of a user.

#include <iostream>
using namespace std;
int main()
{
    string street;
    string city;
    string state;
    int zipcode;
    cout << "Enter the street number: ";
    cin >> street;
    cout << "Enter name of the city: ";
    cin >> city;
    cout << "Enter name of the state: " ;
    cin >> state;
    cout << "Enter zipcode: ";
    cin >> zipcode;
    cout << street << endl;
    cout << city << ", " << state << "," << zipcode << endl;
    return 0;
}

