#include "OutputCurrency.h"
#include <iostream>
using namespace std;
double p;
void OutputCurrency::rd(double a)
{
    p = a / 73.65;
    cout << "The amount in Dollars is " << p << "\n";
}

void OutputCurrency::re(double a)
{
    p = a / 86.31;
    cout << "The amount in Euros is " << p << "\n";
}

void OutputCurrency::dr(double a)
{
    p = a * 73.65;
    cout << "The amount in Rupees is " << p   << "\n";
}

void OutputCurrency::de(double a)
{
    p = a * 0.86;
    cout << "The amount in Euros is " << p << "\n";
}

void OutputCurrency::er(double a)
{
    p = a * 86.31;
    cout << "The amount in Rupees is " << p << "\n";
}

void OutputCurrency::ed(double a)
{
    p = a * 1.16;
    cout << "The amount in Dollars is " << p << "\n";
}
