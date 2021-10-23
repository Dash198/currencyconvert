// CurrencyConvert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "InputCurrency.h"
#include <iostream>
using namespace std;

int main()
{
    InputCurrency ic;
    int choice = 0;
    cout << "Currency Converter\n\nPress the number next to the currency, to enter the the value in the respective value\nRupees - 1\nDollars - 2\nEuros - 3\n";
    cin >> choice;
    if (choice == 1)
        ic.rupees();
    else if (choice == 2)
        ic.dollars();
    else if (choice == 3)
        ic.euro();
    else
        cout << "Wrong Input!\n";
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
